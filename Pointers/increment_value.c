#include <stdio.h>

int increment_value(int *pointer){
    return *pointer+1;
}

int main(){
    int num = 0;
    printf("Incremented num is %d", increment_value(&num));
}