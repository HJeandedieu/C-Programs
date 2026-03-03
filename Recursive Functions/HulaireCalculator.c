#include <stdio.h>
float add(int num1, int num2){
    return num1 + num2;
}

float subtract(int num1, int num2){
    return num1 - num2;
}

float multiply(int num1, int num2){
    return num1 * num2;
}

float division(int num1, int num2){
    return (float)num1 / num2;
}

int main(){
    int num1, num2;
    int choice;
    int result;
    float divResult;

    


    do {
    	printf("Enter the first number: ");
    	scanf("%d", &num1);

    	printf("Enter the second number: ");
    	scanf("%d", &num2);
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter your choice from the list above: ");
        scanf("%d", &choice);

        if (choice < 1 || choice > 5){
            printf("Invalid choice!!\n");
            continue;
        }

        switch(choice){
            case 1:
                result = add(num1, num2);
                printf("The sum of %d and %d is: %d\n", num1, num2, result);
                break;

            case 2:
                result = subtract(num1, num2);
                printf("The difference of %d and %d is: %d\n", num1, num2, result);
                break;

            case 3:
                result = multiply(num1, num2);
                printf("The product of %d and %d is: %d\n", num1, num2, result);
                break;

            case 4:
                if(num2 != 0){
                    divResult = division(num1, num2);
                    printf("The quotient of %d and %d is: %.2f\n", num1, num2, divResult);
                } else {
                    printf("Division by zero is impossible!!\n");
                }
                break;

            case 5:
                printf("Process exited successfully!!\n");
                break;
        }

    } while (choice != 5);

    return 0;
}