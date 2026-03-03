#include <stdio.h>

void reverse(int num){
    int reversed = 0;
    while(num > 0){
    	reversed = reversed * 10;
        reversed += num % 10;
        num = num / 10;
    }
    printf("Reversed %d", reversed);
    return;
}

int main(){
    int num;
    printf("Please enter the number to reverse: ");
    if(scanf("%d", &num) == 1){
        reverse(num);
    }else{
    printf("Invalid input");
	}
}

