/*Klavyeden -1 girilene kadar girilen sayýlarý diziye aktaran, ardýndan her elemanýn karesini
ekrana basan programý yazýnýz. (Dizi eleman sayýsý max 10 olacaktýr.)*/
#include <stdio.h>
#define N 10
int main(){
	int dizi[N];
	int i;
	int pow;
	for(i=0;i<N;i++){
		scanf("%d",&dizi[i]);
		if(dizi[i]!=-1){
			pow=dizi[i]*dizi[i];
			printf("pow = %d\n",pow);
		}
		else{
			break;
		}
	}
}

