#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <time.h>

int main(int argc, char  *argv[]) {
  int x=atoi(argv[1]);
  int y=atoi(argv[2]);
  int z=atoi(argv[3]);
  int x1=atoi(argv[4]);
  int y2=atoi(argv[5]);
  int z3=atoi(argv[6]);
  int r;
  int k;
  int u;
  r=(y*z3)-(z*y2);
  k=(z*x1)-(x*z3);
  u=(x*y2)-(y*x1);




  printf("%d\n",r);
  printf("%d\n",k);
  printf("%d\n",u);


  return 0;
}
