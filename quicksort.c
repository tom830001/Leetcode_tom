#include <stdio.h>


void quicksort(int * arr, int start, int end)
{
	if(start >= end)
		return;
	int pivot = arr[start]; //choose a pivot
	int i = start, k = end;
	while(i < k)
	{
		for(k; arr[k] >= pivot && k > i; k--);
			arr[i] = arr[k];
			arr[k] = pivot;
		for(i; arr[i] <= pivot && i < k; i++);
			arr[k] = arr[i];
			arr[i] = pivot;
		
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
	int arr[14] = {5,7,321,65,8,1,2,3,987,1,23,564,9,1},i;
	sort(arr,0,13);
	
	for(i = 0; i < 14; i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	return 0; 
}
