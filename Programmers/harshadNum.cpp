#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool solution(int x) {
    int divisor = 0;
    int dividend = x;
        
    while (x / 10 != 0) {
        divisor += x % 10;
        x = x / 10;
    }
    divisor += x;
    
    if (dividend % divisor == 0)
        return true;
    else
        return false;
}