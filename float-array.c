/*8 elemanlý float diziye klavyeden deðer girin. Girilen deðerlerin ortalamasýný hesaplayýp
ekrana yazdýrýn.*/
#include <stdio.h>
int main(){
	float dizi[8];
	float sum=0;
	float ortalama;
	int i;
	for(i=0;i<8;i++){
		scanf("%f",&dizi[i]);
		sum = sum + dizi[i];
	}
	ortalama = sum / 8;
	printf("ortalama = %.2f",ortalama);
}
