#include <iostream>

using namespace std;

int maxSelection(int a[], int n);
int fillAway(int a[], int n);


int main
{

}

int fillAway(int a[], int n)
{
    int n;
    cout << "몇개의 값을 넣겠습니까?";
    cin >> n;
    for (i=0, i<n, i++)
    {
        int input;
        cout << "넣을 값을 입력해주세요";
        cin >> input;
        a[i] = a[input]
    }
}

int maxSelection(int a[], int n)
{
    int maxPos(0), currentPos(1);
    while (currentPos < n)
    {
        if (a[currentPos] > a[maxPos])
            maxPos = currentPos;
        currentPos++;
    }
    return maxPos;
}