#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> a;
    a.push_back("abc");
    a.push_back("xyz");
    cout<<a[0];
    cout<<a[1];
    a.clear();
    cout<<a[0];
    int check = a.empty();
    cout<<check;
    return 0;
}