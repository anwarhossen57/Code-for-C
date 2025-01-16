#include <stdio.h>

int main() {
  int i, j, k;
  
  // Outer loop
  for (i = 1; i <= 2; ++i) {
    printf("Outer: %d\n", i);  // Executes 2 times
    
    // Inner loop
    for (j = 1; j <= 3; ++j) {
      printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
      
      for (k = 1; k<= 2; ++k){
        printf("  Inner2: %d\n", k);
      }
    }
  }
  
  return 0;
}