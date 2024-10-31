#include <stdio.h>
#include <stdlib.h>

#define N 8

// Function to create an empty board
int **createBoard() {
    int **board = (int **)malloc(N * sizeof(int *));
    for (int i = 0; i < N; ++i) {
        board[i] = (int *)calloc(N, sizeof(int));
    }
    return board;
}

// Function to print the board
void printBoard(int **board) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Press Enter to view the next solution...\n");
    getchar(); // Waits for user input to proceed
}

// Check if it's safe to place a queen
int isSafe(int **board, int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[row][i]) return 0;
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j]) return 0;
    }
    for (int i = row, j = col; i < N && j >= 0; i++, j--) {
        if (board[i][j]) return 0;
    }
    return 1;
}

// Recursive function to solve the eight queens problem
int solve(int **board, int col) {
    if (col >= N) {
        printBoard(board);
        return 1;
    }
    int hasSolution = 0;
    for (int i = 0; i < N; i++) {
        if (isSafe(board, i, col)) {
            board[i][col] = 1;
            hasSolution |= solve(board, col + 1);
            board[i][col] = 0;  // Backtracking
        }
    }
    return hasSolution;
}

int main() {
    int **board = createBoard();
    if (!solve(board, 0)) {
        printf("No solution exists\n");
    }

    // Free memory
    for (int i = 0; i < N; i++) {
        free(board[i]);
    }
    free(board);

    return 0;
}
