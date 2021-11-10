#include<stdio.h>
void main()
{
    int a[10],P,i;
    printf("Enter the elements of Array:\n");
    for(i=0; i<6; i++){
    scanf("%d",&a[i]);
    }
    printf("Enter the position of deleting element:\n");
    scanf("%d",&P);
    P = P - 1;
    for(i=P; i<5; i++){
        a[i]=a[i+1];
}
printf("new array:\n");
    for(i=0; i<5; i++)
    printf("%d",a[i]);
}