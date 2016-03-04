//
//  12.c
//  Project Euler
//
//  Created by Andrew Yoon on 2013-05-26.
//  Copyright (c) 2013 Andrew Yoon. All rights reserved.
//



#include <stdio.h>
#include <math.h>
#define NUM 500


int trNum(int i) {
    if (i==1) return 1;
    
    return i+trNum(i-1);
}

int numDiv(int in) {
    
    int count = 0;
    double sq = sqrt(in);
    
    if (!(sq-(int)sqrt(in))) count++;
    
    for (int i=1; i<sq; i++) {
        if (in%i == 0) count += 2;
    }
    
    return count;
}


int main() {
    
    int i=0;
    
    while(1) {
        i++;
        
        if (numDiv(trNum(i)) > 500) {
            printf("%d", trNum(i));
            break;
        }
    }
    
    
}

