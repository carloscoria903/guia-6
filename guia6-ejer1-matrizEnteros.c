#include <stdio.h>
#include <stdlib.h>
void pedirMatriz(int matriz[3][4]);
void encontrarMayor(int matriz[3][4]);
int main(){
    int matriz[3][4];
    pedirMatriz(matriz);
    encontrarMayor(matriz);
    return 0;
}
void pedirMatriz(int matriz[3][4]){
printf("ingrese los numeros\n ");
for(int i= 0; i < 3; i ++){
    for(int j = 0; j < 4; j++){
        printf("en la posicion :[%d] [%d] ", i, j );
        scanf("%d",&matriz[i][j]);
    }
}
printf("la matriz ingresada es \n");
for(int i= 0; i < 3; i ++){
    for(int j = 0; j < 4; j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
}
void encontrarMayor(int matriz[3][4]){
int mayor = matriz[0][0];
for(int i= 0; i < 3; i ++){
    for(int j = 0; j < 4; j++){
        if(matriz[i][j] > mayor){
            mayor = matriz[i][j];
        }
}
}
    printf("el elemento mayor es %d", mayor);
}
/*
Crear una matriz de enteros de 3x4. Realizar la carga y luego imprimir el 
elemento mayor
*/