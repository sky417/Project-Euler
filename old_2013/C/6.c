//
//  6.c
//  Project Euler
//
//  Created by Andrew Yoon on 2013-05-26.
//  Copyright (c) 2013 Andrew Yoon. All rights reserved.
//


#include <stdio.h>
#include <math.h>


int main() {
    
    long int sqsum = 0, sumsq = 0;
    
    for (int i=1; i<=100; i++) {
        
        sqsum += i;
        sumsq += pow(i, 2);
        
    }
    
    sqsum = pow(sqsum, 2);
    
    printf("sqsum: %ld, sumsq: %ld\n", sqsum, sumsq);
    printf("diff: %ld", (sqsum>sumsq)?(sqsum-sumsq):(sumsq-sqsum));
    
}

