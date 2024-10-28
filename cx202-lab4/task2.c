#include <stdio.h>
int main() {
    int min;
    printf("Please Enter the number of minuts: ");
    scanf("%d", &min);
   
    int time[2][1] = {{0}, {0}};
	printf("stopwatch :Start\n");
    while (time[0][0] < min || (time[0][0] == min && time[1][0] == 0)) {

        printf("%02d : %02d\n", time[0][0], time[1][0]);
        time[1][0]++;
        
        if (time[1][0] == 60) {
            time[1][0] = 0;
            time[0][0]++;
        }
    }
	printf("stopwatch :Stop\n");
    return 0;
}

