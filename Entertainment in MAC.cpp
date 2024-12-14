#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s1, s2;
        int t;

        cin >> t >> s1;

        // Reverse the string
        s2 = string(s1.rbegin(), s1.rend());

        // Concatenate the original string with its reverse
        string s3 = s1 + s2;

        if (t == 2)
            cout << s3 << "\n";
        else
            cout << s1 << "\n";
    }

    return 0;
}
