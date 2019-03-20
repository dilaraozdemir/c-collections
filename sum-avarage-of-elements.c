#include <stdio.h>
int main(){
	int N;
	int A[N];
	int B[N];
	int C[N];
	int i,j,k, aort;
	int sum=0;
	
	printf("Dizinin boyutunu giriniz: \n");
	scanf("%d",&N);
	
	printf("Dizinin elemanlarini giriniz: \n");
	for(i=0;i<N;i++){
		scanf("%d",&A[i]);	
	}
	
	for(i=0;i<N;i++){
		sum = sum + A[i];
	}
	printf("Dizinin elemanlarinin toplami = %d\n",sum);
	aort = sum / N ; 
	printf("Aritmetik ortalama = %d\n",aort);
	
	
	for(i=0,k=0;i<N,k<N;i++,k++){
		if(A[i]>aort)
			B[k]=A[i];
	}
	 
	for(i=0,j=0;i<N,j<N;i++,j++){
		if(A[i]<aort){
			C[j]=A[i];
		}
	}
	
	
	printf("B dizisi : ");
	for(k=0;k<N;k++){
		printf("%d, ",B[k]);
	}
	
	printf("\nC dizisi : ");
	for(j=0;j<N;j++){
		printf("%d, ",C[j]);
	}
	
}
