#include "sort.h"

void swap(int *a, int *b)
{
    *a = (*a) ^ (*b);
    *b = (*a) ^ (*b);
    *a = (*a) ^ (*b);
}

void print_array(int *arr, size_t n)
{
    int i = 0;
    for(; i < n; i++)
    {
        printf("%d",arr[i]);
        if(i < (n - 1))
        {
            printf(", ");
        }
    }
    printf("\n");
}

void bubble_sort(int *array, size_t size)
{
    int i = 0, j = 0;

    for(; i < size - 1 ; i++)
    {
        for(j = 0 ; j < size - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                swap(array + j, array + j + 1);
                print_array(array, size);
            }
        }
    }
}

