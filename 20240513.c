#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int num = 0;
    int temp[100];
    for(int i = 0 ; ; i++){
        if(n < 3){
            temp[i] = n;
            num = i;
            break;
        }
        else
            temp[i] = n % 3;
            n = n / 3;
    }
    
    n = 1;

    for(int i = num; i>=0; i-- ){
        answer = answer + (temp[i]*n);
        n *= 3;
    }
    return answer;
}

