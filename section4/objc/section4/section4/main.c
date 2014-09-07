//
//  main.c
//  section4
//
//  Created by Wayne Lovely on 9/7/14.
//  Copyright (c) 2014 WITLOKIM. All rights reserved.
//

#include <stdio.h>
#include <objc/objc.h>

int main(int argc, const char * argv[])
{
    int even;
    int argumentCount;
    
    /*
     * '%' modulo operator, returns the remainder of the first operand divided by the second operand
     * In C, non-zero is considered true, 0 is considered false
     */
    if ((argc % 2)) {
        even = 0;
    } else {
        even = 1;
    }
    
    if (even) {
        printf("An even number of arguments was passed in (%d)\n", argc);
    } else {
        printf("An odd number of arguments was passed in (%d)\n", argc);
    }
    
    // let's look at the actual arguments ignoring the program name
    argumentCount = argc - 1;

    // ternany operator - sample IF ELSE
    even = argumentCount % 2 ? 0 : 1;
    
    if (even) {
        printf("An even number of arguments was passed in (%d)\n", argumentCount);
    } else {
        printf("An odd number of arguments was passed in (%d)\n", argumentCount);
    }

    return 0;
}

