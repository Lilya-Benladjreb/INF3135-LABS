#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define USAGE "Usage: ./quadratique a b c\nRésoud l'équation quadratique ax^2 + bx + c == 0.\n"


struct pair {
    double first;
    double second;
};

struct equation {
    double a;
    double b;
    double c;
};

struct solution {
    struct equation equation;
    unsigned int num_solutions;
    union {
        double one_solution;
        struct pair two_solutions;
    } solutions;
};

struct solution solve_equation(struct equation eq){
    double b2 = pow(eq.b, 2);
    double delta = b2 - 4.0 * eq.a * eq.c;

    struct solution sol;
    sol.equation = eq;

    if(delta == 0){
        sol.num_solutions = 1;
        sol.solutions.one_solution = -(eq.b)/2 * eq.a;
    } else if (delta < 0){
        sol.num_solutions = 0;
    } else {
        sol.num_solutions = 2;
        sol.solutions.two_solutions.first = (-(eq.b) - sqrt(delta))/ 2 * eq.a;
        sol.solutions.two_solutions.second = (-(eq.b) + sqrt(delta))/ 2 * eq.a;
    }
    return sol;
}

void print_solution(struct solution sol){
    printf("L'équation\n %.2fx^2 %c %.2fx %c %.2f == 0\n",
           sol.equation.a,
           '+',
           sol.equation.b,
           '+',
           sol.equation.c);
    switch (sol.num_solutions) {
        case 0:
            printf("Aucune solution\n");
            break;
        case 1:
            printf("Admet la solution %.2f\n", sol.solutions.one_solution);
            break;
        case 2:
            printf("Admet les solution %.2f et %.2f\n",
                   sol.solutions.two_solutions.first,
                   sol.solutions.two_solutions.second);
            break;
    }
}

int main(int argc, char* argv[]){
    if(argc == 4){
        double a = atof(argv[1]);
        double b = atof(argv[2]);
        double c = atof(argv[3]);
        struct equation eq = {.a=a, .b=b, .c=c};
        //Equivalent
//    struct equation eq;
//    eq.a = a;
//    eq.b = b;
//    eq.c = c;

        struct solution sol = solve_equation(eq);
        print_solution(sol);
    } else {
        fprintf(stderr, "Erreur: nombre d'arguments incorrect\n");
        fprintf(stderr, USAGE);
    }




    return 0;
}