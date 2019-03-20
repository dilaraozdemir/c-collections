/*10 elemanlý diziyi klavyeden alan ve ters'ten ekrana yazan programý yazýnýz.
(1,5,2,4,5,6,78,12,1,3 => 3,1,12,78,6,5,4,2,5,1)
*/
#include <stdio.h>
int main(){
	int arr[10];
	int i;
	int temp;
	
	printf("Enter elements of array:\n");
	
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	printf("First array: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	for(i=0;i<10/2;i++){
		temp=arr[i];
		arr[i]=arr[10-i-1];
		arr[10-i-1]=temp;
	}
	printf("\nReverse array: ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
}
