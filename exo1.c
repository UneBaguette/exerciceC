#include <stdio.h>

int main()
{
    // je déclare les variables au début
    int a;
    int s;
    int r;
    // début du programme
    printf("Entrer entier 1 : ");
    scanf("%i", &a); // assigne à a ce que l'on tape
    printf("Entrer entier 2 : ");
    scanf("%i", &s); // assigne à s ce que l'on tape
    // calcul ici
    r = a * s;
    // résultat
    printf("Le produit est de %i\n", r);
}
