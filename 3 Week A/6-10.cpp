#include <iostream>

using namespace std;

int twoRaisedTo(int n);
int facto(int n);
int combination(int n, int k);
void combInput(int n, int k);

int main()
{
    int n, k;
    combInput(n, k);
    combination(n,k);
}

int twoRaisedTo(int n) // 2page의 수식을 직역한 것 처럼 코딩을 한 것.
{
    if (n == 0) // 종단 조건
        return 1;
    else
        return 2 * twoRaisedTo(n-1); // 재귀하는 곳.
}

int facto(int n)
{
    if (n==0)
        return 1;

    else if (n==1)
        return 1;

    else
        return n * facto(n-1);
}

int combination(int n, int k)
{
    if (k>n)
    {
        cout << "잘못된 입력입니다." << endl;
        combInput(n, k);
    }

    if (k==1)
        return n;
    else if (n==k)
        return 1;
    else
        return combination(n-1, k-1) + combination(n-1, k);
}

void combInput(int n, int k)
{
    cout << "n과 k을 입력하세요. \n";
    cin >> n >> k;
}