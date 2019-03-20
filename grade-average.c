#include <stdio.h>
/*vize notunun %40ýný, final notunun %60ýný alýp öðrencinin numarasýyla birlikte yazdýran program*/
int main(){
	int num;
	int vize;
	int final;
	int passGrade;
	
	printf("Enter student number ");
	scanf("%d",&num);
	
	printf("\nEnter vize grade ");
	scanf("%d",&vize);
	
	printf("Enter final grade ");
	scanf("%d",&final);
	
	passGrade = vize*0.4+final*0.6;
	
	printf("Student number = %d \nPass Grade = %d",num,passGrade);
	return 0;
}
