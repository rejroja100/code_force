#include <iostream>
#include <string>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        string s;
        cin >> s;

        int map_count = 0;
        int pie_count = 0;
        int mapie_count = 0;

        // Count occurrences of "map", "pie", and "mapie"
        for (int i = 0; i < n - 2; i++) {
            if (s.substr(i, 3) == "map") {
                map_count++;
            }

            if (s.substr(i, 3) == "pie") {
                pie_count++;
            }

            if (s.substr(i, 5) == "mapie") {
                mapie_count++;
            }
        }

        // Calculate and print the result
        cout << map_count + pie_count - mapie_count << endl;
    }

    return 0;
}
