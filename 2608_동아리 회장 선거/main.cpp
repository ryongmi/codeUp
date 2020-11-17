/*

정보 동아리 회장을 선출하려고 한다.

올해는 단일 후보만 등록하여 찬반 투표를 실시하였다.

n명의 학생이 O, X로 의사 표현을 한다면 나올 수 있는 경우를 모두 출력하시오.

*/

#include<iostream>
#include<cmath>
#include<bitset>
#include<string>
using namespace std;

int main() {
    int n;
    cin>>n;

    for(int i=0; i<pow(2, n); i++) {
        string s_bit = bitset<8>(i).to_string();
        for(int j=8-n; j<8; j++) {
            if(s_bit.at(j)=='1')
                cout<<'X';
            else
                cout<<'O';
        }
        cout<<endl;
    }

    return 0;
}