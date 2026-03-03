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
    if(scanf("%d", &num) == 1){
    	eval(num);
    }else{
    	printf("Invalid Input");
	}
    
    return 0;
}