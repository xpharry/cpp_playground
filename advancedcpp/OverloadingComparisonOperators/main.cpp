/**
 * Name: main.cpp
 * 
 * Take-away:
 * 
 *  
 */

#include <iostream>
#include "Complex.h"
using namespace std;

int main(int argc, char **argv) {
    
    Complex c1(3, 2);
    Complex c2(3, 4);
    
    if(c1 == c2) {
        cout << "Equal" << endl;
    } else {
        cout << "Not equal" << endl;
    }
    
    if(c1 != c2) {
        cout << "Not equal" << endl;
    } else {
        cout << "Equal" << endl;
    }
    
    return 0;
}
