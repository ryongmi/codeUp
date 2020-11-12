/*

주영이는 사다리 게임을 좋아한다.

그는 긴 사다리도 쉽게 결과를 알 수 있게 사다리 타기 게임의 결과를 구하는 프로그램을 작성하려고 한다.

주영이를 도와주는 프로그램을 만들자.

프로그램은 다음과 같이 진행된다.

1. 세로 선의 개수 k와 한 선과 다른 선을 연결하는 선의 개수 n이 입력된다. (단, 2 <= k<=100, 0 <= n <= 100,000)

2. n+1줄까지 두 개의 선 번호가 입력된다. 이는 두 선이 연결되었다는 뜻이다. 두 선의 번호는 1 차이다. 단, 선의 순서는 입력 순서다.

(1 2후 2 3이 입력되었을 경우 1에서 시작하면 1-2가 먼저이니 2로 이동한 후 2-3이 다음이니 3으로 다시 이동한다.)

3. 시작 선의 번호가 주어진다.

*/

#include<iostream>
using namespace std;

int main() {
    int n, k;
    cin >> k >> n;
    int numbers[n][2];

    for(int i=0; i<n; i++)
        cin>> numbers[i][0] >> numbers[i][1];
    
    int p;
    cin>> p;

    for(int i=0; i<n; i++){
        if(numbers[i][0] == p)
            p = numbers[i][1];
        else if(numbers[i][1] == p)
            p = numbers[i][0];
    }
    cout<<p;

    return 0;
}