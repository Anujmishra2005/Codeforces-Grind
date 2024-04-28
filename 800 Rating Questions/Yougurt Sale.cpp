#include<iostream>
#include<bits/stdc++.h>
using namespace std;

using ll = signed long long int;

void mantra()
{
    ll n,a,c;
    cin >> n >> a >> c;
    ll min = n*a;
    if (c < 2*a)
    {
        min = (n/2)*c + (n%2)*a;
    }
    cout << min << "\n";
}

int main ()
{
    int b;
    cin >> b;
    while (b--)
    {
        mantra();
    }
}
