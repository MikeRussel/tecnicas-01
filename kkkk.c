01) Fa�a um programa que leia 2 n�meros e fa�a a soma dos mesmos.

#include <stdio.h>
#include <conio.h>

int main () 
{
    flutuar n1, n2, soma;
    printf("Informe o primeiro numero: ");
    scanf ( "% f", e n1);
    printf("Informe o segundo numero: ");
    scanf ( "% f", e n2);
    soma = n1 + n2;
    printf ( "A soma de e:% .1f", soma);
    getch ();
}
_______________________________________________________________________________________________
02) Fa�a um programa que leia um n�mero e imprima o proximo n�mero par.

#include <stdio.h>
#include <conio.h>

int main () {
    int n, resul;
    printf("informe o numero : ");
    scanf ( "% i", & N);

    se (n% 2 == 0)
        {
	    Resul = n + 2;
            printf("O proximo par : %i",resul);
        }
    outro
        {
	    Resul = n + 1;
            printf("O proximo par : %i",resul);
        }
    getch ();
}


_______________________________________________________________________________________________
03) Fa�a um programa que leia um n�mero e verifique se � par ou impar.

#include <stdio.h>
#include <conio.h>

int main () {
    int n;
    printf("informe o numero : ");
    scanf ( "% i", & N);

    se (n% 2 == 0)
        {
            printf("e par!");
        }
    outro
        {
            printf ( "e impar!");
        }
    getch ();
}
_______________________________________________________________________________________________
04) Fa�a um programa que leia um n�mero e imprima "positivo" se (>)mais
que zero e "negativo" se menor que zero.

#include <stdio.h>
#include <conio.h>

int main ()
{
    flutuar n1;
    printf("Informe o primeiro numero: ");
    scanf ( "% f", e n1);
    if (n1> 0) {
		printf("Positivo");
	}
    else if (n1 <0) {
		printf("Negativo");
	}
    else if (== n1 0) {
		printf("Nulo");
	}
    getch ();
}
