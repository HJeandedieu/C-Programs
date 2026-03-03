#include <stdio.h>

int main(){
    // Array declaration
    int array[5] = {1,2,3,4,5};
    
    //SUBSCRIPT NOTATION (THE NORMAL ARRAY INDEXING)
    printf("ARRAY NOTATION: SUBSCRIPT ELEMENT\n");
    printf("Third Element %d\n", array[2]);

    //POINTER NOTATION USING THE BASE ADDRESS
    int *pointer = NULL;
    pointer = array;
    printf("POINTER NOTATION: BASE ADDRESS\n");
    printf("Third Element %d\n", *(pointer+2));

    //OFFSET POINTER NOTATIONS
    pointer = array + 2;
    printf("POINTER NOTATION: OFFSET POINTER\n");
    printf("Third Element %d\n", *pointer);
    return 0;
}