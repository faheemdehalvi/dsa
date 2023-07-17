#include <stdio.h>

#define SIZE 5 // Define the size of the matrix

void createAdjacencyMatrix(char matrix[SIZE][SIZE], char data[SIZE][2]) {
    // Initialize the matrix with zeros
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            matrix[i][j] = '0';
        }
    }

    // Fill the matrix with adjacency data
    for (int i = 0; i < SIZE; i++) {
        int row = data[i][0] - 'A'; // Convert character to corresponding row index
        int col = data[i][1] - 'A'; // Convert character to corresponding column index
        matrix[row][col] = '1';
        matrix[col][row] = '1'; // Assuming an undirected graph
    }
}

void printAdjacencyMatrix(char matrix[SIZE][SIZE]) {
    printf("Adjacency Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%c ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    char adjacencyMatrix[SIZE][SIZE];
    char adjacencyData[SIZE][2] = {
        {'A', 'B'},
        {'A', 'E'},
        {'B', 'C'},
        {'B', 'D'},
        {'B', 'E'}
    };

    createAdjacencyMatrix(adjacencyMatrix, adjacencyData);
    printAdjacencyMatrix(adjacencyMatrix);

    return 0;
}
