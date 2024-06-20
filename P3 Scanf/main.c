/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{   int a,b, add, sub, mul, divi;
        printf("Enter value of a=" );
        scanf("%d", &a);
        printf("\nEnter value of b=");
        scanf("%d" , &b);
    add=a+b;
        printf("\nAddition=%d",add);
    sub=a-b;
        printf("\nSubtraction=%d",sub);
    mul=a*b;
        printf("\nMultiplication=%d",mul);
    divi=a/b;
        printf("\ndivision=%d",divi);
    return 0;
}
