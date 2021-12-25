int quicksort(int* arr, int start, int end){
    int pivot = start;
    int left = start, right = end;
    int i,temp;
    if(start >= end)
        return 1;
    while(right > left){
        for(i = right; i>=pivot; i--){
            if(arr[i] < arr[pivot]){
                temp = arr[i];
                arr[i] = arr[pivot];
                arr[pivot] = temp;
                pivot = i;
                right = i;
                break;
            }
            right = i;
        }
        for(i = left; i<=pivot; i++){
            if(arr[i] > arr[pivot]){
                temp = arr[i];
                arr[i] = arr[pivot];
                arr[pivot] = temp;
                pivot = i;
                left = i;
                break;
            }
            left = i;
        }
    }
    quicksort(arr,start,pivot - 1);
    quicksort(arr,pivot + 1, end);
    
    for(i = start; i <= end; i++)
        printf("%d ",arr[i]);
    printf("\n");
    return 1;
}

long long subArrayRanges(int* nums, int numsSize){
    quicksort(nums,0,numsSize-1);
    int i;
    return 0;
}
