//
//  4.c
//  Project Euler
//
//  Created by Andrew Yoon on 2013-05-26.
//  Copyright (c) 2013 Andrew Yoon. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int isPal(int in);
int digits(int in);

int main() {
    
    int curval = 0;
    int curi = 0;
    int curj = 0;
    
    for (int i=100; i<1000; i++) {
        for (int j=100; j<1000; j++) {
            if (isPal(i*j) && (i*j > curval)) {
                curi = i;
                curj = j;
                curval = i*j;
            }
        }
    }
    
    //printf("%d\n", isPal(7575757));
    
    printf("%d * %d = %d", curi, curj, curval);
    
}


int isPal(int in) {
    
    int size = digits(in);
    int d1, d2;
    
    for (int i=0; i < size/2; i++) {
        d1 = in - in / (int)pow(10, i+1) * (int)pow(10, i+1);
        d1 /= (int)pow(10, i);
        
        d2 = in / (int)pow(10, size-(1+i));
        if (d2 > 9) d2 -= d2 / 10 * 10;
        
        if (d1 != d2) return 0;
    }
    
    return 1;
}

int digits(int in) {
    int count = 0;
    
    while (in != 0) {
        count++;
        in /= 10;
    }
    
    return count;
}