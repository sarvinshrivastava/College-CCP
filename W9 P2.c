/*
  Maximum Sum 14
*/

#include <stdio.h>

int main() {
    long int n;
    scanf("%ld", &n);
    long int arr[n], i;
    
    for(i = 0; i < n; i++) {
        scanf("%ld", &arr[i]);
        //printf("%d\n", arr[i]);
    }
    
    long long int max_sum = 0, temp_sum = 0;
    for(i = 0; i < n; i++) {
        if(arr[i] >= 0) {
            temp_sum += arr[i];
            //printf("%d\n", temp_sum);
        }
        else {
            if(temp_sum > max_sum) {
                max_sum = temp_sum;
            }
            temp_sum = 0;
        }
    }
    if(temp_sum > max_sum) {
        max_sum = temp_sum;
    }
    
    printf("%lld", max_sum);

    return 0;
}
