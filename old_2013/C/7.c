//
//  7.c
//  Project Euler
//
//  Created by Andrew Yoon on 2013-05-26.
//  Copyright (c) 2013 Andrew Yoon. All rights reserved.
//

#include <stdio.h>
#define NUM 10001

int isPrime(long int in);

int main() {
    
    long int res = 1;
    int count = 0;
    
    while(count < NUM) {
        res++;
        
        if (isPrime(res)) {
            count++;
            //printf("%dth prime: %ld\n", count, res);
        }
        
        
        
    }
    
    printf("%ld", res);
}


int isPrime(long int in) {
    for (int i=2; i<in; i++) {
        if (in%i == 0) return 0;
    }
    return 1;
}