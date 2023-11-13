#include<stdio.h>
int main(){
	int number1 ,number2 ,number3 ,choice;
	printf("nhap vao 3 so nguyen");
	scanf("%d %d %d" ,&number1 ,&number2 ,&number3);
	scanf("%d " ,&choice);
	do{
		printf("1.tong 3 so nguyen");
		printf("2.trung binh cong 3 so nguyen");
		printf("3.max min cua 3 so");
		printf("4.thoat\n");
		switch(choice){
			case 1:
				printf("tong la :%d\n" ,number1+number2+number3);
				break;
			case 2:
			    printf("trung binh cong la :%d\n" ,(number1+number2+number3)/3);
				break;
			case 3:
				if(a > b && a > c) {
                    printf("So lon nhat la: %d\n", a);
                } else if(b > a && b > c) {
                    printf("So lon nhat la: %d\n", b);
                } else {
                    printf("So lon nhat la: %d\n", c);
                }
                if(a < b && a < c) {
                    printf("So nho nhat la: %d\n", a);
                } else if(b < a && b < c) {
                    printf("So nho nhat la: %d\n", b);
                } else {
                    printf("So nho nhat la: %d\n", c);
                }
                break;
			 case 4:
            	printf("Tam biet!\n");
            	break;			
		}
	}while(choice !=4 );
}
