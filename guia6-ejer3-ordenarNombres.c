#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void pedirNombre(char nombre[5][25]);
void elimiLinea(char nombre[5][25]);
char* ordenMenor(char nombre[5][25]);
int main(){
    char nombre[5][25];
    pedirNombre(nombre);
    elimiLinea(nombre);
    char* menor = ordenMenor(nombre);
    printf("nombre menor es: %s\n", menor);
    return 0;
}
void pedirNombre(char nombre[5][25]){
    printf("Ingrese los nombres:\n");
    for(int i = 0; i < 5; i++){
        printf("%d : ", i + 1);
        fgets(nombre[i], 25, stdin);
    }
    printf("Los nombres ingresados son:\n");
    for(int i = 0; i < 5; i++){
        printf("%s\n", nombre[i]);
    }
    printf("\n");
}
void elimiLinea(char nombre[5][25]){
    for(int i = 0; i < 5; i++){
        int largo = strlen(nombre[i]);
        if (largo > 0 && nombre[i][largo - 1] == '\n'){
            nombre[i][largo - 1] = '\0';
        }
    }
}
char* ordenMenor(char nombre[5][25]){
    char* menor = nombre[0];
    for (int i = 1; i < 5; i++){
        if (strcmp(nombre[i], menor) < 0){
            menor = nombre[i];
        }
    }
    return menor;
}
/*
Confeccionar un programa que permita almacenar en una matriz los nombres 
de 5 personas. Imprimir el nombre alfabéticamente menor
*/