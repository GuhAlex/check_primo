#include <stdio.h>
#include <stdlib.h>

void show(void);
void scan(void);
void check(void);

// Global variables
int num;
int divi = 0;
int count = 0;

int main(){

  system("clear || cls");
  show();
  scan();
  check();

  return 0;
}

void show(void)

{
  printf("\t\t\tDigite um número inteiro:\n\t\t\t");
}

void scan(void)

{
  scanf("%i", &num);
  if (num == 1)
  {
    printf("\t\t\tO número %i não é primo\n", num);
    exit(0);
  }
  while (divi < num)
  {
    ++divi;
  if (divi > 1 && divi < num && num % divi == 0) //Números primos são divisiveis somente por um e por ele mesmo
    ++count;
   }
}

void check()

{
 if (count >= 1)
   printf("\t\t\tO número %i não é primo \n", num);

 else
   printf("\t\tO número %i é primo \n", num);
}
