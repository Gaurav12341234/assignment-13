//8. Write a recursive function to print first N terms of Fibonacci series.
#include<stdio.h>
int fibo(int);
int main()
{
    int n,i;
    printf("Enter a number:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("%d ",fibo(i));
    }
    return 0;
}
int fibo(int n)
{
    if(n==1||n==0)
        return n;
    return fibo(n-1)+fibo(n-2);
}