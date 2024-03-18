#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int maxSelect(int a[], int n);
void swapElements(int a[], int maxPos, int last);
void selectionSort(int a[], int n);
void randomFillArray(int a[], int n);

int main()
{
    int n;
    cout << "입력하신 크기만큼 랜덤한 값으로 배열을 채웁니다.\n";
    cin >> n;
    int a[n];
    randomFillArray(a, n);
    selectionSort(a,n);
    cout << "정렬된 배열:\n";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
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

void selectionSort(int a[], int n)
{
    int last(n-1); // 중요! last 변수는 인덱스의 역할이다. 크기인 n과 헷갈려 (n-1)이라 초기화 하면 안된다!
    int maxPos;
    while (last>0) // 중요! 0을 포함하게 되면 1개가 남았어도 동작하게 된다. 비교는 2개가 있어야 가능하기 때문에 0을 포함하면 안된다!
    {
        maxPos = maxSelect(a,last+1); // 중요! 여기서 last는 크기의 용도이므로 +1을 해야 한다.
        swapElements(a,maxPos,last);
        last--;
    }
}

void swapElements(int a[], int maxPos, int last)
{
    int temp = a[maxPos];
    a[maxPos] = a[last];
    a[last] = temp;
}

void randomFillArray(int a[], int n)
{
    srand((int)time(0));
    for (int i=0; i<n; i++)
    {
        a[i]=rand() %100;
    }
    cout << "랜덤으로 채운 배열";
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
}
