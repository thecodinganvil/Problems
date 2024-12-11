#include <stdio.h>

int main() {
    int n,a[10], b[10], i,x=1,t,j=0;
    printf("Enetr no. of array elements : ");
    scanf("%d",&n);
    printf("Enter array elements : ");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {x++;
            b[j]=a[i];
            j++;
        }
        t=a[i];
    }
    printf("Duplicate in the array are : ");
    for(i=0;i<n;i++){
    if(b[i]>0)
    printf("%d\t",b[i]);
    }
    return 0;
}
