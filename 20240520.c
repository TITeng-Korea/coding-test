#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int n) {
    int answer = 0;
    int array[100000] = {0,};
    array[0] = 0; 
    array[1] = 1; 
     
    for(int i = 2; i <= n; i++) 
    {
        array[i] = (array[i-1] + array[i-2]) % 1234567;
    }
    answer = array[n];
    return answer;
}


