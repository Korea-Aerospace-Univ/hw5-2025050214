#include <stdio.h>

int main (void) {
  int N;
  scanf("%d", &N);

  int found = 0;

  for (int a = 1; a <= N / 900; a++){
    for (int b = 2; b <= N / 750; b+= 2){
      for (int c = 1; c <= N / 200; c++){
        if (900 * a + 750 * b + 200 * c == N) {
          if (c < a || c < b) {
            printf("%d %d %d\n", a, b, c);
            found = 1;
          }
        }
      }
    }
  }
  if (!found) {
    printf("none\n");
  }
  return 0;
}
