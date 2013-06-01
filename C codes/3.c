//
//  3.c
//  Project Euler
//
//  Created by Andrew Yoon on 2013-05-26.
//  Copyright (c) 2013 Andrew Yoon. All rights reserved.
//

#include <stdio.h>
#define INPUT 600851475143

int isPrime(long int in);

int main() {
    printf("%ld\n", INPUT);
    
    for (long int i=2; i<INPUT; i++) {
        //        printf("%ld, %ld\n", i, INPUT%i);
        if (INPUT % i == 0) {
            if (isPrime(INPUT/i)) {
                
                printf("%ld, prime is %ld\n", i, INPUT/i);
                break;
            }
        }
        
    }
    
    return 0;
    
}

int isPrime(long int in) {
    for (int i=2; i<in; i++) {
        if (in%i == 0) return 0;
    }
    return 1;
}