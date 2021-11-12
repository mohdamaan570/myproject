#include <stdio.h>
void main()
{
    int i, j, n, temp, a[100];
    printf("Enter the size of Array");
    scanf("%d", &n);

    printf("Enter the elements of array");
    for(i=0; i < n; i++) {
    scanf("%d", &a[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (a[j] > a[i])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    
    printf("The Answer is: ");
    for(i=0; i < n; i++) {
        printf("%d",a[i]);
    }
}