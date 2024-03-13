#include <iostream>
#include <stdlib.h>

using namespace std;

int dice_1, dice_2;

int roll()
{
    srand(time(0));
    dice_1 = rand() % 6 + 1;
    dice_2 = rand() % 6 + 1;
    return dice_1 + dice_2;
}

int die1()
{
    return dice_1;
}

int die2()
{
    return dice_2;
}

int main()
{
    cout << "주사위 값의 합은 다음과 같습니다." << roll() << endl;
    cout << "첫번 째 주사위는 " << dice_1 << "입니다." << endl;
    cout << "두번 째 주사위는 " << dice_2 << "입니다." << endl;
    return 0;
}