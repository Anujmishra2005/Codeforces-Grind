#include<bits/stdc++.h>
using namespace std;
void display(vector<int>v1)
{
    int size;
    cout << "Enter the Size of Vector" << endl;
    cin >> size;
    for(int i=0; i<size;i++)
    {
        cout << v1[i] << " ";
    }
}

int main()
{
    vector<int>vec1;
    int size;
    cout << "Enter the Size of Vector" << endl;
    cin >> size;
    for(int i = 0 ; i < size ; i++)
    {
        int element;
        cout << "Enter the Elements of Vectors: ";
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);
}




