#include <stdio.h>
#include <math.h>
int main(){
	int N;
	printf("Enter the size of arrays\n");
	scanf("%d",&N);
	int A[N];
	int B[N];
	int C[N];
	int dizi[N];
	int i;
	
	printf("Enter elements of A\n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);
	}
	
	for(i=0;i<N;i++){
		B[i]= pow(A[i],2);
	}
	printf("Array B\n");
	for(i=0;i<N;i++){
		printf("%d ",B[i]);
	}
	
	
	for(i=0;i<N;i++){
		C[i]=sqrt(A[i]);	
	}
	printf("\nArray C\n");
	for(i=0;i<N;i++){
		printf("%d ",C[i]);
	}
	
	for(i=0;i<N;i++){
		dizi[i]=C[i]*B[i];
	}
	
	
	printf("\nArray dizi\n");
	for(i=0;i<N;i++){
		printf("%d ",dizi[i]);
	}
	
}
