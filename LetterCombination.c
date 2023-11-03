/* Letter Combination */

#include<stdio.h>

int fact(int n) {
      if(n == 1)
            return 1;
      else
            return fact(n - 1) * n;
}

void main() {
      int n, i;

      printf("Enter the size of combination: ");
      scanf("%d", &n);
      
      char combination[n + 1], letters[n + 1];
      
      printf("Enter the characters to be used:\n");
      scanf(" %[^\n]c", &letters);
      combination[n + 1] = '\0';

      //printf("%d", fact(n));
      
      for(i = 0; i < fact(n); i++) {
            int j = 0;
            
      }
      
}
