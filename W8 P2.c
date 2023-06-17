/*
Question
Multiplication of a number with its complement
*/

#include <stdio.h>

int main() {
    int number, nooftestcase;
    scanf("%d", &nooftestcase);
    
    for(int i = 0; i < nooftestcase; i++) {
        scanf("%d", &number);
        printf("%d\n", (number + 1) * number * -1);
    }
    
    return 0;
}
