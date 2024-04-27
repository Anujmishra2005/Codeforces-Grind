#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void flash()
{
    int a;
    cin >> a;
    vector <int> v(a);
    int arr = 0;
    map <int,int> mp;
    for (auto &i:v)
    {
        cin >> i;
        mp[i]++;
        if (mp[i]==2)
        {
            arr++;
        }
    }
    cout << arr << "\n";
}

int main()
{
    int b;
    cin >> b;
    while (b--)
    {
       flash();
    }
    return 0;
}
