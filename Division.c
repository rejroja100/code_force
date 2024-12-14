#include<stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {

        int x;
        scanf("%d", &x);

        if( x <= 1399) printf("Division 4\n");
        else if(1400 <= x && x <= 1599) printf("Division 3\n");
        else if(1600 <= x && x <= 1899) printf("Division 2\n");
        else printf("Division 1\n");


    }

    return 0;
}


