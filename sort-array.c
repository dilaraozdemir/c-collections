/*3. C Program to Sort an array in ascending and descending order using function
Code for Sorting of array elements using a function in C Programming
*/
#include<stdio.h>
void sort(int A[],int n){
	int i,j,temp;
	for(i=1;i<=n-1;i++){
		for(j=1;j<=n-i;j++){
			if(A[j-1]>=A[j]){
				temp=A[j-1];
				A[j-1]=A[j];
				A[j]=temp;
			}
		}
	}
}
int main(){                                                           
       int i;                                                  
       int dizi[5] = {50, 15, 102, 79, 25};             
                                                               
       printf("Siralamadan once dizi: ");                       
       for(i = 0; i < 5; i++)                                  
          printf("%4d", dizi[i]);                                       
		                                            
       sort(dizi,5);                                        
       printf("\nSiralamadan sonra dizi: ");
       for(i = 0; i < 5; i++)                                  
          printf("%4d", dizi[i]);
          
       printf("\nSiralamadan sonra dizinin tersten siralanmasi: ");
       for(i = 4; i >=0; i--)
          printf("%4d", dizi[i]);         
   }                                                           

