/*
수호는 30분 전으로 돌아가고 싶은 1人 이다.

공백을 기준으로 시간과 분이 주어진다.

그러면 이 시간을 기준으로 30분전의 시간을 출력하시오.

예)

12 35  =====> 12 5

12 0 ======> 11 30

11 5 ======> 10 35
*/

#include<iostream>
using namespace std;

int main() {
    int hour{};
    int minute{};
    cin >> hour >> minute;

    minute -= 30;

    if(minute < 0){
        minute = 60 + minute;
        hour -= 1;
        if(hour < 0)
            hour = 23;
    }

    cout<<hour<<" "<<minute<<endl;

    return 0;
}