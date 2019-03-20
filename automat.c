#include <stdio.h>
int main(){
	float para;
	int secim;
	printf("Paranizi giriniz: ");
	scanf("%f",&para);
	
	printf("1. Cikolata(5TL)\n");
	printf("2. Su(2TL)\n");
	printf("3. Seker(2,5TL)\n");
	
	while(1){ //sonsuz döngü
		printf("Seciminizi giriniz: ");
		scanf("%d",&secim);
		if (secim == 1){
			para = para - 5 ;
			if(para<0){
				printf("Yetersiz Bakiye");
				break;
			}
			printf("Kalan para: %f \n",para);
			
		}
		else if (secim == 2){
			para = para - 2 ;
			if(para<0){
				printf("Yetersiz Bakiye");
				break;
			}
			printf("Kalan para: %f \n",para);
		}
		else if (secim == 3){
			para = para - 2.5 ;
			if(para<0){
				printf("Yetersiz Bakiye");
				break;
			}
			printf("Kalan para: %f \n",para);
		}
		else{
				printf("Yanlýs secim \n");
		}
		
		
		
	}

	
}
//goto
