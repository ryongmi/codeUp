/*

두 정수 a, b의 약수를 모두 출력하는 프로그램을 작성하시오.

*/

#include<iostream>
#include<vector>
#include<math.h>
#include<algorithm>
using namespace std;

int main() {
    int a, b;
    vector<int> numbers;
   
    cin>> a >> b;

    for(int i=1; i*i<=a; i++){
        if(a%i == 0){
            numbers.push_back(i);
            numbers.push_back(a/i);
        }
    }

    for(int i=1; i*i<=b; i++){
        if(b%i == 0){
            numbers.push_back(i);
            numbers.push_back(b/i);
        }
    }
    
    sort(numbers.begin(), numbers.end());
    // 정렬 알고리즘

    for(unsigned i=1; i<numbers.size(); i++) {
        if(numbers.at(i) == numbers.at(i-1)){
            numbers.erase(numbers.begin() + (i-1));
            i--;
        }
    }
    // 중복 제거 반복문

    for(auto v:numbers)
        cout<<v<<" ";

    return 0;
}