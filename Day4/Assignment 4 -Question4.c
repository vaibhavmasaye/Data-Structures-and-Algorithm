// program for calculating mid of array 
#include <stdio.h> 
#include <limits.h> 
int main() 
{ 
	int start = INT_MAX, end = INT_MAX; 
	printf("start = %d \n", start); 
	printf("end = %d \n", end); 

	// method 1 
	int mid1 = (start + end) / 2; 
	printf("mid using (start + end)/2 = %d \n", mid1); 

	// method 2 
	int mid2 = start + (end - start) / 2; 
	printf("mid using start + (end - start)/2 = %d \n", mid2); 
	return 0; 
} 
