#include<stdio.h>
int main()
{
    int na, nb, k, m;
    scanf("%d%d%d%d", &na, &nb, &k, &m);

    int a[na], b[nb];

    for(int i = 0; i < na; i++) scanf("%d", &a[i]);
    for(int i = 0; i < nb; i++) scanf("%d", &b[i]);

    if(a[k - 1] < b[nb - m]) printf("YES\n");
    else printf("NO\n");

    return 0;
}
