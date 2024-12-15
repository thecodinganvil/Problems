#include<stdio.h>
int main()
{
    int n,i,a[20],max,min,t,k;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
    
        
            if(min>a[i])
            {
                t=a[i];
                a[i]=min;
                min=t;
            }
        
    }
    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            k=a[i];
            a[k]=max;
            max=k;
        }
    }
    printf("\n %d is max %d is min",max,min);
}