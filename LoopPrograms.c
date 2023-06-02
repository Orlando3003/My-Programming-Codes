#include <stdio.h>
#include <stdlib.h>

int main() {
	
    int choice, n, i, j, num, even = 0, odd = 0, password = 12303, inputpassword;
    
    do{
    	system("cls");
        printf("\nWelcome! you may choose what to do from the options below...\n");
        printf("\n1 >> Print asterisks\n");
        printf("2 >> Count Odd and Even\n");
        printf("3 >> Validate a Password\n");
        printf("4 >> Exit from the program\n\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
        	
            case 1:
            	
            	system("cls");
                do{
                    printf("\nEnter a number to print '*' (5-10): ");
                    scanf("%d", &n);

                    if (n < 5 || n > 10) {
                    printf("\nInvalid input. input must be between 5-10.\n");
                    }
                }while(n < 5 || n > 10);

                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        printf("*");
                    }
                    printf("\n");
                }
                system("pause");
                break;
                
            case 2:
            	
            	system("cls");
                while (1) {
                	
        			printf("\nEnter a number to count even and odd numbers (press '0' when done inputting number/s): ");
        			scanf("%d", &num);

        			if (num == 0) {
            			break;	
        			} else if (num % 2 == 0) {
            			even++;
        			} else {
            			odd++;
        			}
    			}			
    			printf("\nEven: %d\n", even);
    			printf("\nOdd: %d\n", odd);
    			system("pause");
    			break;
                
            case 3:
            	system("cls");
                do {
        			printf("\nEnter password (only numbers allowed): ");
        			scanf("%d", &inputpassword);

        			if (inputpassword != password) {
            			printf("\nIncorrect password!, enter password again.\n");
        			}
    			} while (inputpassword != password);

    			printf("\nAccess granted!\n");
    			system("pause");
                break;
                
            case 4:
            	
            	printf("\nProgram has exited...\n");
                exit(0);
                
            default:
            	
                printf("\nInvalid choice you must choose from 1-4 only. Please try again.\n");
                system("pause");
                               
        }
    }while(choice != 4);
}
