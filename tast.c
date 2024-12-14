#include <stdio.h>

void solve() {
    int n;
    scanf("%d", &n);
    char s[n+1];
    scanf("%s", s);
    int ctL=0, ctO=0, netL=0, netO=0;
    for(int i = 0; i < n; i++) {
        if(s[i] == 'L')
            netL++;
        else
            netO++;
    }
    for(int i = 0; i < n-1; i++) {
        if(s[i] == 'L')
            ctL++;
        else
            ctO++;
        if(ctL != netL - ctL && ctO != netO - ctO) {
            printf("%d\n", i+1);
            return;
        }
    }
    printf("-1\n");
}

int main() {
    int TC = 1;
    //scanf("%d", &TC);
    while (TC--) solve();
    return 0;
}
