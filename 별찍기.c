/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(){
    
    int n, i, j;
    
    scanf("%d", &n);
    
    for(i=1; i<n+1; i++){
       for(j=1; j<i+1; j++){
           printf("*");
       }
    printf("\n");
     
    }
    
    return 0;
}

