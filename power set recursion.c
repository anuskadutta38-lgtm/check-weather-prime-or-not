#include<stdio.h>
int main () {
    int b[] ={2, 3, 1, 8};
    int i, j;
    
    for (i = 0; i < 4; i++) {
        
        printf("%d\n" , b[i]);
        
        for (j = i + 1; j < 4; j++) {
             printf("%d , %d\n" , b[i] , b[j]);
             
        }
    }
   return 0; 
