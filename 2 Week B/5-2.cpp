#include <iostream>

using namespace std;
int binarySearch(int a[], int n, int target);

int main()
{

}
int binarySearch(int a[], int n, int target)
{
    //Precondition : 배열은 a[0]부터 a[n-1] 순서대로 정렬되어 있어야 한다.
    int first(0);
    int last(n-1);
    int mid;
    while (first <= last)
    {
        mid=(first+last)/2;
        if (target==a[mid])
            return mid; // mid값이 키값인 경우
        else if (target < a[mid])
            last = mid-1;
        else
            first = mid+1;
    }
    return -1;
}