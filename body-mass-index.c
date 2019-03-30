#include<stdio.h>
double kitleIndeks(double weight,double height){
	double index;
	index = weight / (height * height);
	return index;
}
int main(){
	double x, y;
	printf("Enter your weight\n");
	scanf("%lf",&x);
	printf("Enter your height\n");
	scanf("%lf",&y);
	
	double bodyMassIndex = kitleIndeks(x,y);
	printf("\nYour Index: %lf\n",bodyMassIndex);
	
	if(bodyMassIndex >=0 && bodyMassIndex <=18 ){
		printf("Zayif\n");
	}
	else if(bodyMassIndex >18 && bodyMassIndex <=25){
		printf("Normal\n");
	}
	else if(bodyMassIndex >25 && bodyMassIndex <= 30){
		printf("Kilolu\n");
	}
	else{
		printf("Obez\n");
	}
}
