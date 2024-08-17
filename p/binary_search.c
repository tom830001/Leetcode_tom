// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 6
// Output: TRUE
// Input:    {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, 3, 7, 3
// Output: FALSE

#include <stdio.h>

int binary_search(unsigned int * arr, int l, int u, int target)
{
    if(target < arr[l] || target > arr[u])
        return 0;

    int mid = (l + u) / 2;
    if(arr[mid] > target)
        binary_search(arr, l, mid - 1, target);
    else if(arr[mid] < target)
        binary_search(arr, mid + 1, u, target);
    else if(arr[mid] == target)
        return 1;
}
void main(void)
{
    unsigned int sorted_data[10] = {0};
    for (int idx = 0; idx < 10; idx++)
    {
        sorted_data[idx] = idx * 1;
    }
    printf("%X", binary_search(sorted_data, 3, 7, 3));
}
