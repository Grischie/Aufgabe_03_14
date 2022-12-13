#include <stdio.h>

int main() {
  int i,j;
  
  for (i=0; i<10; i++) {
    j=0;
    while (j<10) {
      printf("*");
      j++;
    }
    printf("\n");
  }
  return 0;
}
