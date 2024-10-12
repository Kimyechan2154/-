/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#define _crt_secure_no_warnings
#include <stdio.h>

int main(){
    int i, n, j;
    
    scanf("%d", &i);
    
    int a[i], b[i], c[i];
    
    for(n=0; n<i; n++){
        scanf("%d %d", &a[n], &b[n]);
        
        c[n] = a[n] + b[n];
        
        
    }
    
     for(j=0; j<i; j++){
        printf("Case #%d: %d\n",j+1, a[j]+b[j]);
     }
}

