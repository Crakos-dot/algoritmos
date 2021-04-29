#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>


int main(int argc, char  *argv[]) {
  int year = atoi(argv[1]);
  bool esbisiesto = false;
  esbisiesto = (year % 4 ==0);
  esbisiesto = esbisiesto && (year % 100 != 0 );
  esbisiesto = esbisiesto || (year % 400 == 0 );
  printf("%s\n",esbisiesto ? "es bisisiesto" :"no es bisiesto" );
  return 0;
}
