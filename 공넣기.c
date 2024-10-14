/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/


#include <stdio.h>

int main()
{
    int n, m, j;
    
    scanf("%d %d", &n, &m);
    
    int a, b, c, k[100]={0};
    
    for(int i = 1; i<m+1; i++){
        scanf("%d %d %d", &a, &b, &c); //0,1,2,3입력받음
        
        for(j=a; j<b+1; j++){
            k[j-1]=c;
        } 
        }
  
      for(int h=0; h<n; h++){
      printf("%d ", k[h]);  
          
      }
 
    return 0;
}