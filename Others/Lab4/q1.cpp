#include <iostream>
using namespace std;

const int ROWS = 3;
const int COLS = 3;

bool isSafe(int maze[ROWS][COLS], int x, int y) {
    return (x >= 0 && x < ROWS && y >= 0 && y < COLS && maze[x][y] == 0);
}

bool solveMazeUtil(int maze[ROWS][COLS], int x, int y) {
    if (x == ROWS - 1 && y == COLS - 1) // Reached the destination
        return true;

    if (isSafe(maze, x, y)) {
        maze[x][y] = 2; // Mark current cell as visited

        // Move down
        if (solveMazeUtil(maze, x + 1, y))
            return true;

        // Move right
        if (solveMazeUtil(maze, x, y + 1))
            return true;

        // Move up
        if (solveMazeUtil(maze, x - 1, y))
            return true;

        // Move left
        if (solveMazeUtil(maze, x, y - 1))
            return true;

        // If none of the above movements work, backtrack
        maze[x][y] = 0;
        return false;
    }

    return false;
}

bool solveMaze(int maze[ROWS][COLS]) {
    return solveMazeUtil(maze, 0, 0);
}

int main() {
    int maze1[ROWS][COLS] = {{0, 0, 0}, {1, 1, 0}, {0, 0, 0}};
    int maze2[ROWS][COLS] = {{0, 0, 1}, {1, 1, 1}, {0, 0, 1}};

    cout << "Maze 1: " << (solveMaze(maze1) ? "true" : "false") << endl;
    cout << "Maze 2: " << (solveMaze(maze2) ? "true" : "false") << endl;

    return 0;
}


/*
	  Lab - 4
Evaluative Questions
(5 points) 2-D Array, Recursion: CO1
Imagine you are an explorer lost in a maze. You can only move in four directions: up, down, left, and right. Write a recursive function to help you find your way out of the maze. The maze is represented as a 2D grid where '0' represents an open path and '1' represents a wall. Your function should return true if you can escape the maze, and false otherwise.
Example:
Maze:
0 0 0
1 1 0
0 0 0

Expected Output: true

	Maze:
0 0 1
1 1 1
0 0 1

Expected Output: false

*/