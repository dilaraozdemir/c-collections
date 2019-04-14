/*Write a program in C to print the array elements using recursion.*/
#include <stdio.h>
#define MAX 100

void ArrayElement(int arr1[], int st, int l);
 
int main()
{
    int arr[MAX];
    int n, i;
	
	printf("Input the number of elements to be stored in the array:");
    scanf("%d",&n);
   
    printf("Input %d elements in the array :\n",n);
    for(i=0;i<n;i++)
        {
	      scanf("%d",&arr[i]);
	    }
     
    printf("The elements in the array are : ");
    ArrayElement(arr, 0, n);
    return 0;
}

void ArrayElement(int arr1[], int start, int size)
{
    if(start >= size)
        return;
    printf("%d  ", arr1[start]);
    
    ArrayElement(arr1, start+1, size);
}
