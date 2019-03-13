#include <stdio.h>
#include<math.h>
/*2. Write C code to find all the roots of a 
quadratic equation ax2+bx+c=0.*/
int main(){
	int a;
	int b;
	int c;
	int x1,x2;
	scanf("%d%d%d",&a,&b,&c);
	int delta=(b*b)-4*a*c;
	if(delta==0){
		x1=-b/2*a;
		x2=-b/2*a;
	}
	else if(delta>0){
		x1=(-b-pow(delta,1/2))/2*a;
		x2=(-b+pow(delta,1/2))/2*a;
	}
	else{
		printf("There is no root");
	}
	printf("%d \n",delta);
	printf("%dx2+%dx+%d equations root are %d %d",a,b,c,x1,x2);
}
