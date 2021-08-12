#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {

int a = atoi(argv[1]);
double f=0;
double na=1.61803398874989;


for ( int i = 0; i < a ; i++) {

f=(pow(na,i)-pow(1-na,i));
f=f/sqrt(5);
printf("%.0f\n",f);


  }






  return 0;
}
