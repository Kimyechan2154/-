/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main(){
    
    int a, b, c[10000];
    
    for(int i=0; i<10000; i++){
    scanf("%d %d", &a, &b);
    c[i] = a+b;
    
    }
    
    
    return 0;
}

// int main(){
//     int a;
 
//     scanf("%d", &a);
    
//     int b[a];
    
//     for(int i=0; i<a; i++){
//         b[i] = i+1; 
//     }
 
//   for(int w=0; w<a; w++){
//     printf("%d\n", b[w]);
//     }
// }

// int main(){
//     int a[5], b, c = 0;
    
//     for(int i=0; i<5; i++){
//         scanf("%d", &a[i]);
//         b = a[i]*a[i];
//         c += b;
        
//     }
    
//     printf("%d", c%10);
//     return 0;
// }



// int main(){
//     int a[10] = {0};
    
//     for(int i=0; i<10; i++){
//         scanf("%d", &a[i]);
//         a[i] %= 42;
//     }
    
//     for(int i=0; i<10; i++){
//         for(int j = i+1; j<10;j++)
//         if(a[i] == a[j]){
//             a[j] = 100;
//         }
//     if(a[i]<49){
//         a[i] = 1;
//     }    
//     }   
//     int k = 0;
    
//     for(int w=0; w<10; w++){
        
//         k += a[w];
//         k %= 100;
        
    
//     }
//     printf("%d ", k);
//     return 0;
// }



// int main()
// {
//     int a[30], b[28], m, j;
    
//     for(int i=0; i<30; i++){
//         a[i]= i+1;
//     }
//     for(int i=0; i<28; i++){
//         scanf("%d", &m);
//         a[m-1] = 0;
//     }
    
//           for(int w=0; w<30; w++){
//               if(a[w] > 0){
//               printf("%d\n", a[w]);
                  
//               }
              
//     }
    
//  return 0;   
// }

// int main()
// {
//     int m, n, a, b, c, d;
//     scanf("%d %d", &n, &m);
    
//     int p[n];
    
//     for(int j=0; j<n; j++){
//         p[j] = j+1;
//     }
//     for(int i=0; i<m; i++){
//         scanf("%d %d", &a, &b);
        
//         c = p[a-1];
//         d = p[b-1];
//         p[a-1] = d;
//         p[b-1] = c;
      
//     }
//       for(int w=0; w<n; w++){
//     printf("%d ", p[w]);
//     }
//     return 0;
// }