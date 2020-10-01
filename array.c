/*Klavyeden -1 girilene kadar girilen sayıları diziye aktaran, ardından her elemanın karesini
ekrana basan programı yazınız. (Dizi eleman sayısı max 10 olacaktır.)*/
#include <stdio.h>
#define N 20
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

