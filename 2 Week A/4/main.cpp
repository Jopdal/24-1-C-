#include <iostream>

using namespace std;

class Time {
// Time class에 대한 ADT

// 특징 :
// Time은 시각와 분의 구성으로 이루어져 있고, AM과 PM으로 구분됩니다.
// 자정은 12:00 AM이고 정오는 12:00 PM입니다.
// 모든 시간은 같은 날에 이루어 집니다
public:
    void readTime(bool & errorFlag);
    int subtractTimes(Time t);
private:
    int minutes;
};

// readTime에 대한 ADT

// 표준적인 입력은 사용 가능한 문자여야한다.
// 공백 문자열은 무시된다.
// 입력된 시간은 다음의 형식을 만족해야 한다. <HH>:<MM><A>, 1=< <HH> =< 12의 정수, 1=< <MM> =<59, <A>는 AM 혹은 PM
// 입력된 시간이 형식에 맞으면 errorFlag는 Falserk 된다.

// subtractTime의 대한 ADT
// int subtractTimes(Time t)
// Pre; 이 시간에 대한 변수는 적절한 값을 가져야 한다.
// Return; 두 시간 사이의 차이를 반환한다. 만약 Time t보다 Time이 선행이면. 음수를 반환한다.

int main()
{
    int numberOfVisit(0), totalWaitingTime(0);
    char answer;
    do{
        bool errorFlag;
        Time arrival,seenByDoctor;
        cout << "도착 시간을 기입해주세요 : ";
        arrival.readTime(errorFlag);
    while(errorFlag){
        cout << "시간 입력의 형식이 맞지 않습니다. 다시 입력해주세요. : ";
        arrival.readTime(errorFlag);
    }
    cout << "의사를 만난 시간을 적어주세요";
    seenByDoctor.readTime(errorFlag);
    while(errorFlag){
        cout << "시간 입력의 형식이 맞지 않습니다. 다시 입력해주세요 : ";
        seenByDoctor.readTime(errorFlag);
    }
    numberOfVisit++;
    totalWaitingTime += seenByDoctor.subtractTimes(arrival);
    cout << "끝났습니까? 계속 하실려면 'y'를 누르시고, 아니라면 다른 키를 눌러주세요. ";
    cin >> answer;
    } while (answer != 'y');
    cout << "총 방문 손님은 " << numberOfVisit << "\n";
    cout << "총 대기 시간은 " << totalWaitingTime << " 분\n";
    cout << "평균 대기 시간은" << totalWaitingTime/numberOfVisit << " 분\n";
    
    return 0;
    
}

void Time::readTime(bool & errorFlag)
{
    enum AM_PM {AM, PM} AM_or_PM;
    int hour, minute;
    const char delimiter = ':';

    errorFlag = true;

    if(!(cin >> hour))
        return;
    if (hour<0||hour>12)
        return;
    char c;
    cin >> c;

    if (!(cin >> minute))
        return;
    if (minute<0||minute>59)
        return;

    cin >> c;
    if (c=='A'||c=='a')
        AM_or_PM = AM;
    else if (c=='P'||c=='p')
        AM_or_PM = PM;
    else
        return;
        
    cin >> c;
    if (c != 'M' && c != 'm')
        return;

    errorFlag = false;
    if (hour == 12)
        minutes=minute;
    else
        minutes = hour+60 + minute;
    if (AM_or_PM == PM)
        minutes += 60*12;
}

int Time::subtractTimes(Time t)
{
    return minutes - t.minutes;
}