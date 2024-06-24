#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n, int m, int section[], size_t section_len) {
    int a = section_len;
    int sec = 0;
    int answer = 0;
    for(int i=0; i<a; i++)
    {
        if(section[i]>sec)
        {
            answer++;
            sec = section[i]+m-1;
        }

    }
    return answer;
}



