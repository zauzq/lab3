#include <iostream>
#include <string>

using namespace std;
int main()
{
    string s1,s2;
    int n , count = 0;
    count << "Enter the first text: ";
    cin >> s1;
    cout << "Enter the second text: ";
    cin >> s2;
    cout << "Enter N: ";
    cin >> n;
    while (count < n){
        if (count % 2 == 0)
        cout << s1 << " ";
        else
        cout << s2 << " ";
        count++;

    }
}