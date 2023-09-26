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
    double b2 = pow(eq.b, 2);
    double delta = b2 - 4.0 * eq.a * eq.c;
    struct solution sol;

    return sol;
}

int main(int argc, char* argv[]){
    double a = 1;
    double b = 1;
    double c = 1;

    struct equation eq = {.a=a, .b=b, .c=c};
    //Equivalent
//    struct equation eq;
//    eq.a = a;
//    eq.b = b;
//    eq.c = c;

    struct solution sol = solve_equation(eq);

    printf("solution: %d\n", sol.num_solutions);

    return 0;
}