#include<stdio.h>
int main(){
	int number1 ,number2 ,choice;
	printf("nhap vao 2 so nguyen");
	scanf("%d %d" ,&number1 ,&number2);
	do{
		printf("1.tong\n");
		printf("2.hieu\n");
		printf("3.tich\n");
		printf("4.thuong\n");
		printf("5.so du\n");
		printf("6.uoc chung\n");
		printf("7.boi chung\n");
		printf("8.thoat\n");
		printf("nhap lua chon cua ban" ,&choice);
		scanf("%d" ,&choice);
		switch(choice){
			case 1:
				printf("tong la :%d\n" ,number1+number2);
				break;
			case 2:
				printf("hieu la :%d\n" ,number1-number2);
				break;
			case 3:
				printf("tich la :%d\n" ,number1*number2);
				break;
			case 4:
				printf("thuong la :%d\n" ,number1/number2);
				break;
			case 5:
				printf("uoc chung lon nhat la :%d\n" ,number1-number2);
				break;
			case 6:
				int greatest_common_divisor;
				for(int i = 1 ; i <= number1 || i <= number2 ; i++){
					if(number1 % i == 0 && number2 % i == 0){
						greatest_common_divisor = i;
					}
				}
				printf("greatest_common_divisor la %d \n",greatest_common_divisor);
                break;
			case 7:
				  printf("BCNN la %d \n", (number1*number2)/greatest_common_divisor);
				break;
			case 8:
			      printf("tam biet\n");
				break;					
		}
	}while(choice != 8);
	
}
