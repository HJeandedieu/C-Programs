#include <stdio.h>

int sum_array(int *pointer, int size){
//		LOOP THROUGH THE ARRAY TO FIND THE SUM;
	int sum = 0;
	for(int i = 0; i < size - 1; i++){
		sum += *(pointer + i);
	}
	printf("sum is: %d", sum);
}

int main() {
	
	int array[6] = {12, 32, 35, 79,12};
	
	sum_array(array, 6);
	
	return 0;
}