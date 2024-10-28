#include <stdio.h>
int main() {
    int N;
    printf("Enter N: ");
    scanf("%d", &N);

    printf("pattren 1 using while:\n");
    int i = 1;
    while (i <= N) {
        int spaces = N - i;
        while (spaces > 0) {
            printf(" ");
            spaces--;
        }
        int j = 0;
        while (j < i) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    printf("\n pattren 2 using while:\n");
    i = 1;
    while (i <= N) {
        int spaces = N - i;
        while (spaces > 0) {
            printf(" ");
            spaces--;
        }
        int j = 0;
        while (j < 2 * i - 1) {
            printf("*");
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}
