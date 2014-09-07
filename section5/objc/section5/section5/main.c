//
//  main.c
//  section5
//
//  Created by Wayne Lovely on 9/7/14.
//  Copyright (c) 2014 WITLOKIM. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int calculateArea(int length, int height) {
    int area;
    
    area = length * height;
    
    return area;
}

int main(int argc, const char * argv[])
{
    int area, length, height;

    if (argc != 3) {
        printf("USAGE: ./section5 LENGTH(integer) HEIGHT(integer)\n");
        return -1;
    }

    length = atoi(argv[1]);
    height = atoi(argv[2]);
    
    area = calculateArea(length, height);
    
    printf("The area of a box with length of %d and height of %d is %d\n", length, height, area);
    
    return 0;
}

