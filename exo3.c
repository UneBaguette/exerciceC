#include <stdio.h>

int main()
{
    // déclaration des variables
    int x;
    int y;
    int z;
    // début du programme qui demande de taper un entier à l'utilisateur pour chaque variable
    printf("Entrer l'entier de x : ");
    scanf("%i", &x);
    printf("Entrer l'entier de y : ");
    scanf("%i", &y);
    printf("Entrer l'entier de z : ");
    scanf("%i", &z);
    if (y > x && y > z)
    {
        printf("y est le plus grand entier\n");
        return 0;
    }
    else if (x == y && x == z && y == z)
    {
        printf("Tous les entiers sont égaux\n");
    }
    else if (x > y && x > z)
    {
        printf("x est le plus grand entier\n");
    }
    else if (z > x && z > y)
    {
        printf("z est le plus grand entier\n");
    }
    else
    {
        printf("Il y a deux entiers égaux\n");
    }
}
