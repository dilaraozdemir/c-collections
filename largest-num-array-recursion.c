/*Write a program in C to get the largest element of an array using recursion.*/
#include <stdio.h>
int largest(int[], int, int);
 
int main(){
    int size;
    int largestNum;
    int array[20];
    int i;
    printf("Enter size of the array:");
    scanf("%d", &size);
 
    printf("Printing the array:\n");
    for (i = 0; i < size ; i++) {
        array[i] = rand() % size;
        printf("%d\n", array[i]);
    }
    
	largestNum = array[0];
    largestNum = largest(array, size - 1, largestNum);
    printf("The largest number in the array: %d", largestNum);
    
 
}
 
int largest(int array[], int i, int largestNum){ /* i=possition */
    if (i == 0)
        return largestNum;
 
    if (i > 0) {
        if (array[i] > largestNum){
            largestNum = array[i];
        }
        return largest(array, i - 1, largestNum);
    }
}
//Other Option
/*
int greatest(a[],int n, int max){
	if(n>0){
		if(a[n-1]>max){
			max = a[n-1];
			greatest(a,n-1,max);
		}
		else{
			greatest(a,n-1,max);
		}
	}
	else
		return max;
}
*/	
