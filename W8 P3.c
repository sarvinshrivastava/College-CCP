/*
Question
Multiplication of a number with its r right shift number
*/

#include <stdio.h>

int main() {
    int testcases;
    scanf("%d", &testcases);
    for(int i = 0; i < testcases; i++) {
        int num, k;
        scanf("%d%d", &num, &k);
        
        printf("%d\n", num * (num >> k));
    }
    
    return 0;
}
