#include <stdio.h>

int main(){
    int array[6] = {1,2,3,4,5};
    int *pointer = NULL;
    pointer = array;

    // LOOP TO TRAVERSE THROUGH THE ARRAY
    for(int x = 0; x < 5; x++){
        printf("%d ", *(pointer + x));
    }

    return 0;
}