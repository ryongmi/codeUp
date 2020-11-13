/*

어떤 숫자가 입력되면 그 숫자가 몇 자릿수 숫자인지 알아내는 프로그램을 작성하시오.

*/

#include<iostream>
#include<cmath>
using namespace std;

int main() {
    unsigned int n;
    cin>>n;

    int count{0};
    int check{1};

    while (check != 0) {
        count++;
        check = n / pow(10,count);
    }

    cout<<count;

    return 0;
}