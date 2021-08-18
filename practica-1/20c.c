#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main(int argc, char const *argv[]) {
  int a=atoi(argv[1]);
  int b=atoi(argv[2]);
  int i = 1;
  int z =i%(b-a+1)+a;
  while (i<=z) {

    i++;
  }


  return 0;
}
