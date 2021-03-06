/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 */

#include <iostream>
#include <vector>
#include <memory.h>
using namespace std;

class Test {
private:
    static const int SIZE=100;
    
    int *_pBuffer{nullptr};
    
public:
    Test() {
        _pBuffer = new int[SIZE]{};
        // memset(_pBuffer, 0, sizeof(int)*SIZE);
    }
    
    Test(int i) {
        _pBuffer = new int[SIZE]{};
        
        for(int i = 0; i < SIZE; i++) {
            _pBuffer[i] = 7*i;
        }
    }
    
    Test(const Test &other) {
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
    }
    
    Test(Test &&other) {
        cout << "Move constructor" << endl;
        _pBuffer = other._pBuffer;
        other._pBuffer = nullptr;
    }
    
    Test &operator=(const Test &other) {
        _pBuffer = new int[SIZE]{};
        
        memcpy(_pBuffer, other._pBuffer, SIZE*sizeof(int));
        
        return *this;
    }
    
    ~Test() {
        delete[] _pBuffer;
    }
    
    friend ostream &operator<<(ostream &out, const Test &test);
};

ostream &operator<<(ostream &out, const Test &test) {
    out << "Hello from test";
    return out;
}
    
Test getTest() {
    return Test();
}

void check(const Test &value) {
    cout << "lvalue function!" << endl;
}

void check(const Test &&value) {
    cout << "rvalue function!" << endl;
}

int main(int argc, char **argv) {
	
    vector<Test> vec;
    vec.push_back(Test());
    
	return 0;
}
