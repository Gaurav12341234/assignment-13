//9. Write a program in C to count the digits of a given number using recursion.
#include<stdio.h>
int count(int);
int main()
{
    int n,k;
    printf("Enter a number:");
    scanf("%d",&n);
    k=count(n);
    printf("%d digits",k);
    return 0;
}
int count(int n)
{
    int s;
    if(n==0)
        return 0;
    s=count(n/10);
    return s+1;
}