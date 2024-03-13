#include <iostream>
#include <random>

// 두 개의 주사위를 던져서 랜덤한 숫자를 반환하는 함수
int rollDice() {
    std::random_device rd;  // 랜덤 디바이스 생성
    std::mt19937 gen(rd()); // 메르센 트위스터 엔진 생성
    std::uniform_int_distribution<> dis(1, 6); // 주사위 범위: 1부터 6까지

    return dis(gen); // 랜덤한 주사위 결과 반환
}

int main() {
    // 첫 번째 주사위 던지기
    int firstDice = rollDice();
    std::cout << "첫 번째 주사위: " << firstDice << std::endl;

    // 두 번째 주사위 던지기
    int secondDice = rollDice();
    std::cout << "두 번째 주사위: " << secondDice << std::endl;

    return 0;
}
