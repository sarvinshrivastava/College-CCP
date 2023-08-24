// Maximum water hold in Histogram
#include <stdio.h>

int main() {
    int arr[1000], N, counter, key, L_max, R_max, Min;
    scanf("%d", &N);
    
    // Taking input
    for(counter = 0; counter < N; counter++) {
        scanf("%d", &arr[counter]);
    }
    
    // Coumputing the heighest water hold on a perticular bar...
    scanf("%d", &key);
    if(key < N && key > 0) { //ifstart
        
    L_max = arr[0];
    for(counter = 1; counter < key ; counter++) {
        if(L_max < arr[counter])
            L_max = arr[counter];
    }
    R_max = arr[key + 1];
    for(counter = key + 2; counter < N; counter++) {
        if(R_max < arr[counter])
            R_max = arr[counter];
    }
    Min = (L_max < R_max) ? L_max : R_max;
    if(Min > arr[key])
        printf("The maximum water hold can be: %d units", Min - arr[key]);
    else
        printf("No water can be hold!");
    
    } //ifends
    else {
        printf("Enter a no. between 0 - %d", N);
    }

    return 0;
}