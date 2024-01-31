#include<stdio.h>

void Bubble_Sort(int arr[],int size)
{
    int temp;

    for(int pass = 1; pass < size; pass++)
    {
        for(int i=0;i<size -pass;i++)
        {
            if(arr[i] > arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
        printf("after pass %d:\n",pass);
        for(int i=0;i<size;i++)
        {
            printf("%d \t",arr[i]);
        }
        printf("\n");
    }
    printf("\n");
    printf("after applying bubble sort:\n");
    for(int i=0;i<size;i++)
    {
        printf("%d \t",arr[i]);
    }
    printf("\n");
}
int main()
{
    int size = 0;
    printf("!!! Bubble sort !!!\n");
    printf("Time Complexity\nBest case : o(n)\nWorst case : o(n^2)\n\n");
    printf("Space Complexity :o(1)\n\n");
    printf("Enter the size of array\n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter %d elements\n",size);

    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }

    Bubble_Sort(arr,size);

    return 0;
}