#include<stdio.h>
void main()
{
    int i,j,n,a[100],temp;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    printf("Enter the elements of array\n");
    for(i=0; i<n; i++) {
        scanf("%d",&a[i]);
    }

     for(i=1; i<n; i++) {
         for(j=0; j<n-i; j++) {
 if(a[j] > a[j+1]) {
temp = a[j];
a[j] = a[j+1];
a[j+1] = temp;
 }
         }
     }
     
     for(i=0; i<n; i++) {
         printf("New array is: %d",a[i]);
     }
}
