#include <stdio.h>
#include <stdlib.h>

int main() {
    int img[10][10][3];
    float gray[10][10];
    int row = 0, col;

    while (row < 10) {
        col = 0;
        while (col < 10) {
            img[row][col][0] = rand() % 256;
            img[row][col][1] = rand() % 256;
            img[row][col][2] = rand() % 256;
            gray[row][col] = 0.299 * img[row][col][0] + 0.587 * img[row][col][1] + 0.114 * img[row][col][2];
            col++;
        }
        row++;
    }

    row = 0;
    printf("RGB and Grayscale values:\n");

    while (row < 10) {
        col = 0;
        while (col < 10) {
            printf(" (%d, %d): R=%d, G=%d, B=%d, Grayscale=%.2f\n",
                   row, col, img[row][col][0], img[row][col][1], img[row][col][2], gray[row][col]);
            col++;
        }
        row++;
    }

    return 0;
}
