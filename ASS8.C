#include<stdio.h>
int main(void)
{
	int nums[] = {2, 5, 5, 5, 6, 6, 8, 9, 9, 9};
	int n = sizeof(nums)/sizeof(nums[0]);
     int target = 5;
     int index = findFirstOccurrence(nums, n, target);
     if (index != -1)
	{
       printf("The first occurrence of element %d is located at index %d",
				target, index);
	}
	else 
     {
	printf("Element not found in the array");
	}
      return 0;
}