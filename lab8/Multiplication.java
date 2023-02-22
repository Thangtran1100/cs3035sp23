public class Multiplication
{
    // Multiply function for 2 integers
    public int multiply(int num1, int num2)
    {
        return num1 * num2;
    }

    // Multiply function for 2 double
    public double multiply(double num1, double num2)
    {
        return num1 * num2;
    }

    // Multiply function for 3 integers
    public int multiply(int num1, int num2, int num3)
    {
        return num1 * num2 * num3;
    }

    // Multiply function for 3 double
    public double multiply(double num1, double num2, double num3)
    {
        return num1 * num2 * num3;
    }


    /*
     * This function return result of multiplication between two 3x3 matrices
     *
     * C11 = (A11 * B11) + (A12 * B21) + (A13 * B31)
     * C12 = (A11 * B12) + (A12 * B22) + (A13 * B32)
     * C13 = (A11 * B13) + (A12 * B23) + (A13 * B33)
     *
     * C21 = (A21 * B11) + (A22 * B21) + (A23 * B31)
     * C22 = (A21 * B12) + (A22 * B22) + (A23 * B32)
     * C23 = (A21 * B13) + (A22 * B23) + (A23 * B33)
     *                         
     * C31 = (A31 * B11) + (A32 * B21) + (A33 * B31)
     * C32 = (A31 * B12) + (A32 * B22) + (A33 * B32)
     * C32 = (A31 * B13) + (A32 * B23) + (A33 * B33)
     */

    public int[][] multiply(int[][] matrix1, int[][] matrix2)
    {

        return new int[][]{
            {
                (matrix1[0][0] * matrix2[0][0] + matrix1[1][0] * matrix2[0][1] + matrix1[2][0] * matrix2[0][2]),
                (matrix1[0][1] * matrix2[0][0] + matrix1[1][1] * matrix2[0][1] + matrix1[2][1] * matrix2[0][2]),
                (matrix1[0][2] * matrix2[0][0] + matrix1[1][2] * matrix2[0][1] + matrix1[2][2] * matrix2[0][2])
            },

            {
                (matrix1[0][0] * matrix2[1][0] + matrix1[1][0] * matrix2[1][1] + matrix1[2][0] * matrix2[1][2]),
                (matrix1[0][1] * matrix2[1][0] + matrix1[1][1] * matrix2[1][1] + matrix1[2][1] * matrix2[1][2]),
                (matrix1[0][2] * matrix2[1][0] + matrix1[1][2] * matrix2[1][1] + matrix1[2][2] * matrix2[1][2])
            },

            {
                (matrix1[0][0] * matrix2[2][0] + matrix1[1][0] * matrix2[2][1] + matrix1[2][0] * matrix2[2][2]),
                (matrix1[0][1] * matrix2[2][0] + matrix1[1][1] * matrix2[2][1] + matrix1[2][1] * matrix2[2][2]),
                (matrix1[0][2] * matrix2[2][0] + matrix1[1][2] * matrix2[2][1] + matrix1[2][2] * matrix2[2][2])
            },
        };
    }



    public void printMatrices(int[][] matrix)
    {
        for (int indexColumn = 0; indexColumn < 3; indexColumn++)
        {
            for (int indexRow = 0; indexRow < 3; indexRow++)
            {
                System.out.print(matrix[indexColumn][indexRow] + " ");
            }

            System.out.println();
        }
    }

    public static void main(String[] args)
    {
        // Declare object
        Multiplication calculation = new Multiplication();

        // Declare variables
        int num1 = 2;
        int num2 = 3;
        int num3 = 4;

        //Print out result of multiplication of 2 integers
        System.out.println(calculation.multiply(2,3));
        System.out.println();

        // Declare variables
        double num4 = 2.0;
        double num5 = 4.0;
        double num6 = 6.0;

        //Print out result of multiplication of 2 double
        System.out.println(calculation.multiply(num4,num5));
        System.out.println();

        //Print out result of multiplication of 3 integers
        System.out.println(calculation.multiply(num1, num2, num3));
        System.out.println();

        //Print out result of multiplication of 3 double
        System.out.println(calculation.multiply(num4, num5, num6));
        System.out.println();

        // Declare matrices
        int[][] matrix1 = {
            {1,6,1},
            {5,5,6},
            {4,7,2}
        };

        int[][] matrix2 = {
            {9,3,7},
            {2,1,3},
            {6,8,5}
        };

        // Print out matrices
        calculation.printMatrices(matrix1);
        System.out.println();
        calculation.printMatrices(matrix2);
        System.out.println();

        // Print out result of multiplication between matrix1 and matrix2
        calculation.printMatrices(calculation.multiply(matrix1, matrix2));
    }
}