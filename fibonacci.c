#include<stdio.h>

int main(){
	int A[100];
	int a,i;
	A[0]=1;
	A[1]=1;
	
	printf("a sayisiniz giriniz: ");
	scanf("%d",&a);
	
	for(i=2;i<=a;i++){
		A[i] = A[i-2] + A[i-1];
	}	
	for(i=0;i<=a;i++){
		printf("%d ",A[i]);
	}
}
