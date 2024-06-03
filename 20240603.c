#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int* solution(const char* wallpaper[], size_t wallpaper_len) {
int* answer = (int*)malloc(sizeof(int)*4);
    char c1 = '#';
    char *ptr1, *ptr2;
    int x_min = 50; 
    int y_min = 50; 
    static int x_max, y_max = 0; 
    for(int loop = 0; loop < wallpaper_len; loop++)
    {
        ptr1 = strchr(wallpaper[loop], c1); 
        ptr2 = strrchr(wallpaper[loop], c1); 
        
        if(ptr1 != NULL)
        {
            if(x_min > ptr1 - wallpaper[loop])
            {
                x_min = ptr1 - wallpaper[loop];
            }
            if(y_min > loop)
            {
                y_min = loop;
            }
        }
        if(ptr2 != NULL)
        {
            if(x_max < ptr2 - wallpaper[loop] + 1)
            {
                x_max = (ptr2 - wallpaper[loop]) + 1; 
            }
            if(y_max < loop + 1)
            {
                y_max = loop + 1;
            }
        }
    }
    answer[0] = y_min;
    answer[1] = x_min;
    answer[2] = y_max;
    answer[3] = x_max;
    return answer;
}
