#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct PythagoreanTriples{
    double sideA;
    double sideB;
    double hyp;
};

void inputTwoSides(struct PythagoreanTriples* triples, double sideAIn, double sideBIn){
    triples->sideA = sideAIn;
    triples->sideB = sideBIn;
    triples->hyp = sqrt(pow(sideAIn, 2) + pow(sideBIn, 2));
}

void inputSideAndHyp(struct PythagoreanTriples* triples, double sideAIn, double hypIn){
    triples->sideA = sideAIn;
    triples->hyp = hypIn;
    triples->sideB = sqrt(pow(hypIn, 2) - pow(sideAIn, 2));
}

int main()
{
    struct PythagoreanTriples* triples = malloc(3 *sizeof( struct PythagoreanTriples));

    inputTwoSides(&triples[0], 3, 4);
    inputTwoSides(&triples[1], 6, 8);
    inputSideAndHyp(&triples[2], 1, 2);

    printf("PythTriple [sideA = %f, sideB = %f, hyp = %f]\n", triples[0].sideA, triples[0].sideB, triples[0].hyp);
    printf("PythTriple [sideA = %f, sideB = %f, hyp = %f]\n", triples[1].sideA, triples[1].sideB, triples[1].hyp);
    printf("PythTriple [sideA = %f, sideB = %f, hyp = %f]\n", triples[2].sideA, triples[2].sideB, triples[2].hyp);

    free(triples);

    return 0;
}