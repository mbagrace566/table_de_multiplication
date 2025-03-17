#include <stdio.h>
int main () {

    int nombre=0,i=0;
    printf("entrez le nombre: ");
    scanf("%d", &nombre);
    printf("la table de multiplication de 10");

    for(i=0; i<=10; i++){
        printf("%d*%d=%d\n", nombre, i, nombre*i);
    }
    return 0;
}
