#include <iostream>

using namespace std;
int maxSelect(int a[], int n);

int main()
{
    // main code
}

int maxSelect(int a[], int n)
{
    int maxPos(0), currentPos(1); // max와 current 선언 및 초기화
    while (currentPos<n)
    {
        if (a[currentPos] > a[maxPos])
            maxPos = currentPos;
        currentPos++;
    }
    return maxPos;
}