// Insertion Sort는 배열 앞 부분이 Sorted, 배열 뒷 부분이 Unsorted로 구성된다.
#include <iostream>

using namespace std;

void insertNextItem(int a[], int i);
void inisertionSort(int a[], int n);

int main()
{
    int n, num;

    cout << "정렬할 숫자의 개수를 입력해주세요 : ";
    cin >> n;

    int a[n];

    for (int i=0; i<n; i++)
    {
        cout << "정렬이 필요한 수를 입력해주세요 : ";
        cin >> num;
        a[i] = num;
    }
    
    inisertionSort(a, n);

    cout << "정렬된 수는 다음과 같습니다\n";
    for (int i=0; i<n; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}

void insertNextItem(int a[], int i) // insertNextItem은 뒤쪽 배열을 밀어주고 그 자리에 들어가는 함수이다.
{
// 선행조건 : 배열은 0부터 i-1 까지 정렬되어 있다.
int newItem(a[i]), insertPos(i);
for ( ; insertPos && newItem < a[insertPos-1]; insertPos--)
// Loop Invariant: newItem <= a[insertPos+1] .. a[i] &&
// a[insertPos+1] .. a[i] are sorted
a[insertPos] = a[insertPos-1];
a[insertPos] = newItem;
// 후행조건 : 배열은 0부터 i까지 정렬되어 있다.
}

void inisertionSort(int a[], int n)
{
    int i;
    for (i=1; i<n; i++)
        insertNextItem(a,i);
}

