//
//  main.c
//  section3
//
//  Created by Wayne Lovely on 9/7/14.
//  Copyright (c) 2014 WITLOKIM. All rights reserved.
//

#define MAX_MESSAGE 100

#include <stdio.h>
#include <string.h>

int main(int argc, const char * argv[])
{
    int age;
    float income;
    char message[100];
    
    age = 40;
    income = age * 12345.25;
    memset(message, 0, MAX_MESSAGE);

    sprintf(message, "At age %d you should be making an income of $%1.2f", age, income);
    printf("%s\n", message);
    
    return 0;
}

