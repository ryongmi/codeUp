/*

큰 수를 표현할 때 자릿수를 쉽게 구분하기 위해 천단위 구분 기호인 콤마(,)를 사용한다.

어떤 수가 입력되면 천단위 구분 기호를 넣어 그 수를 다시 출력하는 프로그램을 작성하시오.

*/

#include<iostream>
using namespace std;

int main() {
    int n, k;
    char Arr[201];

    cin>>n>>Arr;

    for(int i=0; i<n; i++){
        if(n%3!=0 || i!=0)
            if(i%3==n%3)
                cout<<",";
        cout<<Arr[i];
    }

    return 0;
}