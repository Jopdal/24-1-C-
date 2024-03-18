#include <iostream>

using namespace std;

int linearSerach(int a[], int n, int target)
{
    for (int i=0; i<n; i++)
        if (a[i]==target) // Key comparison(키값 비교)
            return i;
    return -1; // 키값을 찾지 못했을 때
}

int main()
{

}