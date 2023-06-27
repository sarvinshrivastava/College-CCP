/*
  NewPrime
  We know that prime numbers are positive integers that have exactly two distinct positive divisors. Similarly, we'll call a positive integer t Т-prime, if t has exactly three distinct positive divisors.
*/

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n], i;
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int count = 0;
    for(i = 0; i < n; i++) {
        //printf("%d", arr[i]);
        for(int j = 1; j <= arr[i]; j++) {
            if(count <= 3) {
                if(arr[i] % j == 0)
                    count++;
            }
            else 
                break;
        }
        if(count == 3)
            printf("YES\n");
        else
            printf("NO\n");
        count = 0;
    }

    return 0;
}
