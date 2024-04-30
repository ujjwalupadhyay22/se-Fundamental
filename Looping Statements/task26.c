// 26.  (1)+ (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n)

#include<stdio.h>
int main(){
	int i,j, num, sum=0;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for(j=1;j<=i;j++){
			sum+=j;//26 no. program
		}
	}
	printf("Sum :%d",sum);
}
