/*

마방진(magic square)이란 가로, 세로, 대각선의 합이 같은 사각형을 말한다.

홀수 n을 입력으로 받아 n*n 홀수 마방진을 만들어 보자.

만드는 방법은 여러가지 방법이 있지만, 아래와 같은 방법을 이용하여 구현해보자.

구현 방법:

1. 시작은 첫 행, 한 가운데 열에 1을 둔다.

2. 행을 감소, 열을 증가하면서 순차적으로 수를 넣어간다.

3. 행은 감소하므로 첫 행보다 작아지는 경우에는 마지막 행으로 넘어간다.

4. 열은 증가하므로 마지막 열보다 커지는 경우에는 첫 열로 넘어간다.

5. 넣은 수가 n의 배수이면 행만 증가한다. 열은 변화없음.

*/

#include <iostream>
#include <vector>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector <vector<int>> Mabangjin(n, vector <int>(n,0));
    // n*n 이중 벡터 0으로 초기화

    int row=0, col=n/2, Number=0;

    while (Number < n*n) {
        Number++;

        if(row<0)
            row=n-1;

        if(col>=n)
            col=0;

        Mabangjin[row][col] = Number;

        if((Number%n==0)){
            row++;
            continue;
        }
        
        row--;
        col++;
    } 

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++)
            cout<<Mabangjin[i][j]<<" ";
        cout<<endl;
    }

    return 0;
}