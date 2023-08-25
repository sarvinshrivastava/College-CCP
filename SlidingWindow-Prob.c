#include <stdio.h>

int main() {
    int arr[100], N, contr, size = 0, dig = 0, key;
    
    scanf("%d", &N);
    for (contr = 0; contr < N; contr++) {
        scanf("%d", &arr[contr]);
    }
    
    scanf("%d", &key);
    for (contr = 0; contr < N; contr++) {
        if(key >= arr[contr])
            size++;
    }
    
    for (contr = 0; contr < size; contr++) {
        if(key >= arr[contr])
            dig++;
    }
    
    for (contr = size; contr < N; contr++) {
        if(key >= arr[contr])
            dig[contr - size + 1]++;
        if(key >= arr[contr - size])
            dig[contr - size + 1]--;
    }
    
    

    return 0;
}