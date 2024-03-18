#include <iostream>

using namespace std;
int twoRaisedTo(int n);
int facto(int n);



int main()
{
    int n;
    cout << "n을 입력하세요. ";
    cout << " ";
    cin >> n;
    cout << facto(n) << endl;
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