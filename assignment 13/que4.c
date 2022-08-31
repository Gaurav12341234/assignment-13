//4. Write a recursive function to calculate sum of squares of first n natural numbers.
#include<stdio.h>
int square(int);
int main()
{
    int n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=square(n);
    printf("sum of squares is %d",s);
    return 0;
}
int square(int n)
{
    if(n==1)
        return 1;
    return n*n+square(n-1);
}