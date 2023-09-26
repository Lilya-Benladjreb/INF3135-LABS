#include <stdio.h>
#include <stdlib.h>
#include <math.h>

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
    struct solution sol;

    return sol;
}

int main(int argc, char* argv[]){
    struct equation eq;
    struct solution sol = solve_equation(eq);

    printf("solution: %d\n", sol.num_solutions);

    return 0;
}