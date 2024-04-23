#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char* solution(const char* phone_number) {
char* answer = (char*)malloc(sizeof(char)*strlen(phone_number));
// 전화번호인 phone_number 문자열만큼 answer에 동적 할당 
    memset(answer, 0x00, sizeof(answer));
    // 지역 변수이기 때문에 answer에 대한 초기화 과정
    memcpy(answer, phone_number, strlen(phone_number) + 1);
    //answer에 phone_number 배열을 공백문자를 포함하여 phone_number 배열보다 1크게 복사
    memset(answer, '*', strlen(phone_number)-4);
    //answer 배열에서 4개의 숫자를 제외한 나머지만큼 * 문자를 추가 
return answer;
}

