#include<stdio.h>
void main()
{
    int a[100],i,n,search,lb,mid,ub;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }
    printf("Enter the element you want to search\n");
    scanf("%d",&search);
    lb=0;
    ub=n;
    mid=(lb+ub)/2;

    while (lb < ub)
    {
       if(search < a[mid])
       ub = mid -1;
       if(search > a[mid])
       lb = mid +1;
       if(search == a[mid])
       printf("%d is found at %d",search,(mid+1));
break;
    }
    
    mid=(lb+ub)/2;
}