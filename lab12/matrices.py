def matrixAdd(matrixA, matrixB):
    for indexRow in range(len(matrixA)):
        for indexCol in range(len(matrixA[0])):
            sumMatrices[indexRow][indexCol] = matrixA[indexRow][indexCol] + matrixB[indexRow][indexCol]

    for index in sumMatrices:
        print(index)


def matrixAddString(matrixA, matrixB):
    for indexRow in range(len(matrixA)):
        for indexCol in range(len(matrixA[0])):
            sumMatrices[indexRow][indexCol] = str(matrixA[indexRow][indexCol]) + str(matrixB[indexRow][indexCol])

    for index in sumMatrices:
        print(index)


matrixA = [[1,7,6],
           [2,5,4],
           [3,1,2]]

matrixB = [[3,4,2],
           [4,4,3],
           [3,7,6]]

sumMatrices = [[0,0,0],
               [0,0,0],
               [0,0,0]]


matrixAdd(matrixA, matrixB)

print("\n---------------------------------\n")

matrixAddString(matrixA, matrixB)
