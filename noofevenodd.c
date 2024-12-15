#include<stdio.h>
int main()
{
    int n,t,b,x=0,y=0;
    printf("Input a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        b=t%2;
        if(b==0)
        x++;
        else 
        y++;
        n=n/10;
    }
    printf("Number of odd intergers is %d and even is %d",y,x);
}