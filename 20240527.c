#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int bandage[], size_t bandage_len, int health, int** attacks, size_t attacks_rows, size_t attacks_cols) {
    int answer = 0;
    
    int hp = health; 
    int bandCnt = 0; 
    int monsterTime = attacks[0][0]; 
    int monsterAttack = attacks[0][1]; 
    
    int monsterCnt = 0; 
    
    for(int i = 1; i < (attacks[attacks_rows -1][0])+1; i++) 
    {
        printf("%d ", hp);
        if(monsterTime == i)
        {
            bandCnt = 0; 
            hp -= monsterAttack;
            if(hp <= 0) 
                return -1; 
            if(monsterCnt + 1 < attacks_rows) 
            {
                monsterCnt++;
                monsterTime = attacks[monsterCnt][0]; 
                monsterAttack = attacks[monsterCnt][1]; 
                
            }
        }
        else
        {
            bandCnt++; 
            if(hp < health) 
            {
                hp += bandage[1];
                if(bandCnt == bandage[0]) 
                {
                    bandCnt = 0;
                    hp += bandage[2]; 
                }
                
                if(hp >= health)
                    hp = health; 
            }
        }
    }
    answer = hp;
    return answer;
}