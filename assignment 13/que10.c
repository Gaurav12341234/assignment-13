//10. Write a program in C to calculate the power of any number using recursion.
#include<stdio.h>
int power(int,int);
int main()
{
    int a,b,s;
    printf("Enter a number and its power:");
    scanf("%d%d",&a,&b);
    s=power(a,b);
    printf("Result is %d",s);
    return 0;
}
int power(int x,int y)
{
    if(y==0)
        return 1;
    return x*power(x,y-1);
}