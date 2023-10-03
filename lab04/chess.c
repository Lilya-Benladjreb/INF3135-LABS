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
    struct piece piece = piece{.c};
    echiquier->pieces[p]= ;
}

/**
 * Initialise l'échiquier
 *
 * @param echiquier  L'échiquier à initialiser
 */
void initialiser_echiquier(struct echiquier *echiquier) {
    for(i < 32){
        ajouter_piece();
    }
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
    // À compléter
}

int main(void) {
    struct echiquier echiquier;
    initialiser_echiquier(&echiquier);
    afficher_echiquier(&echiquier);
    return 0;
}
