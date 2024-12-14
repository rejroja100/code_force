#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s1, s2;
        cin >> s1;

        if (s1[0] > s1[s1.length() - 1]) {
            reverse(s1.begin(), s1.end());
        }

        cout << s1 << endl;
    }

    return 0;
}
