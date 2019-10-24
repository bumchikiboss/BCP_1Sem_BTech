/*
Developed By : Hanut Kumar Arora
First Created On : 07-12-2018
Aim : Write a program to print sum, average of all numbers, smallest and largest element of an array.
*/

#include<stdio.h>
#include<conio.h>

int main()
{
	int no_ele, sum = 0, avg, smallest, largest = 0, i;
	/*	no_ele is for no of elements in the array
		sum for the sum of all the elements of the array
		avg is sum of all elements divided by no of elements -> avg = sum / no_ele
		smallest will hold the smallest element of the whole array
		largest will hold the largest element of the whole array, it is initalised with zero to prevent comparison with a dump value
		i will be used for looping
	*/
	
	// total no of elements for thw array to be created and array creation
	printf("Enter the total number of elements in the array : ");
	scanf("%d", &no_ele);		// no_ele now has the no of elements for which array is to be made
	int arr[no_ele];		// array with specified no of elements is created
	
	// loop for array population with user input starts
	for (i = 0; i < no_ele; i++)
	{
		printf("Enter %d element : ", i+1);
		scanf("%d", &arr[i]);
	}
	// loop for array population with user input ends
	
	smallest = arr[0];		// smallest needs to have one of the elements from the array or else elements will be compared with 0
	
	// loop for calculation of sum, smallest and largest starts
	for (i = 0; i < no_ele; i++)
	{
		sum += arr[i];
		if (smallest>arr[i])
		{
			smallest = arr[i];
		}
		if (largest<arr[i])
		{
			largest = arr[i];
		}
	}
	// loop for calculation of sum, smallest and largest ends
	
	avg = sum / no_ele;		// as per the formula mentioned above
	
	// printing all the calculated results
	printf("The sum of all the entered elements = %d\n", sum);
	printf("The average of all the entered elements = %d\n", avg);
	printf("The smallest element of all the entered elements = %d\n", smallest);
	printf("The largest element of all the entered elements = %d\n", largest);
	return 0;
}
