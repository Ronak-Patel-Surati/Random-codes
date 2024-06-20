/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
        int n;
        printf("Enter the value of n =");
        scanf("%d",&n);
            if(n<0)
                {
                    printf("Number is Negative");
                }
            else if(n>0)
                {
                    printf("Number is Positive");
                }
            else
                {
                    printf("Number is zero");
                }

return 0;
}