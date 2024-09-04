#include <stdio.h>
int main() {
    int a,i,min;
    printf("entrez le nombre d'elements : ");
    scanf("%d", &a);
    int T[a];
    for (int i=0; i<a; i++){
        printf("entrez l'elements %d : ",i+1);
        scanf("%d", &T[i]);
   
    }
min=T[0];

for (i=1;i<a;i++){
if (min>T[i])
T[i]=min;
}
printf("le nombre minimum est : %d",min);



}