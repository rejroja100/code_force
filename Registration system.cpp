#include<iostream>
#include<map>
using namespace std;

int main()
{
    int n;
    cin>> n;

    map< string, int> cnt;

    while(n--){

        string s;
        cin>> s;

        int previously_occure = cnt[s];
        cnt[s]++;

        if(cnt[s] == 1) cout << "OK\n";
        else cout<< s << previously_occure << "\n";


    }

    return 0;
}
