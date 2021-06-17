#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {
  int d=atoi(argv[1]);
  int a;
  int s;
  a=d/365;
  s=d/7;

  printf("Dia:""%d\n",d );
  printf("Semana:""%d\n",s );
  printf("Año:""%d\n",a );
if (d==167) {
  printf("Feliz cumplle eze\n" );
}


  return 0;
}
