/*

5개의 정수들의 최댓값과 최솟값을 구하는 프로그램을 작성하라.

*/

#include<iostream>
using namespace std;

int main() {
    int numbers[5];

    for(int num=0; num<5; num++)
        cin>>numbers[num];

    int max = numbers[0];

    for(int num=0; num<5; num++)
        if(max < numbers[num])
            max = numbers[num];

    int min = numbers[0];

    for(int num=0; num<5; num++)
        if(min > numbers[num])
            min = numbers[num];
    
    cout<<max<<endl;
    cout<<min<<endl;

    return 0;
}