#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int k, int m, int score[], size_t score_len) {
    int answer = 0;
    int count[9] = {0,};
    
    for(int i = 0; i < score_len; i++) 
    {
        count[score[i]-1]++;
    }
    for(int i = k-1 ; i >= 0; i--) 
    {
        answer += count[i]/m * (i+1) * m; 
        
        if(i != 0)
        {
            count[i-1] += count[i] % m;
        }
    }
    return answer;
    
}


