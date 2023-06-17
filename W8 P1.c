/*
Question
Square root of a number by Repeated Subtraction method
*/

#include <stdio.h>

int main() {
    int testcasecount, number;
    scanf("%d", &testcasecount);
    
    for(int i = 0; i < testcasecount; i++) {
        
        scanf("%d", &number);
        int steps = 1;
        
        for(int j = 1 ; 1; j += 2) {
            number -= j;
            if (number - j > 0)
                steps++;
            else
                break;
        }
        printf("%d\n", steps);
        
    }

    return 0;
}
