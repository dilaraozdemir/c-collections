#include <stdio.h>
#define n 10
int main(){
	int counter=0;
	int j,i;
	int a;
	int dizi[n];
	
	printf("Dizinin elemanlarini giriniz \n");
	for(j=0;j<n;j++){
		scanf("%d",&dizi[j]);
	}
	
	printf("aramak istediginiz sayiyi giriniz\n");
	scanf("%d",&a);

	for(j=0;j<n;j++){
			if(dizi[j]==a){
			counter++;
			}
	}
	printf("%d dizide %d tane vardir.",a,counter);
	
	
}
