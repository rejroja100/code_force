#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    int n;
    cin>> n;

    while(n--){

        string s1;
        string s2;
        int t;

        cin >> t >> s1;
        s2 = strrev(s1);
        string s3 = strcat(s1, s2);

        if(t == 2) cout << s3 << "\n";
        else cout << s1 << "\n";


    }

    return 0;
}


