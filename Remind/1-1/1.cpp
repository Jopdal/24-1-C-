// 두 개의 주사위 값을 랜덤하게 뽑아주는 코드를 다양하게 알아보자

// Randomize을 이용하는 방법

#include <stdlib.h>
#include <random>

using namespace std;

int main()
{
    int dice1, dice2, total;
    randomize();

    dice1 = random(6) + 1;
    dice2 = random(6) + 2;
    total = dice1 + dice2;
    cout << dice1 << dice2 << total << endl;


}