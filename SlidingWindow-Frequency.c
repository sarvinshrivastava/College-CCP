#include <stdio.h>

int main() {
    int arr[100], N, counter, freq = 0, size, key;
    
    scanf("%d", &N);
    for(counter = 0; counter < N; counter++) {
        scanf("%d", &arr[counter]);
    }
    
    scanf("%d%d", &key, &size);
    for(counter = 0; counter < size; counter++) {
        if(key == arr[counter])
            freq++;
    }
    
    printf("%d\t", freq);
    for(counter = size; counter < N; counter++) {
        if(key == arr[counter])
            freq++;
        if(key == arr[counter - size])
            freq--;
        printf("%d\t", freq);
    }

    return 0;
}