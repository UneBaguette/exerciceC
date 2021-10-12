#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Ouvre un fichier csv
    FILE *file = fopen("car.csv", "a");

    if (!file)
    {
        return 1;
    }
    // obtenir le modèle et la plaque
    char modele[30];
    char plaque[30];

    printf("Entrer le modèle : ");
    scanf("%s", modele);
    printf("Entrer la plaque : ");
    scanf("%s", plaque);

    //écrire dans le fichier csv
    fprintf(file, "%s, %s\n", modele, plaque);

    //fermer le fichier csv
    fclose(file);

}
