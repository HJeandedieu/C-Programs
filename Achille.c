#include <stdio.h>

int eval(int num){
    if (num %2 == 0){
        printf("The number is Even");
        return 0;
    }
    
    printf("The number is odd");
    return 0;
}

int main(){
    printf("Please enter the number to Evaluate\n");
    int num;
    scanf("%d", &num);
    eval(num);
    return 0;
}