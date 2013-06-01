//
//  5.c
//  Project Euler
//
//  Created by Andrew Yoon on 2013-05-26.
//  Copyright (c) 2013 Andrew Yoon. All rights reserved.
//


#include <stdio.h>
#define NUM 20

int main() {
    
    long int res = 2;
    int found = 0;
    
    while(1) {
        //        printf("checking %d....\n", res);
        found = 1;
        
        for (int i=2; i<=NUM; i++) {
            if (res % i != 0) found = 0;
        }
        
        
        if (found == 1) break;
        
        res++;
    }
    
    printf("%ld", res);
}


