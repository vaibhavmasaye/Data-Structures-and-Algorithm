// Iterative C++ program to 
// multiply array elements 
#include<bits/stdc++.h> 
  
using namespace std; 
  
// Function to calculate the 
// product of the array 
int multiply(int array1[], int n) 
{ 
    int pro = 1; 
    for (int i = 0; i < n; i++)  
        pro = pro * array1[i]; 
    return pro; 
} 
  
  int multi(int array2[], int n) 
{ 
    int pro = 1; 
    for (int i = 0; i < n; i++)  
        pro = pro * array2[i]; 
    return pro; 
} 

int mul(int array3[], int n) 
{ 
    int pro = 1; 
    for (int i = 0; i < n; i++)  
        pro = pro * array3[i]; 
    return pro; 
} 
// Driver Code 
int main() 
{ 
    // 1st
    int array1[] = {100,10,12,1000}; 
    int a = sizeof(array1) / sizeof(array1[0]); 
    cout << multiply(array1, a)<<endl; 
    // 2nd
    int array2[] = {100,121,100000}; 
    int b = sizeof(array2) / sizeof(array2[0]); 
    cout << multi(array2, b)<<endl; 
    // 3rd
    int array3[] = {10,100,1000}; 
    int c = sizeof(array3) / sizeof(array3[0]); 
    cout << mul(array3, c)<<endl; 
    return 0; 
} 