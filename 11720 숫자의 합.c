/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>



int main()
{
  int n, j = 0;
 
  scanf("%d", &n);
  char k[n];
  scanf("%s", k);
  
  for(int i=0; i<n; i++){
    
    int w = k[i]-'0';
    
    j += w;
  }
  printf("%d\n", j);
  
  return 0;
}

// int main()
// {
//   long long n, k, j, p = 0;
   
//   scanf("%lld", &n);
//   scanf("%lld", &k);
  
//   for(int i = 1; i<n+1; i++){
//     j = k;
//     j %= 10;
//     p += j;
//     k /= 10;
//   }
//   printf("%lld", p);
  
//   return 0;
// }