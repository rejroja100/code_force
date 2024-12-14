#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }

        vector<int> b;
        for(int i = 0; i < n ; i++){
            if(a[i] < 10){
                b.push_back(a[i]);
            }
            else if(a[i] >= 10){
                b.push_back(a[i] / 10);
                b.push_back(a[i] % 10);
            }
        }

        int flag = 0;
        for(int i = 0; i < b.size() - 1 && flag == 0; i++){
            if(b[i] > b[i + 1]) flag = 1;
        }

        if(flag) cout << "NO" << "\n";
        else cout << "YES" << "\n";
    }
    return 0;
}
