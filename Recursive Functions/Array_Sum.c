#include <stdio.h>

int sum(int arr[],int n){
    if (n == 0){
        return 0;
    }

    return arr[n-1] + sum(arr, n-1);
}

int main(){
    int array[] = {1,2,3,4};
    printf("%d", sum(array, 4));
    return 0;
}