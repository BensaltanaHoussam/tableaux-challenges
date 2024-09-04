#include <stdio.h>

int main() {
    int a, i;

    printf("Entrez le nombre d'elements : ");
    scanf("%d", &a);

    int original[a], copie[a];

    for (i = 0; i < a; i++) {
        printf("Entrez l'élément %d : ", i + 1);
        scanf("%d", &original[i]);
    }

    for (i = 0; i < a; i++) {
        copie[i] = original[i];
    }

    printf("Éléments du tableau original : ");
    for (i = 0; i < a; i++) {
        printf("%d ", original[i]);
    }
    printf("\n");

    printf("Éléments du tableau copié : ");
    for (i = 0; i < a; i++) {
        printf("%d ", copie[i]);
    }
    printf("\n");

    return 0;
}
