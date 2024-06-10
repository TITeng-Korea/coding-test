#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
char** solution(const char* players[], size_t players_len, const char* callings[], size_t callings_len) {
    char** answer = (char**)malloc(players_len * sizeof(char*));
for(int i = 0; i < players_len; i++)
    {
        answer[i] = strdup(players[i]); 
    }
    for(int i = 0; i < callings_len; i++)
    {
        for(int j = 1; j < players_len; j++)
        {
            if(strcmp(answer[j], callings[i]) == 0) 
            {    
                char* temp = answer[j-1];
                answer[j-1] = answer[j];
                answer[j] = temp;
            }
        }
    }
    return answer;
}

