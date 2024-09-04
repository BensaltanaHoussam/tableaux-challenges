#include <stdio.h>
int main() {
    int a,i,m;
    printf("entrez le nombre d'elements : ");
    scanf("%d", &a);
    int T[a];
    for (int i=0; i<a; i++){
        printf("entrez l'elements %d : ",i+1);
        scanf("%d", &T[i]);
   
    }
      int s = 0;

    for (i = 0; i < a; i++) {
        s = s + T[i];
    }

    m = s / a;
   
    printf("La moyenne est : %d\n", m);
   




}