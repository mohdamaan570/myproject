#include<stdio.h>
int main()
{
    int a[200],b[200],c[200],i,j,s1,s2,k=0;
    printf("Enter the size of set A and B\n");
    scanf("%d%d",&s1,&s2);
    printf("Enter the elements of set A");
    for(i=0; i<s1; i++)
    {
    scanf("%d",&a[i]);
}
printf("Enter the elements of set B");
    for(j=0; j<s2; j++)
    {
    scanf("%d",&b[j]);
}
for(i=0; i<s1; i++)
{
    for(j=0; j<s2; j++)
    {
    if(a[i] == b[j])
    {
c[k]=a[i];
k++;
    }
}
}
printf("The intersection of A & B: ");
for(i=0; i<k; i++)
{
printf("%d\t",c[i]);
}
return 0;
}