#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

int main(int argc, char const *argv[]) {

int a=atoi(argv[1]);
srand(time(NULL));
int suma = 0 ;


for (int i = 0; i < a ; i++) {
int r=rand();
r= r % 100 + 1 ;
suma= suma + r ;
printf("%d\n",r );


}
printf("%d\n",suma );



  return 0;
}
