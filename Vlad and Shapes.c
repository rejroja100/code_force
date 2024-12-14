#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int a;
        scanf("%d", &a);
        int num[a][a];
        int rowCount[a];
        int colCount[a];

        for (int i = 0; i < a; i++) {
            rowCount[i] = 0;
            colCount[i] = 0;

            for (int j = 0; j < a; j++) {
                scanf("%d", &num[i][j]);
                if (num[i][j] == 1) {
                    rowCount[i]++;
                    colCount[j]++;
                }
            }
        }

        int squareFlag = 1;
        int triangleFlag = 1;

        for (int i = 0; i < a; i++) {
            if (rowCount[i] != a) {
                squareFlag = 0;
                break;
            }
            if (colCount[i] != a) {
                triangleFlag = 0;
                break;
            }
        }

        if (squareFlag) {
            printf("SQUARE\n");
        } else if (triangleFlag) {
            printf("TRIANGLE\n");
        }
    }

    return 0;
}
