#include <stdio.h>
float PI = 3.14;
float square(const int r){
	float area;
	area = PI * r * r;
	return area;
}
int main(){
	const int yariCap;
	printf("Enter radius: ");
	scanf("%d",&yariCap);
	
	printf("Dairenin alani: %2f",square(yariCap));
}
