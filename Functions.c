#include <stdio.h>
#include <stdlib.h>
#define defaultPassword 12303

void printAsterisks(int N){
	int i, j;
	
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("*");
    	}
        printf("\n");
    }
}

void countEvenOdd(void){
	int num, even = 0, odd = 0;
	
	while (1) { 
		printf("Input a number to count even and odd numbers ('0' - stop): ");
    	scanf("%d", &num);
    	printf("\n");
        if (num == 0) {
            break;	
        } else if (num % 2 == 0) {
            even++;
        } else {
        	odd++;
        }
    }
    printf("Even: %d\n", even);
    printf("Odd: %d", odd);
}

int validatePassword(int password) {
    if (password == defaultPassword)
    	return 1;
    else
    	return 0; 
}

int main() {
    int choice,N,password; 
    
    do{
    	system("cls");
        printf("Welcome to my Program...\n\n");
        printf("1 >> Print asterisks\n");
        printf("2 >> Count Odd and Even\n");
        printf("3 >> Validate a Password\n");
        printf("4 >> Exit from the program\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        	
            case 1:
            	system("cls");
            	do{
    				printf("Enter a number to print '*' (5-10): ");
    				scanf("%d", &N);
        			if (N < 5 || N > 10) {
        				printf("\nInvalid input. input must be between 5-10.\n\n");
        			}
    			}while(N < 5 || N > 10);
    			printf("\n");
            	printAsterisks(N);
            	printf("\n");
            	system("pause");
            	break;
            	
            case 2:
            	system("cls");  	
        		countEvenOdd();
        		printf("\n\n");
    			system("pause");
            	break;
            	
            case 3:
            	system("cls");
        		do {
        			printf("Enter password: ");
        			scanf("%d", &password);	
        			if (!validatePassword(password)) {
        				printf("\nplease input again, password is incorrect.\n\n");
					}
					validatePassword(password);	
    			} while (!validatePassword(password));
    			printf("\nAccess granted!\n\n");
    			system("pause");
                break;
                
            case 4:
            	printf("\nProgram has exited...\n");
                exit(0);
                
            default:
                printf("\nInvalid choice you must choose from 1-4 only. Please try again.\n\n");
                system("pause");
				                   
        }
    }while(choice != 4);
    
}
