#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* solution(int q, int r, const char* code) {
    char* answer = (char*)malloc(sizeof(char) * strlen(code) + 1);
    // 문자열 code의 길이만큼 answer에 동적 할당(뒤에 NULL 문자로 +1)
int point = 0;
// answer의 인덱스를 설정할 변수
    int i = 0;
    // code의 인덱스를 확인할 변수
    for(i = 0; i < strlen(code); i++)
    {
        if(i % q == r) //인덱스를 q로 나눈 나머지 값이 r과 같을 때
        {
            answer[point++] = code[i]; //answer 배열에 code 배열의 i 인덱스 값 저장
        }
    
    }
    answer[point] = '\0'; //문자열이기 때문에 NULL 문자 추가
    return answer;
}
