#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* 
 * Name : <Insert name>
 * Program to determine combinations
 */

// int Factorial(int n);

// int main()
// {
//     int n;
//     int k;
//     int b;
    
//     printf("Input n: ");
//     scanf("%d", &n);
//     if(n < 1)
//     {
//         printf("Must be greater than zero\n");
//         exit(1);
//     }
    
//     printf("Input k: ");
//     scanf("%d", &k);
//     if(k < 0 || k > n)
//     {
//         printf("Must be between 0 and %d inclusive\n", n);
//         exit(1);
//     }
    
//     printf("n! = %d\n", Factorial(n));
    
//     b = Factorial(n) / (Factorial(k) * Factorial(n - k));
//     printf("%d items taken %d ways is %d\n", n, k, b);
// }

// int Factorial(int n) 
// {
// 	int f = 1;
// 	int i;
// 	for (i = 1; i <=n; i++)
// 	{
// 		f *= i;
// 	}
// 	return f;
// }