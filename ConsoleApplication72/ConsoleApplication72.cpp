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

void doSomething() {
    std::cout << "Doing something" << std::endl;
}

void doSomethingElse() {
    std::cout << "Doing something else" << std::endl;
}

void a3(){
    bool a = false;
    if (a) { // Noncompliant
        doSomething(); // never executed
    }

    bool b = true; // Assuming b is defined somewhere
    if (!a || b) { // Noncompliant; "!a" is always "true", "b" is never evaluated
        doSomething();
    }
    else {
        doSomethingElse(); // never executed
    }
}

int main()
{
    a2();
}
int main()
{
    a2();
}

