#include <stdio.h>
int main() {
    int a,i;
    printf("entrez le nombre d'elements : ");
    scanf("%d", &a);
    int T[a];
    for (int i=0; i<a; i++){
        printf("entrez l'elements %d : ",i+1);
        scanf("%d", &T[i]);
   
    }
       printf("Les éléments impairs est : ");
    for (i = 0; i < a; i++) {
        if (T[i] % 2 == 1) { 
            printf("%d ", T[i]);
        }
    
    }
   




}