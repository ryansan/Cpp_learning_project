//
//  main.cpp
//  Cpp_project
//
//  Created by Ryan Sangha on 21/06/2018.
//  Copyright © 2018 Ryan Sangha. All rights reserved.
//

#include <iostream>

void log(const char* message);
int multiply(int a, int b);
int test();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    log("HEII");
    
    std::cin.get();
    
    int c = multiply(20,20);
    
    log("c");
    
    test();
    
    return 0;
}
