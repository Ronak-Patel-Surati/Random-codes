/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void main()
{
    int mark;
        printf("Enter marks of Student= ");
        scanf("%d",&mark);
    if(mark>=0 && mark<=100)
        {
        if(mark>=70)
            printf("Student secure Distinction");
        if(mark>=60 && mark<70)
            printf("Student secure First Class");
        if(mark>=35 && mark<60)
            printf("Student secure Second Class");
        if(mark<35)
            printf("Student is Fail");
        }
        
        else
        {
            printf("Please Enter Mark between 0 to 100");
        }
        return 0;
}

