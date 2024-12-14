#include<iostream>
#include<math.h>
using namespace std;

int main()
{
    int n;
    cin>> n;

    while(n--){

        int num, sum = 1;
        cin >> num;

        while(sum*2 <= num){
            sum *= 2;
        }

        //int result = pow(2, sum);

        cout << sum << "\n";

    }

    return 0;
}

