#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

int partition(int arr[],int left, int right, unsigned int reverse)
{
    int i = left, j = right;
    int pivot = arr[(left + right) / 2];  

    while(i <= j) 
    {
        if (reverse == 0)  
        {
            while(arr[i] < pivot) i++; 
            while(arr[j] > pivot) j--;  
        }else{  // Large to small
            while(arr[i] > pivot) i++;  
            while(arr[j] < pivot) j--;  
        }

        if (i <= j)
        {
            int t = arr[i];
            arr[i] = arr[j];
            arr[j] = t;
            i++; j--;
        }
    }
    return i;
}

void quick_sort(int arr[],int left, int right, unsigned int reverse)
{
    int index = partition(arr, left, right, reverse);
    if (left < index - 1) 
        quick_sort(arr, left, index - 1, reverse);
    if (index < right)
        quick_sort(arr, index, right, reverse);
}
int main()
{
    
    srand(time(NULL));
    int nums[100], nums1[50], nums2[50], i;
    for (i = 0; i < 100; i++)
    {  
        nums[i] = rand()%100 + 1;
    }
    for (i = 0; i < 50; i++)
    {
        
        nums1[i] = nums[i];
        nums2[i] = nums[50 + i];
    }
   
    quick_sort(nums1, 0, 49, 0);  
    quick_sort(nums2, 0, 49, 1);   
  printf("small to large\n\n"); 
    for(i = 0; i < 50; i++) printf("%d ", nums1[i]);
    printf("\n\nlarge to small\n\n ");
    for(i = 0; i < 50; i++) printf("%d ", nums2[i]);
    
    getch();
}