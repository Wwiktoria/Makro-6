
#include <stdio.h>
#define LOOP(x, n)                  \
  for (int i=(n-1); i>=0; i--) { \
    printf("%d\n", i);                    \
  }
  int main(void){
      LOOP(2,6);
  
  return 0;
}