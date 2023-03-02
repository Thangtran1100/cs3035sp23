#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct
{
    double sideA;
    double sideB;
    double hyp;
} PythagoreanTriple;

// PythagoreanTriple* create_triangle()
// {
//     struct PythagoreanTriple* triangle = (PythagoreanTriple*) malloc(3 * sizeof(PythagoreanTriple));

//     int arrayIndex = 0;

//     for(int indexRow = 0; indexRow <= 3; indexRow++)
//     {
//         for(int indexCol = 0; indexCol <= 3; indexCol++)
//         {
//             triangle[arrayIndex]
//         }
//     }
// }


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

void print_pythagorean_triples(PythagoreanTriple *triangle)
{
    for (int i = 0; i < 3; i++)
    {
        printf("(%f, %f, %f)\n", triangle[i].sideA, triangle[i].sideB, triangle[i].hyp);
    }
}

void main()
{
    struct PythagoreanTriple *triangle = (PythagoreanTriple *)malloc(3 * sizeof(PythagoreanTriple));

    getTwoSides(triangle, 3, 4);

    print_pythagorean_triples(triangle);

    free(triangle);
}