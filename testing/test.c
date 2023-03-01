#include<stdio.h>
#include<stdlib.h>
#include<math.h>

struct PythagoreanTriple
{
    double sideA;
    double sideB;
    double hyp;

    void getTwoSides(double sideAIn, double sideBIn)
    {
        sideA = sideAIn;
        sideB = sideBIn;
    }

    void getSideAndHyp(double sideAIn, double hypIn)
    {
        sideA = sideAIn;
        hyp = hypIn;
    }
};


PythagoreanTriple* get_info_triangle(int arraySize)
{
    PythagoreanTriple* triangle = (PythagoreanTriple*) malloc(arraySize*sideof(PythagoreanTriple));

    int arrayIndex = 0;
    
    for(int indexRow = 0; indexRow <= 3; indexRow++)
    {
        for(int indexColumn = 0; indexColumn <= 3; indexColumn++)
        {
            
        }
    }
}

void main()
{
    struct PythagoreanTriple triangle;

}