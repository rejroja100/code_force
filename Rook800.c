#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    while(t--) {
        char col;
        int row;
        scanf(" %c%d", &col, &row);  // Added space before %c to consume any leading whitespace

        // Print all possible moves for the given row
        for(int i = 'a'; i <= 'h'; i++) {
            if(i != col) {
                printf("%c%d\n", i, row);
            }
        }

        // Print all possible moves for the given column
        for(int i = 1; i <= 8; i++) {
            if(i != row) {
                printf("%c%d\n", col, i);
            }
        }
    }

    return 0;
}
