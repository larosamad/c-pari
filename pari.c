/* Scrivere un programma in C in grado di acquisire in ingresso dall'utente una sequenza di interi
che termina con uno zero, restituire quanti numeri sono pari*/

#include <stdio.h>
float numero;
int B, cont = 0;

int main(void)
{
    do
    {
        printf("Inserisci numero\n");
        scanf("%f", &numero);
        B = (int)numero;
        if ((numero == B) && (B % 2 == 0) && (numero != 0))
        {
            cont++;
        }
    } while (numero != 0);
    printf("La quantità dei numeri pari è di %d", cont);
    return 0;
}
