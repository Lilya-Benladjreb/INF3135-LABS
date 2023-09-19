#include <stdio.h>
#define NUM_SEC_DANS_1_JOUR 86400
#define NUM_SEC_DANS_1_HEURE 3600


// Exo 1
void afficher_duree(unsigned int num_secondes){
    int hr = 0;
    int min = 0;
    int sec = 0;

    if(num_secondes > NUM_SEC_DANS_1_JOUR){
        printf("Plus de 24h");
    }else {
        hr = num_secondes / NUM_SEC_DANS_1_HEURE;
        num_secondes = num_secondes % 3600;
        min = num_secondes / 60;
        num_secondes = num_secondes % 60;
        sec = num_secondes;

        printf("%.2d:%.2d:%.2d\n", hr, min, sec);
    }

}

int main(int argc, char * argv[]){
    afficher_duree(8990);
    return 0;
}