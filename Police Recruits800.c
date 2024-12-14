#include<stdio.h>
int main()
{
    int t, officer = 0, crime = 0, event;
    scanf("%d", &t);

    while(t--){

        scanf("%d", &event);

            if(event == -1){
                if(officer > 0) {
                    officer -= 1;
                }
                else {
                    crime++;
                }
            }
            else {
                officer += event;
            }
        }

    printf("%d\n", crime);


    return 0;
}
