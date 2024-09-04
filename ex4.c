#include <stdio.h>
int main() {
    int a,i,max;
    printf("entrez le nombre d'elements : ");
    scanf("%d", &a);
    int T[a];
    for (int i=0; i<a; i++){
        printf("entrez l'elements %d : ",i+1);
        scanf("%d", &T[i]);
   
    }
max=T[0];

for (i=1;i<a;i++){
if (max<T[i])
max=T[i];
}
printf("le nombre maximum est : %d",max);



}