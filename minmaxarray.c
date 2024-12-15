#include<stdio.h>
int main()
{
    int n,i,a[10],max,min;
    printf("Enter no. of array elements : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    max=a[0];
    min=a[0];
    for(i=0;i<n;i++)
    {
        
            if(a[i]>max)
            {
                max=a[i];
            }
            if(a[i]<min)
            {
                min=a[i];
            }
        
        if(max<a[i]){
        max=a[i];
    }
        if (min>a[i])
        
        {
            min=a[i];
        }
        
    }
    printf("\n jjjjj");
    printf("Max is %d and min is %d",max,min);
}