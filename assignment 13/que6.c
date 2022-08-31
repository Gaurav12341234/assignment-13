//6. Write a recursive function to calculate factorial of a given number.
#include<stdio.h>
int fact(int);
int main()
{
    int n,s;
    printf("Enter a number:");
    scanf("%d",&n);
    s=fact(n);
    printf("factorial is %d",s);
    return 0;
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}