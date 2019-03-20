#include <stdio.h>
#include <time.h> /*rand kullanabilmek için bu kütüphane*/
#include <stdlib.h>
#include <conio.h>
int main(){
	srand(time(NULL));
	int dizi[200];
	int i;
	int max, min;
	int sum=0, result;
	
	for(i=0;i<200;i++){
		dizi[i]=-100+rand()%201;
		printf("%d, ",dizi[i]);
	}
	
	for(i=0;i<200;i++){
		if(dizi[i]>max){
			max=dizi[i];
		}
		else if(dizi[i]<min) {
			min=dizi[i];
		}
	}
	
	printf("\nmax = %d,min = %d",max,min);
	for(i=0;i<200;i++){
		sum+=dizi[i];	
	}
	
	result = sum / 200;
	printf("\nresult = %d",result);
	
}
