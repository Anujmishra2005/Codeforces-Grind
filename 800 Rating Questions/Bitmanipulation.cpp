#include<bits/stdc++.h>
using namespace std;

string convert2Binary(int n)            // Time Complexity == log2 n
{                                       // Space Complexity == log2 n
    string res = "";
    while (n!=1)
    {
        if(n%2 == 1) res +='1';
        else res+='0';
        n = n/2;
    }
    reverse(res);
return res;
}

int main()
{
    convert2Binary(n);
}

int convert2Decimal(string x)
{
    int len = x.length;

}
