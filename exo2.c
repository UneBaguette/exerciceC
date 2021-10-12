// écrire un programme qui échange deux entiers saisis. afficher les entiers avant et après l'échange.
#include <stdio.h>

void swap(int *x, int *y); 

int main()
{
    // déclaration des variables utiliser
    int a;
    int s;
    // début du programme
    printf("Saisi entier 1 : ");
    scanf("%i", &a);
    printf("Saisi entier 2 : ");
    scanf("%i", &s);
    printf("Valeur de a est de %i et Valeur de s est de %i", a, s);
    swap(&a, &s); // la fonction échange les valeurs entre eux
    printf("\n");
    // résultat de l'échange
    printf("Valeur de a est de %i et Valeur de s est de %i\n", a, s);

}

void swap(int *x, int *y) // fonction qui échange deux valeurs pour l'autre
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}
