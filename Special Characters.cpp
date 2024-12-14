#include <string>
#include<iostream>

using namespace std;

string generateCyclicPattern(int n) {
    string result;
    for (int i = 0; i < n; ++i) {
        result += 'A' + (i % 26); // Cycle through the alphabet (A-Z)
    }
    return result;
}
int main()
{
    int n;
    cin >> n;
    while(n--){
        int t;
        cin >> t;
        if(t == 1) cout << "NO\n";
        else cout << generateCyclicPattern(t) << "\n";
    }

    return 0;
}
