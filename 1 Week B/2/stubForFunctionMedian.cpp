#include <iostream>

using namespace std;

int median (int a[], int n)
{
    // median 함수를 위한 stub이다
    cout << "function median with n = " << n << ", a[] =";
    int i;
    for (i=0; i<n; i++)
        cout << a[i] << '\t';
    cout << "\nType in value you want median to return:";
    int return_value;
    cin >> return_value;
    return return_value;
}