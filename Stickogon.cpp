#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int number;
        cin >> number;

        int arrayOfNumber[number], count[100] = {0}, rest = 0;

        for (int i = 0; i < number ; i++)
        {
            count[arrayOfNumber[i]];
        }

        if(number <= 2){
            cout << 0 << endl;
        }
        else{
            for (int i = 0; i < 100; i++)
            {
                if(count[i]  != 0){
                    rest++;
                }
            }
            
        }

            cout << rest << endl;
    }

    return 0;
}
