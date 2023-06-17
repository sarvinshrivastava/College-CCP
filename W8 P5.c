/*
Question
Multiplication of First max and Second max
*/

#include <stdio.h>
#include <math.h>

int bitodec(int num) {
    int c = 0, sum = 0;
        while(num) {
        sum += (num % 10) * pow(2, c);
        c++;
        num /= 10;
    }
    
    return sum;
}

int dectobi(int num) {
    int a[20], i;
    
    for(i = 0; i < 20; i++)
        a[i] = 0;
    i = 0;
    while(num != 0) {
        a[i] = num % 2;
        num /= 2;
        i++;
    }
    int sum = 0;
    for( ; i >= 0; i--)
        sum = sum * 10 + a[i];
    
    return sum;
}

int main() {
    int no_of_testcases;
    scanf("%d", &no_of_testcases);
    int array[no_of_testcases];
    
    for(int i = 0; i < no_of_testcases; i++) {
        int num;
        scanf("%d", &num);
        array[i] = bitodec(num);
    }
    
    int max1 = array[0], max2 = array[0];
    for(int i = 1; i < no_of_testcases; i++) {
        if(array[i] > max1)
            max1 = array[i];
        if(array[i] > max2 && array[i] != max1)
            max2 = array[i];
    }
    printf("%d", dectobi(max2 * max1));

    return 0;
}
