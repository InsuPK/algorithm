#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
bool solution(const char* s) {
    int i = 0;
    int count = 0;
    
    while(true) {
        if (s[i] == '\0')
            break;
        else {
            if (s[i] < '0' || s[i] > '9')
                return false;
            count++;
        }
        i++;
    }
    
    if (count == 4 || count == 6)
        return true;
    else
        return false;
}