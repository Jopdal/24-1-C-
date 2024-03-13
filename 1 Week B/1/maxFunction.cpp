#include <iostream>
#include <algorithm>

using namespace std;

int max (int a[], int n); // max 함수 정의

int main()
{
    int a[100], i;
    cout << "Max driver\n";
    cout << "Enter each input to max terminated by -9999\n";
    cout << "Length of input must be <= 100\n";

    for (i=0; i<100; i++)
    {
        int val;
        cin >> val;
        if (val == -9999)
            break;
        else 
            a[i] = val;
    }

    cout << "\nMax is " << max(a, i) << '\n';
    cout << "\n\n";
    return 0;
}