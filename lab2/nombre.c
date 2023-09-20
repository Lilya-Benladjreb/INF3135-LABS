#include <stdio.h>

enum conj {
    AUC,        // Aucune conjontion
    ET,         // et
    TRAIT_UNION // Trait d'union
};

// Affiche l'unité u
void afficher_unite(unsigned int u){
    switch(u){
        case 0: printf("zéro");
            break;
        case 1: printf("un");
            break;
        case 2: printf("deux");
            break;
        case 3: printf("trois");
            break;
        case 4: printf("quatre");
            break;
        case 5: printf("cinq");
            break;
        case 6: printf("six");
            break;
        case 7: printf("sept");
            break;
        case 8: printf("huit");
            break;
        case 9: printf("neuf");
            break;
    }
}

// Affiche la dizaine d
void afficher_dizaine(unsigned int d){
    switch(d){
        case 1: printf("dix");
            break;
        case 2: printf("vingt");
            break;
        case 3: printf("trente");
            break;
        case 4: printf("quarante");
            break;
        case 5: printf("cinquante");
            break;
        case 6: printf("soixante");
            break;
        case 7: printf("soixante-dix");
            break;
        case 8: printf("quatre-vingt");
            break;
        case 9: printf("quatre-vingt-dix");
            break;
    }
}

// Affiche un nombre entre 10 et 19
void afficher_10_a_19(unsigned int n){
    switch(n){
        case 10: printf("dix");
            break;
        case 11: printf("onze");
            break;
        case 12: printf("douze");
            break;
        case 13: printf("treize");
            break;
        case 14: printf("quatorze");
            break;
        case 15: printf("quinze");
            break;
        case 16: printf("seize");
            break;
        case 17: printf("dix-sept");
            break;
        case 18: printf("dix-huit");
            break;
        case 19: printf("dix-neuf");
            break;
    }
}

// Affiche la conjonction
void afficher_conjonction(enum conj c){
    switch (c) {
        case ET: printf("-et-");
            break;
        case TRAIT_UNION: printf("-");
            break;
        default: break;
    }
}

// Affiche un nombre entre 0 et 69
void afficher_0_a_69(unsigned int n){
    if(n < 10){
        afficher_unite(n);
    }else if (n < 20){
        afficher_10_a_19(n);
    }else {
        afficher_dizaine(n/10);
        int reste = n % 10;
        afficher_conjonction(reste == 0 ? AUC : reste == 1 ? ET : TRAIT_UNION);
        if (reste > 0){
            afficher_unite(reste);
        }
    }
}

// Affiche un nombre entre 70 et 79
void afficher_70_a_79(unsigned int n){
    printf("soixante");
    int reste = 10 + n % 10;
    afficher_conjonction(reste == 1 ? AUC : TRAIT_UNION);
    afficher_10_a_19(reste);
}

// Affiche un nombre entre 80 et 89
void afficher_80_a_89(unsigned int n){
    printf("quatre-vingt");
    int reste = n % 10;
    if (reste == 0) {
        printf("s");
    }else{
        afficher_conjonction(TRAIT_UNION);
        afficher_unite(reste);
    }
}

// Affiche un nombre entre 90 et 99
void afficher_90_a_99(unsigned int n){
    printf("quatre-vingt");
    int reste = n % 10;
    if (reste == 0) {
        afficher_conjonction(TRAIT_UNION);
        afficher_10_a_19(10);
    }else{
        afficher_conjonction(TRAIT_UNION);
        afficher_10_a_19(10 + reste);
    }
}

// Affiche un nombre entre 0 et 99
void afficher_0_a_99(unsigned int n){
    if(n < 10 ){
        afficher_unite(n);
    }else if (n < 69) {
        afficher_0_a_69(n);
    }else if (n < 79){
        afficher_70_a_79(n);
    }else if (n < 89){
        afficher_80_a_89(n);
    } else {
        afficher_90_a_99(n);
    }
}


int main(int argc, char * argv[]){

    printf("******Test des methodes seules*******\n");
    afficher_unite(9);
    printf("\n");
    afficher_dizaine(1);
    printf("\n");
    afficher_0_a_69(61);
    printf("\n");
    afficher_70_a_79(76);
    printf("\n");
    afficher_80_a_89(81);
    printf("\n");
    afficher_90_a_99(92);
    printf("\n");

    printf("******Print tout les nombres*******\n");

    for(unsigned int i = 0; i < 100; i++){
        afficher_0_a_99(i);
        printf("\n");
    }

    return 0;
}