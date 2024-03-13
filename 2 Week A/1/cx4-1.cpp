// // cs4-1.cpp
// // Code Example 4-1 : Patient Waiting Times

// # include <iostream>

// using namespace std;

// // Somehow, the type "Time" gets defined up here : 어찌 되었든 "Time" type이 여기 정의 되어야 한다.

// int main()
// {
//     int numberOfVisits(0), totalWaitingTime(0);
//     char answer;
//     do {
//         Time arrival, seenByDoctor;
//         cout << "도착 시간을 기입해주세요.";
//         cin >> arrival;
//         cout << "의사와 만난 시간을 기입해주세요.";
//         cin >> seenByDoctor;
//         numberOfVisit++;
        
//         // int Type으로 한 시간에서 다른 시간을 빼 둘의 차이를 구하라

//         totalWaitingTime += seenByDoctor - arrival;

//         cout << "끝났습니까? 계속 하실 경우 'y'를 입력해주세요. 종료하실 경우 다른 키를 입력해주세요.";
//         cin >> answer;
//     } while (answer != 'y');
//     cout << "방문 고객 숫자 : " << numberOfVisits << "\n";
//     cout << "총 대기시간 : " << totalWaitingTime << "\n";
//     cout << "평균 대기 시간은 " << totalWaitingTime/numberOfVisits << " 분 입니다.\n";
//     return 0;

// }