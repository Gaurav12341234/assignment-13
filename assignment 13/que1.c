//1. Write a recursive function to calculate sum of first N natural numbers.
#include<stdio.h>
int sum(int);
int main()
{
    int n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=sum(n);
    printf("Sum is %d",s);
    return 0;
}
int sum(int n)
{
    if(n==1)
        return n;
    return n+sum(n-1);
}