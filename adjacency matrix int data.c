#include <stdio.h>

#define SIZE 5 // Define the size of the matrix

void createAdjacencyMatrix(int matrix[SIZE][SIZE], int data[SIZE][2]) {
    // Initialize the matrix with zeros
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = 0;
        }
    }

    // Fill the matrix with adjacency data
    for (int i = 0; i < SIZE; i++) {
        int row = data[i][0];
        int col = data[i][1];
        matrix[row][col] = 1;
        matrix[col][row] = 1; // Assuming an undirected graph
    }
}

void printAdjacencyMatrix(int matrix[SIZE][SIZE]) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int adjacencyMatrix[SIZE][SIZE];
    int adjacencyData[SIZE][2] = {
        {0, 1},
        {0, 4},
        {1, 2},
        {1, 3},
        {1, 4}
    };

    createAdjacencyMatrix(adjacencyMatrix, adjacencyData);
    printAdjacencyMatrix(adjacencyMatrix);

    return 0;
}
