#include <stdio.h>
int main(){
	int i,j;
	int temp;
	int dizi[7];
	printf("Enter elements of array:");
	for(i=0;i<7;i++){
		scanf("%d",&dizi[i]);
	}
	for(i=0;i<7/2;i++){
		temp=dizi[i];
		dizi[i]=dizi[7-i-1];
		dizi[7-i-1]=temp;
	}
	for(i=0;i<7;i++){
		printf("%d",dizi[i]);
	}
}
