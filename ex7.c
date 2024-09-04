#include <stdio.h>
int main() {
    int a,i,j,cup;
    printf("entrez le nombre d'elements : ");
    scanf("%d", &a);
    int T[a];
    for (int i=0; i<a; i++){
        printf("entrez l'elements %d : ",i+1);
        scanf("%d", &T[i]);
   
    }

for (i=0;i<a;i++){
    for(j=i+1;j<a;j++){
        if(T[i]>T[j]){
            cup=T[i];
            T[i]=T[j];
            T[j]=cup;
        }
    }
}
printf("les elements du tableaux par ordre croissant :");
for(i=0;i<a;i++){
    printf("%d",T[i]);
}




}