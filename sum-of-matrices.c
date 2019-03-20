/*Ayný satýr ve sütun sayýsýna sahip iki matrisi toplayan C kodunu yazýnýz. Matris deðerleri
klavyeden girilecek.*/
#include <stdio.h>
int main(){
	int i, j;
	int a,b;
	int A[a][b];
	int B[a][b];
	int C[a][b];
	
	printf("Satir sayisini giriniz\n");
	scanf("%d",&a);
	
	printf("Sutun sayisini giriniz\n");
	scanf("%d",&b);
	
	printf("Enter elements of A Matrix\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&A[i][j]);
		}
	}
	printf("Enter elements of B Matrix\n");
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			C[i][j] = A[i][j] + B[i][j];
			printf("C[%d][%d] = %d\n",i,j,C[i][j]);
		}
	}
}
