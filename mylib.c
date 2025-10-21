#include<stdio.h>
#include "mylib.h"

int reverseDigits(int n)
{
	int rev=0;
	while(n>0){
		rev=rev*10+n%10;
		n /= 10;
	}
	return rev;
}

int isArmstrong(int num)
{
	int a=num,sum=0,digits=0;
	while(a>0){
		digits++;
		a/=10;
	}
	a=num;
	while(a>0){
		int digit=a%10;
		int power=1;
		for(int i=0;i<digits;i++){
			power *= digit;
			
		}
		sum+=power;
		a /= 10;
	}
	return(sum==num);
}


int isAdams(int num)
{
	int square=num*num;
	int revNum=reverseDigits(num);
	int revSquare=revNum*revNum;
	int revofRevSquare=reverseDigits(revSquare);
	return (square==revofRevSquare);
}


int isPrime(int num)
{
	if(num<=1){
		return 0;
	}
	
	for(int i=2;i*i<=num;i++){
		if(num%i==0){
			return 0;
		}
		
	}
	return 1;
}

int isPrimePalindrome(int num)
{
	if(isPrime(num)&&num==reverseDigits(num)){
		return 1;
	}
	else{
		return 0;
	}
}




int main()
{
	int choice,num;
	
	do{
		
		printf("\n=====MENU=====\n");
		printf("1.Check Armstrong Number\n");
		printf("2.check Adams Number\n");
		printf("3.Check Prime Palindrome Number\n");
		printf("4.Exit\n");
		printf("Enter your choice:");
		scanf("%d", &choice);

        if(choice==4){
        	printf("Existing program.Goodbye1\n");
        	break;
		}
		printf("Enter a number:");
		scanf("%d", &num);
		switch(choice){
			case 1:
				if(isArmstrong(num)){
					printf("%d is an Armstrong number.\n",num);
				}else{
				    printf("%d is NOT an Armstrong number.\n",num);
				}
				break;
			case 2:
				if(isAdams(num)){
					printf("%d is an Adams number.\n",num);
				}else{
					printf("%d is NOT an Adams number.\n",num);
				}
				break;
			case 3:
				if(isPrimePalindrome(num)){
					printf("%d is a Prime Palindrome number.\n",num);
				}else{
					printf("%d is NOT a Prime Palindrome number.\n",num);
				}
				break;
			default:
				printf("Invalid choice! Please select between 1-4\n");
		}
		
	}while(choice!=4);
	
	return 0;
}
