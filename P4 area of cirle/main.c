/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float main()
{
  float r,pi,aoc;
  printf("Enter value of Radii = ");
  scanf("%f", &r);

  pi=3.14;
  aoc=pi*r*r;
  printf("\nArea of circle=%f", aoc);
  return 0;
}
