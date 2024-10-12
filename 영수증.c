/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

#define _crt_secure_no_warnings
#include <stdio.h>

int main() {

	int x, n, i, j = 0, a[100] = {0}, b[100] = {0};

	scanf("%d %d", &x, &n);


	for (i=0; i<n; i++) {
		scanf("%d %d", &a[n], &b[n]);
		j += a[n] * b[n];


	}
	
	if(x == j){
	    printf("Yes");
	}
	
	else{
	    printf("No");
	}
	return 0;
}


