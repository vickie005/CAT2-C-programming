#include <stdio.h>

int main() {
    // Declare and initialize the 2D array with 2 rows and 4 columns
    int scores[2][4] = {
        {65, 92, 84, 72},
        {35, 70, 59, 67}
    };

    // Printing the array (optional)
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", scores[i][j]);
        }
        printf("\n");
    }

    return 0;
}

