#include <stdio.h>

void reverse(char *str){
	if(*str == "\0")
		return;
	
	reverse(str + 1);
	printf("%c", *str);
}

int main(){
	reverse("Hello");
	return 0;
}


#include <stdio.h>

void reverse(char *str) {
    if (*str == '\0')  // check for end of string
        return;

    reverse(str + 1);   // recursive call
    printf("%c", *str); // print character after recursion
}

int main() {
    reverse("Hello");
    return 0;
}
