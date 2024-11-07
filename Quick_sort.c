#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", A[i]);
    }
    printf("\n");
}

int Partition(int A[], int low, int high)
{
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (A[i] <= pivot)
        {
            i++;
        }
        while (A[j] > pivot)
        {
            j--;
        }
        if (i < j)
        {
            temp = A[i];
            A[i] = A[j];
            A[j] = temp;
        }
    } while (i < j);
    //swap A[low] and A[j]
    temp = A[low];
    A[low] = A[j];
    A[j] = temp;

    return j;

}
void quicksort(int A[], int low, int high)
{
    int partitionIndex; // Index of pivot after partition
    if (low < high)
    {
        int partitionIndex = Partition(A, low, high);
        quicksort(A, low, partitionIndex - 1);  // sort left subarray
        quicksort(A, partitionIndex + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {12, 55, 3, 48, 19};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A, n);
    quicksort(A, 0, n -1);
    printArray(A, n);

    return 0;
}