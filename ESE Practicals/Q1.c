#include<stdio.h>
#include<conio.h>
void main()
{
	int sum = 0, avg, low, high = 0, i, no_ele;
	printf("Enter the total number of elements in the array : ");
	scanf("%d", &no_ele);
	int arr[no_ele];
	for (i = 0; i < no_ele; i++)
	{
		printf("Enter %d element : ", i+1);
		scanf("%d", &arr[i]);
	}
	low = arr[0];
	for (i = 0; i < no_ele; i++)
	{
		sum += arr[i];
		if (low>arr[i])
		{
			low = arr[i];
		}
		if (high<arr[i])
		{
			high = arr[i];
		}
	}
	avg = sum / no_ele;
	printf("The sum of all the entered elements = %d\n", sum);
	printf("The average of all the entered elements = %d\n", avg);
	printf("The smallest element of all the entered elements = %d\n", low);
	printf("The largest element of all the entered elements = %d\n", high);
}
