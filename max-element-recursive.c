#include<stdio.h>
int f(int a[], int n, int max){
	if(n>0){
		if(max < a[n-1]){
			max=a[n];
			f(a,n-1,max);
		}
	}
	else
		return max;
	
}
int main(){
	int i, n;
	printf("Enter array size\n");
	scanf("%d",&n);
	int array[n];
	printf("Enter array\n");
	
	for(i=0;i<n;i++){
		scanf("%d",&array[i]);
	}
	int max = array[n-1];
	printf("max: %d",f(array,n,max));
	
}
