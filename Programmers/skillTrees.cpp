#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
// skill_trees_len은 배열 skill_trees의 길이입니다.
int solution(const char* skill, const char* skill_trees[], size_t skill_trees_len) {
    int index = 0;
    int count = 0;
    bool flag = 0;
    
    for (int i = 0; i < skill_trees_len; i++) {
        flag = 0;
        index = 0;
        for (int j = 0; j < (int)strlen(skill_trees[i]); j++) {
            if (skill_trees[i][j] == skill[index])
                index++;
            else {
                for (int k = index + 1; k < (int)strlen(skill); k++) {
                    if (skill_trees[i][j] == skill[k]) {
                        flag = 1;
                        count++;
                        break;
                    }
                }
            }
            if (flag == 1)
                break;
        }
    }
    
    return skill_trees_len - count;
}