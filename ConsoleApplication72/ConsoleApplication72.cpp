// ConsoleApplication72.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int* a1() {
    return nullptr;
}
void a2() {
    
    int* a = a1();

    if (a != nullptr) {
        *a = 1;
    }
    else {
        *a = 2;
    }


    int var = 0;
    a = &var;

    if (a != nullptr) {
        *a = 1;
    }
    else {
        *a = 2;
    }
}

int main()
{
    a2();
}

