#include<stdio.h>
int main()
{
    int n,a[20],i,target;
    printf("Input array size : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter target element : ");
    scanf("%d",&target);
    for(i=0;i<n;i++)
    {
        if(a[i]==target){
        printf("%d element is the target and is found at %d position and it's index is %d",a[i],i+1,i);
        break;5
        }
        
        else 
        printf("Target element not found....");
        break;

        
    }
}