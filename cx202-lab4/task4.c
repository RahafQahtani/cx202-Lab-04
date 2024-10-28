#include <stdio.h>

int main() {
    int N = 10, i = 0;
    int population[N];
    int max = 0, min = 0, sum = 0;
    float mean;

    // Input population values
    for (i = 0; i < N; i++) {
        printf("Enter the population of city %d: ", i + 1);
        scanf("%d", &population[i]);
        sum += population[i];

        // Initialize max and min with the first city's population
        if (i == 0) {
            max = min = population[i];
        } else {
            if (population[i] > max) max = population[i];
            if (population[i] < min) min = population[i];
        }
    }

    mean = (float)sum / N;

    printf("Population in reverse order: ");
    for (i = N - 1; i >= 0; i--) {
        printf("%d ", population[i]);
    }
    printf("\n");

   printf("Maximum population: %d\n", max);
    printf("Minimum population: %d\n", min);
    printf("Avrage of  population: %.2f\n", mean);
   

    return 0;
}
