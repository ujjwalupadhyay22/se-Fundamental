//5. WAP to take two Array input from user and sort them in ascending or descending order as per user’s choice 

#include<stdio.h>
int sort(int choice){
	int i,j;
	int arr[5],tem;
	if(choice==1){
		for(i=1;i<=5;i++){
			printf("Enter the array element %d: ",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++){
			for(j=i+1;j<5;j++){
				if(arr[i]>arr[j]){
					tem=arr[i];
					arr[i]=arr[j];
					arr[j]=tem;
				}
			}
		}
		for(i=0;i<5;i++){
			printf("%d:",arr[i]);
		}
	}
	else if(choice==2){
		for(i=1;i<=5;i++){
			printf("Enter the array element %d: ",i);
			scanf("%d",&arr[i]);
		}
		for(i=0;i<5;i++){
			for(j=i+1;j<5;j++){
				if(arr[i]>arr[j]){
					tem=arr[i];
					arr[i]=arr[j];
					arr[j]=tem;
				}
			}
		}
		for(i=0;i<5;i++){
			printf("%d:",arr[i]);
		}
	}
	else{
		printf("Invalid Choice");
	}	
}
int main(){
	int choice;
	printf("========Select choice==========\n");
	printf("1.Ascending\n");
	printf("2.Descending\n");
	printf("Enter the choice 1 OR 2:-");
	scanf("%d",&choice);
	sort(choice);
}
