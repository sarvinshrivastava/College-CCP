#include <stdio.h>

int main() {
    int arr[100], N, counter, sum = 0, size;
    
    scanf("%d", &N);
    for(counter = 0; counter < N; counter++) {
        scanf("%d", &arr[counter]);
    }
    
    scanf("%d", &size);
    for(counter = 0; counter < size; counter++) {
            sum += arr[counter];
    }
    
    printf("%d\t", sum);
    for(counter = size; counter < N; counter++) {
        sum += arr[counter] - arr[counter - size];
        printf("%d\t", sum);
    }

    return 0;
}