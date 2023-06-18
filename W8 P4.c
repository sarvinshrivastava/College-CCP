/*
Question
GCD IN ARRAY
*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int totaltestcase;
    scanf("%d", &totaltestcase);
    int arr[totaltestcase], i, max1, max2;
    
    for(i = 0; i < totaltestcase; i++) {
        scanf("%d", &arr[i]);
    }
    max1 = arr[0]; max2 = arr[0];
    for(i = 1; i < totaltestcase; i++)
        if(arr[i] > max1)
            max1 = arr[i];
    for(i = 1; i < totaltestcase; i++)
        if(arr[i] > max2 && arr[i] != max1)
            max2 = arr[i];
            
    for(i = max2; i > 1; i--)
        if(max2 % i == 0 && max1 % i == 0)
            break;
    printf("%d", i);
        
    return 0;
}
