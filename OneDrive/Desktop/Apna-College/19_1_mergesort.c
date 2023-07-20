#include <stdio.h>
void merge(int arr[], int start, int mid, int end)
{
    int i = start, j = mid + 1, k = 0;
    int ans[start + end + 1];
    while (i <= mid && j <= end)
    {
        if (arr[i] < arr[j])
        {
            ans[k++] = arr[i++];
        }
        else
        {
            ans[k++] = arr[j++];
        }
    }
    while (i <= mid)
    {
        ans[k++] = arr[i++];
    }
    while (j <= end)
    {
        ans[k++] = arr[j++];
    }
    k = 0;
    for (int i = start; i <= end; i++)
    {
        arr[i] = ans[k++];
    }
}
void mergeSort(int arr[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    int mid = (start + end) / 2;
    mergeSort(arr, start, mid);
    mergeSort(arr, mid + 1, end);
    merge(arr, start, mid, end);
}
int main()
{
    int n;
    printf("Enter size of the array:\n");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}