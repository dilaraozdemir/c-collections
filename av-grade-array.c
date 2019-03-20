#include <stdio.h>
int main(){
	int dizi[5][2];
	int i;
	int j;
	for(i=0;i<5;i++){
		printf("%d. ogrencinin vize ve final notu\n",i+1);
		for(j=0;j<2;j++){
			printf("Notu giriniz : ");
			scanf("%d",&dizi[i][j]);
		}
		j=0;
		if(dizi[i][j]*0.4+dizi[i][j+1]*0.6>60){
			if(dizi[i][j+1]<50)
				printf("Kaldi\n");
			else
				printf("Gecti\n");
		}
		else
			printf("Kaldi\n");

	}

}
/*	if(j==0){
		printf("Vize: ");
		scanf("%d",&dizi[i][j]);
	}
	else{
		printf("Final");
		scanf("%d",&dizi[i][j]);
	}*/
