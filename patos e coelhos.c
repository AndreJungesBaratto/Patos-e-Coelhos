#include <stdio.h>
#include <conio.h>

int main()
{
int P, C;
printf("Informe o total de cabecas e de pes, respectivamente:\n");
scanf("%d, %d", &C, &P);

int p, c;
p=2*C-(P/2);
c=(P-2*C)/2;

printf("O numero de patos e coelhos, respectivamente, e:\n patos: %d\n coelhos: %d\n", p, c);
getch();
return 0;

}

