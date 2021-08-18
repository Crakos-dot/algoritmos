#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int main(int argc, char  *argv[]) {

  int a=atoi(argv[1]);

  printf("Ingrese un numero:");
  scanf("%d",&a);

  if (a%2==1) {
    printf("Es impar" );

  }
  else{
  printf("Es par");

  }

  return 0;
}
