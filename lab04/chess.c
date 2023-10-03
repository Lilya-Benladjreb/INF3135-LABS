#include <stdio.h>

// Couleur d'une pièce
enum couleur {
    NOIR,
    BLANC
};

// Type de pièce
enum type_piece {
    PION,
    TOUR,
    CAVALIER,
    FOU,
    DAME,
    ROI
};

// Pièce
struct piece {
    enum couleur couleur;
    enum type_piece type_piece;
};

// Échiquier
struct echiquier {
    struct piece pieces[32];   // Les 32 pièces possibles
    struct piece *cases[8][8]; // Pour chaque case, la pièce qui l'occupe
    enum couleur joueur;       // Le joueur qui doit jouer
};

/**
 * Ajoute une pièce sur un échiquier
 *
 * @param echiquier   L'échiquier
 * @param p           Le numéro de la pièce
 * @param r           La ligne où placer la pièce
 * @param c           La colonne où placer la pièce
 * @param couleur     La couleur de la pièce
 * @param type_piece  Le type de pièce
 */
void ajouter_piece(struct echiquier *echiquier,
                   unsigned int p,
                   unsigned int r,
                   unsigned int c,
                   enum couleur couleur,
                   enum type_piece type_piece) {
    struct piece piece = piece{.couleur = couleur};
    echiquier->pieces[p]= (struct piece){.couleur=couleur, .type_piece=type_piece};
    echiquier->cases[r][c] = &echiquier->pieces[p];
}

/**
 * Initialise l'échiquier
 *
 * @param echiquier  L'échiquier à initialiser
 */
void initialiser_echiquier(struct echiquier *echiquier) {
    for(int r = 0; r < 8; r++){
        for(int c = 0; c < 8; c++){
            echiquier->cases[r][c] = NULL;
        }
    }

    for(int e = 0; e < 8; e++){
        unsigned int identifiant = e;
        ajouter_piece(echiquier, identifiant, 6, e,BLANC, PION);
        ajouter_piece(echiquier, identifiant+16, 1, e,NOIR, PION);
    }

    //Ajouter le reste des pièces à la main
    ajouter_piece(echiquier, 8,0,0, BLANC, TOUR);
    ajouter_piece(echiquier, 9,0,7, BLANC, TOUR);
    ajouter_piece(echiquier, 24,0,7, NOIR, TOUR);
    ajouter_piece(echiquier, 25,7,0, NOIR, TOUR);

    ajouter_piece(echiquier, 10,0,1, BLANC, CAVALIER);
    ajouter_piece(echiquier, 11,0,1, BLANC, CAVALIER);
    ajouter_piece(echiquier, 26,7,1, NOIR, CAVALIER);
    ajouter_piece(echiquier, 27,7,1, NOIR, CAVALIER);

    ajouter_piece(echiquier, 12,0,2, BLANC, FOU);
    ajouter_piece(echiquier, 13,0,2, BLANC, FOU);
    ajouter_piece(echiquier, 28,7,2, NOIR, FOU);
    ajouter_piece(echiquier, 29,7,2, NOIR, FOU);

    ajouter_piece(echiquier, 14,0,3, BLANC, DAME);
    ajouter_piece(echiquier, 30,7,3, NOIR, DAME);

    ajouter_piece(echiquier, 15,0,4, BLANC, ROI);
    ajouter_piece(echiquier, 31,7,4, NOIR, ROI);

}

/**
 * Affiche le type d'une pièce sur stdout
 *
 * @param t  Le type de pièce
 */
void afficher_type_piece(enum type_piece t) {
    // À compléter
}

/**
 * Affiche une couleur sur stdout
 *
 * @param c  La couleur
 */
void afficher_couleur(enum couleur c) {
    // À compléter
}

/**
 * Affiche une pièce sur stdout
 *
 * @param piece  La pièce à afficher
 */
void afficher_piece(const struct piece *piece) {
    // À compléter
}

/**
 * Affiche un échiquier sur stdout
 *
 * @param echiquier  L'échiquier à afficher
 */
void afficher_echiquier(const struct echiquier *echiquier) {
    for(unsigned int r = 0; r < 8; r++){
        //à completer
    }
}

int main(void) {
    struct echiquier echiquier;
    initialiser_echiquier(&echiquier);
    afficher_echiquier(&echiquier);
    return 0;
}
