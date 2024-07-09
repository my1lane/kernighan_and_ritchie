//
// Created by Alexander on 25.06.2024.
//

#include <stdio.h>

int main(void) {
     const int numbers[3][2] = { {1, 2}, {4, 5}, {7,8}};
     int i, j;

     for (i = 0; i < 3; ++i){
         for(j = 0; j < 2; ++j){
             printf("numbers[%d][%d] = %d \n", i, j, numbers[i][j]);
         }
     }
     return 0;
}