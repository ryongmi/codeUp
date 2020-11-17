/*

학교 앞 카페에서 아메리카노를 한 잔을 사면 쿠폰을 한 장 받을 수 있다.

이 쿠폰은 카페에서 요구하는 필요 개수(N)를 채우면 아메리카노 한잔으로 다시 교환 할 수 있다.

그런데 이 가게는 특이하게도 쿠폰을 모아 아메리카노로 교환할 때에도 쿠폰을 또 한 장 준다.

현재 영일이가 가진 쿠폰의 개수(K)와 카페에서 요구하는 필요 쿠폰 개수(N)가 입력되면, 최대한 먹을 수 있는 아메리카노의 개수를 계산하는 프로그램을 작성하시오.

*/

#include <iostream>
using namespace std;

int main()
{
    int k, n;
    cin >> k >> n;

    int coupon = k / n;
    int coupon_rest = k % n;
    int total{};

    total += coupon;
    do
    {
        int echo = coupon;
        coupon = (coupon + coupon_rest) / n;
        coupon_rest = (echo + coupon_rest) % n;
        total += coupon;
    } while (((coupon + coupon_rest) / n) > 0);

    cout << total;

    return 0;
}