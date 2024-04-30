//27.   1/2 - 2/3 + 3/4 - 4/5 + 5/6 - ...... n

#include<stdio.h>
int main(){
	double i,sum;
	int num;
	printf("Enter the number:");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if((int)i%2==1){
			sum+=i/(i+1);
		}
		else{
			sum-=i/(i+1);
		}
	}
	printf("Sum :%.2lf",sum);
}

	
