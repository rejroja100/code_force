#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        int temp = n - 1;

        int bridge = n*(n-1)/2;
        if(n == 2 && k == 1) cout << 1 << "\n";
        else if(temp > k) cout << n << "\n";
        else if(k == bridge) cout << 1 << "\n";
        else if(k > temp) cout << 1 << "\n";
    }
    return 0;
}
