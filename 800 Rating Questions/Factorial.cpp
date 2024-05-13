// Factorial of a number

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if (n==0) return 1;

    int partialAns = factorial(n-1);
    return n*partialAns;
}

int main()
{
    int n;
    cin >> n;
    if (n < 0)
    {
        cout << "Error" << endl;
    }
    else
    {
        cout << factorial(n) << endl;
    }
    return 0;
}
