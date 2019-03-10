#include <stdio.h>
int main(){
	//2. Calculate the area of a circle with given radius.
	int PI = 3;
	int r;
	int area;
	
	
	printf("Enter a radius: ");
	scanf("%d",&r);
	
	area = PI*r*r;
	
	printf("%d",area);
	return 0;
}
