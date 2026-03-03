#include <stdio.h>
int reverse_array(int *arr, int size){
    int *start = NULL;
    int *end = NULL;

    start = arr;
    end = arr + size -1;
    
    while(start < end){
        int temp = 0;
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){

    int array[5] = {1,2,3,4,5};
    int size = sizeof(array) / sizeof(array[0]);

    printf("Original array:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }

    printf("\n");

    reverse_array(array, size);

    printf("Reversed array:\n");
    for(int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
}