/*

별 모양 도형 출력하기에 재미를 붙인 철수는 이번에는 조금 어려운 빗금 친 사각형을 만들어 보기로 했다.

n∗n 사각형에서 k간격 마다 빗금을 친 사각형을 출력하는 프로그램을 작성하시오.

*/

#include <iostream>
using namespace std;
int main() {
	int n, k;
	cin >> n >> k;
	
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            if(i==1 || i==n || j==1 || j==n)
                cout<<"*";
            else if(((i-1)+j) % k == 0)
                cout<<"*";
            else
                cout<<" ";
        }
        cout<<endl;
    }
}