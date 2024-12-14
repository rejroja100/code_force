#include<stdio.h>
#include<math.h>

int main()
{
    int t;
    scanf("%d", &t);

    while(t--) {
        int a, b;
        scanf("%d%d", &a, &b);

        int max = 0, min = 0;

        if(a > b) {
            max = a;
            min = b;
        }
        else if(a < b) {
            max = b;
            min = a;
        }

        if(a == b) {
            printf("%d\n", (2 * a) * (2 * a));
        }
        else if(max >= 2 * min) {
            printf("%d\n", max * max);
        }
        else {
            printf("%d\n", (2 * min) * (2 * min));
        }
    }

    return 0;
}
