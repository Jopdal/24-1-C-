// 두 개의 주사위 값을 랜덤하게 뽑아주는 코드를 다양하게 알아보자

// srand를 이용하는 방법

#include <iostream>
#include <stdlib.h>

using namespace std;

int dice1, dice2, total;

int main()
{
    srand(time(0));
    dice1 = rand() % 6 + 1;
    dice2 = rand() % 6 + 1;
    total = dice1 + dice2;

    cout << dice1 << " " << dice2 << " " << total << endl;


}