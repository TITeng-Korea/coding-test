#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* s) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer = (char*)malloc(sizeof(char) * strlen(s) + 1);
    char ah[100] = {0,};
    char comp[2] = {0,0};
    strcpy(ah,s);
    
    if(strlen(s) % 2 == 0 ) //문자열의 길이가 짝수라면
    {
        comp[0] = ah[strlen(s)/2-1]; //가운데 첫번째 글자
        comp[1] = ah[strlen(s)/2]; //가운데 두번째 글자
        comp[2] = '\0';
    }
    else if(strlen(s) % 2 == 1) //문자열의 길이가 홀수라면
    {
        comp[0] = ah[strlen(s)/2];
        comp[1] = '\0';
        
    }
    strcpy(answer, comp);
    
    return answer;
}

