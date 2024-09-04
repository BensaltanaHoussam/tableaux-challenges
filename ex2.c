#include <stdio.h>
int main() {
    int a;
    printf("entrez le nombre d'elements : ");
    scanf("%d", &a);
    int T[a];
    for (int i=0; i<a; i++){
        printf("entrez l'elements %d : ",i+1);
        scanf("%d", &T[i]);
    }for (int i=0 ; i<a ; i++){
        
        printf("T[%d] = %d \n",i+1,T[i]);
    }
}