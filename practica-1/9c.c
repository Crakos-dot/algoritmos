
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]) {

    int max = -99999999;
    for (int i = 1; i < argc; i++) {
      int ma = atoi(argv[i]);
      if (ma > max) {
        max = ma;
      }
    }
    printf("El maximo es %d\n", max);
















  return 0;
}
