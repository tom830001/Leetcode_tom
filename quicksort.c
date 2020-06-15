#include <stdio.h>


void quicksort(int * arr, int start, int end)
{
	if(start >= end)
		return;
	int temp = arr[start];
	int i = start, k = end;
	while(i < k)
	{
        for (k; arr[k] >= temp && k > i; k--)
		{
			arr[i] = arr[k];
			arr[k] = temp;
		}
        for (i; arr[i] <= temp && i < k; i++);
		{
			arr[k] = arr[i];
			arr[i] = temp;
		}
	}
	quicksort(arr, start, i-1);
	quicksort(arr, k+1, end);
}

int* sort(int * arr, int start, int end)
{
	quicksort(arr, start, end);
	return arr;
} 
int main()
{
	int arr[14] = {5,7,321,65,8,1,2,3,987,1,23,564,7,1};
	sort(arr,0,14);
	int i;
	for(i = 0; i < 14; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	return 0; 
}
