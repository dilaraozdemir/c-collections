#include<stdio.h>
int main(){
	/*17.Write C code with a natural number, n, as its 
	input which calculates the
	following formula and writes 
	the result in the standard output: S = ½ + ¼ + …
	+1/n.*/	
	int n;
	float i;
	float s;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		s+=(1/(i*2));
	printf("%f",s);		
}
