#include <stdio.h>

int reverse(int num){
    if(num / 10 == 0){
        return num;
    }

    return reverse(num / 10);
    printf("%d", num % 10);
}

int main(){
    printf("%d", reverse(10100));
    return 0;
}