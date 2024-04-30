//5. WAP to print factorial of given number 

int main(){
	int num, i, factorial=1;
	printf("Enter the number:- ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		factorial =factorial*i;
	}
	printf("factorial of %d is %d ",num,factorial);
}
