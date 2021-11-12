// #include<stdio.h>
// int main()
// {
//     int a[200],b[200],c[200],i,j,s1,s2,k=0,m=0,n;
//     printf("Enter the size of set A and B\n");
//     scanf("%d%d",&s1,&s2);
//     printf("Enter the elements of set A");
//     for(i=0; i<s1; i++)
//     {
//     scanf("%d",&a[i]);
// }
// printf("Enter the elements of set B");
//     for(j=0; j<s2; j++)
//     {
//     scanf("%d",&b[j]);
// }
// for(i=0; i<s1; i++)
// {
//     for(j=0; j<s2; j++)
//     {
//     if(a[i] == b[j])
//     {
// c[k]=a[i];
// k++;
//     }
//     }
// }

// printf("The Union of A & B: ");
// for(i=0; i<k; i++)
// {
// printf("%d\t",c[i]);
// }
// return 0;
// }
#include <stdio.h>
void main()
{
    int a[100], b[100], c[100], i, j, n, s1, s2,m=0,n;
    printf("Enter the size of set A and B:\n");
    scanf("%d%d", &s1, &s2);
    printf("Enter the elements of set A:");
    for (i = 0; i < s1; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the elements of set B:");
    for (j = 0; j < s2; j++)
    {
        scanf("%d",&b[j]);
    }
    c[m] = a[i];
    for (i = 0; i < s1; i++)
    {
        for (j = 0; j < s2; j++)
        {
            if (a[i] == b[j])
            {
                break;
            }
        }
        if(j>s1-1) {
            c[m+n] = b[j];
            n++;
        }
    }
    printf("The union is: ");
    for(i=0; i<n; i++) {
        printf("%d",c[i]);
    }
}