#include<stdio.h>
int main()
{
    int num[4];

    for(int i = 0; i < 4; i++) scanf("%d", &num[i]);

    for(int i = 0; i < 3; i++) {
        for(int j = i + 1; j < 4; j++) {
            int temp = 0;
            if(num[i] > num[j]) {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
    }

            //for(int i = 0; i < 4; i++) printf("%d ", num[i]);

    if(num[0] + num[1] > num[2] || num[1] + num[2] > num[3]) printf("TRIANGLE\n");
    else if(num[0] + num[1] == num[2] || num[1] + num[2] == num[3]) printf("SEGMENT\n");

    else printf("IMPOSSIBLE\n");


    return 0;
}
