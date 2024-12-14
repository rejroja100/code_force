#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a[10] = {1, 4, 5, 2, 9, 10, 3, 7, 6, 8};

    sort(a, a + 10);

    for(int i = 0; i < 10; i++) cout << a[i] << " ";

    return 0;

}
