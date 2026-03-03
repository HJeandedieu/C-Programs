#include <stdio.h>
#include <string.h>

int main(){

    char string[] = "Hello world";

    char *pointer = NULL;
    pointer = string;
    int len = strlen(string);

    for(int i = 0; i < len ; i++){
        printf("%c", *(pointer + i));
    }
    return 0;
}