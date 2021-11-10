#include<stdio.h>
void main()
{
    int a[10],E,P,i,n;
    printf("Enter the last element of array");
    scanf("%d",&n);
    printf("Enter the elements of Array:\n");
    for(i=0; i<n; i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the new element:\n");
    scanf("%d",&E);
     printf("Enter the position of new element:\n");
    scanf("%d",&P);
    P = P - 1;
    for(i=n; i>P; i--){
        a[i+1]=a[i];
        a[P]=E;
    }
    printf("new array:\n");
    for(i=0; i<n+1; i++)
    printf("%d",a[i]);
}