#include <stdio.h>
#include <string.h>

// Exo 2
int main(int argc, char * argv[]){
    if ( argc == 2 ){
        char* argument = argv[1];
        int longueur = strlen(argument);
        printf("%s est de longeur %d\n", argument, longueur);
    }else{
        fprintf(stderr, "Erreur: le programme prend exactement un argument\n");
    }
    return 0;
}