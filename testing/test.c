#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double sideA;
    double sideB;
    double hyp;
} PythagoreanTriple;

void getTwoSides(PythagoreanTriple *triangle, double sideAIn, double sideBIn)
{
    triangle->sideA = sideAIn;
    triangle->sideB = sideBIn;

    triangle->hyp = sqrt(pow(sideAIn, 2) + pow(sideBIn, 2));
}

void getSideAndHyp(PythagoreanTriple *triangle, double sideAIn, double hypIn)
{
    triangle->sideA = sideAIn;
    triangle->hyp = hypIn;

    triangle->sideB = sqrt(pow(hypIn, 2) - pow(sideAIn, 2));
}

void main()
{
    PythagoreanTriple *triangle = malloc(3* sizeof(PythagoreanTriple));

    getTwoSides(&triangle[0], 3, 4);
    getTwoSides(&triangle[1], 6, 8);
    getSideAndHyp(&triangle[2], 1, 2);

    printf("PythTriple [sideA = %f, sideB = %f, hyp = %f]\n", triangle[0].sideA, triangle[0].sideB, triangle[0].hyp);
    printf("PythTriple [sideA = %f, sideB = %f, hyp = %f]\n", triangle[1].sideA, triangle[1].sideB, triangle[1].hyp);
    printf("PythTriple [sideA = %f, sideB = %f, hyp = %f]\n", triangle[2].sideA, triangle[2].sideB, triangle[2].hyp);

    free(triangle);
}
