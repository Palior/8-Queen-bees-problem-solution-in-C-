Eight Queens Problem Solver

This C program solves the classic Eight Queens problem, which places eight queens on an 8x8 chessboard in such a way 
that no two queens threaten each other. This means that no two queens share the same row, column, or diagonal.

Problem Overview

The Eight Queens problem is a fundamental example in combinatorial problems and backtracking algorithms. 
The challenge is to find all possible arrangements of eight queens on an 8x8 board where none of the queens can attack one another.

Solution Approach

This program uses a backtracking algorithm to explore potential solutions. It tries to place queens in each column and checks 
if each placement is safe. If a safe placement is found, the program places the queen and moves to the next column. If no safe 
positions exist, it backtracks to the previous column and tries a new position.

Features

	Board Initialization: Creates an empty 8x8 board.
	Solution Display: Shows each solution individually and waits for the user to press Enter before showing the next one.
	Safety Check: Validates if a queen placement is safe.
	Memory Management: Frees up allocated memory after execution.that do not meet the row, column, or diagonal restrictions, displaying only the valid solutions.

Functions

int **createBoard()
	Description: Creates and initializes an empty 8x8 chessboard.
	Return: A pointer to a dynamically allocated 2D array representing the chessboard.

void printBoard(int **board)
	Description: Prints the current state of the board to the console.
	Parameters: board and the current board state.
	Additional Feature: Pauses after each solution, waiting for the user to press Enter to proceed.

int isSafe(int **board, int row, int col)
	Description: Checks if placing a queen at board[row][col] is safe, meaning it won’t be attacked by any other queen.
	Parameters: 
		-board and The current board state.
		-row, col and the proposed position for the queen.
	Return: 1 if it’s safe, 0 otherwise.

int solve(int **board, int col)
	Description: Uses a recursive backtracking approach to place queens on the board.
	Parameters:
		- board and the current board state.
		- col and the column where the program attempts to place a queen.
	Return: 1 if a solution is found, 0 if not.
	Backtracking: If no safe placement is possible, removes the last-placed queen and tries a new position.

int main()
	Description: Initializes the chessboard, calls the solve function to begin the solution search, and releases allocated memory.
	Flow:
		- Creates the board with createBoard.
		- Calls solve to find solutions.
		- If no solution exists, outputs a message.
		- Frees the allocated memory for the board.