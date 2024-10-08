/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(){
    
    int n, i;
    
    scanf("%d", &n);
    
    for(i=1; i<10; i++){
        printf("%d * %d = %d\n", n, i, (i*n));
    }
    
    return 0;
}
