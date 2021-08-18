#include <stdlib.h>
#include <time.h>
#include <stdio.h>


int main(int argc, char  *argv[]) {
int a=12;
int i;
printf("hola de que division quiere poner nota\n" );
printf("PD:hay 3 divisiones\n");
scanf("%d",&i);
switch (i) {
  case 1:printf("Usted eligio la primer division\n" ); break;
  case 2:printf("Usted eligio la segunda division\n" ); break;
  case 3:printf("Usted eligio la tercer division\n" ); break;
  default:printf("Dije que habian 3 nomas EHH\n" );
}

}
if (a==12) {
  printf("Hola escriba una nota del 1 al 10\n" );
  scanf("%d",&a);
   switch (a) {
     case 1:printf("Desaprobo" ); break;
     case 2:printf("Desaprobo" ); break;
     case 3:printf("Desaprobo" ); break;
     case 4:printf("Desaprobo" ); break;
     case 5:printf("Desaprobo" ); break;
     case 6:printf("Aprobo" );break;
     case 7:printf("Aprobo" );break;
     case 8:printf("Aprobo" );break;
     case 9:printf("Aprobo" );break;
     case 10:printf("Aprobo" );break;
     default:printf("Eso no es lo pedido");

   }

}

  return 0;
}
