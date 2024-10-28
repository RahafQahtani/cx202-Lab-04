#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    int grid[10][10] = {0}; 
    int treasureX, treasureY;
    int x, y;

   srand(time(NULL));
    treasureX = rand() % 10;
    treasureY = rand() % 10;
    grid[treasureX][treasureY] = 1; // Mark the treasure location with a 1
	
    printf("Searching for the treasure...\n");

    // Search the grid
    for (x = 0; x < 10; x++) {
        for (y = 0; y < 10; y++) {
            if (grid[x][y] == 1) { 
                printf("Hurrah! I have found the hidden treasure at (%d, %d)\n", x, y);
                return 0;
            }
        }
    }

    return 0;
}
