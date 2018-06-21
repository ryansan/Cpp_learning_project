//
//  HeaderDemo.cpp
//  Cpp_project
//
//  Created by Ryan Sangha on 21/06/2018.
//  Copyright © 2018 Ryan Sangha. All rights reserved.
//

#include <stdio.h>

//This method showcases that #include basically just copies the entire
//specified file. By removing } from method Test, I #include EndBrace.h
//which has only an end brace in it.
int test(){
    return 20*20;
#include "EndBrace.h"
