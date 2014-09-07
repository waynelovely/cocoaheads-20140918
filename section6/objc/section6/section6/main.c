//
//  main.c
//  section6
//
//  Created by Wayne Lovely on 9/7/14.
//  Copyright (c) 2014 WITLOKIM. All rights reserved.
//

#include <stdio.h>

int main(int argc, const char * argv[])
{
    // a float
    float cash = 22.17;
    
    // a string
    char *place = "grocery store";
    
    printf("Someone decided to walk to a %s.  The person hadcd  $%1.2f in their pocket.\n", place, cash);
    return 0;
}

