#include <stdio.h>

int main() {
    int depth, rows, cols;
    int i, j, k;
    int max;

    printf("Enter depth of the 3D array: ");
    scanf("%d", &depth);

    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[depth][rows][cols];

    printf("Enter elements of the 3D array:\n");
    for(i = 0; i < depth; i++) {
        for(j = 0; j < rows; j++) {
            for(k = 0; k < cols; k++) {
                scanf("%d", &arr[i][j][k]);
            }
        }
    }

    max = arr[0][0][0];  // Initialize max with first element

    for(i = 0; i < depth; i++) {
        for(j = 0; j < rows; j++) {
            for(k = 0; k < cols; k++) {
                if(arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }

    printf("Maximum element in the 3D array = %d\n", max);

    return 0;
}

