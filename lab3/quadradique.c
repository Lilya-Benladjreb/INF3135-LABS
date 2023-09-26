#include <stdio.h>
#include <stdlib.h>

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

struct solution solve_equation(struct equation eq);

int main(int argc, char* argv[]){
    return 0;
}