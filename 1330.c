/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    int a, b;
    
    printf("enter 2 num : \n");
    scanf("%d %d", &a, &b);
    
    if(a > b)
    {
        printf(">");
    }
    
    else if(a < b)
    {
        printf("<");
    }
    
    else
    {
        
        printf("==");
    }
    
    return 0;
}


// int main(){
   
//   char c1;
   
//   scanf("%c", &c1);
   
//   if (c1 == 107)
//   {
//       printf("k입니다.\n");
//   }
   
//   return 0;
// }





//   char a[10] ={"hello"};
   
   
   
//   printf("당신이 제일 좋아하는 숫자는 무엇입니까");
   
//   scanf("%f", &box);
   
//   printf("\n 당신의 키는 %.2f 입니다", box);
