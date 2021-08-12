#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[]) {
int n = atoi(argv[1]);
int i = 1;
int resultado = 1;

while (i<=n) {
  resultado=resultado*i;
  i++;
}
printf("el factorial de %d %d\n",n,resultado );




  return 0;
}
