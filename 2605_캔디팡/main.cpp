/*

최근 캔디팡이라는 스마트폰 게임이 인기를 끌고 있다.
캔디팡은 7 * 7 모양의 격자 판에 같은 색깔이 연속 3개 이상인 부분을 찾아 터치하면 터지면서 점수를 얻는 게임이다.
이때 연속된 부분은 상, 하, 좌, 우만 판단한다.

캔디팡 격자판(7 * 7)의 색깔 정보(1~5)가 입력된다.
※ 색깔정보
빨강 = 1 , 노랑 = 2 , 파랑 = 3 , 초록 = 4 , 보라 = 5

*/

#include <iostream>
using namespace std;

int grid[7][7];

int check_map(int i, int j, int number)
{

    if ((0 <= i <= 7) && (0 <= j <= 7))
    {
        if (grid[i][j] == number)
        {
            grid[i][j] = 0;
            return 1 + check_map((i - 1), j, number) + check_map((i + 1), j, number) + check_map(i, (j - 1), number) + check_map(i, (j + 1), number);
        }
        else
            return 0;
    }
    else
        return 0;
}

int main()
{
    int check_block{0};

    for (int i = 0; i < 7; i++)
        for (int j = 0; j < 7; j++)
            cin >> grid[i][j];

    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if (grid[i][j] != 0)
                if (check_map(i, j, grid[i][j]) >= 3)
                    check_block++;
        }
    }

    cout << check_block;

    return 0;
}