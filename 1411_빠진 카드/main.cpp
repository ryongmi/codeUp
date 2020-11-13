/*

우리는 1부터 N까지의 숫자가 차례대로 적힌 N장의 카드 묶음을 가지고 있다.

그런 데 이 카드 묶음을 옮기는 중 실수로 땅에 떨어뜨려 그 중 한 장을 잃어버렸다.

여러 분은 땅에 떨어진 카드 묶음을 읽어서 빠진 하나의 카드 번호를 찾아 출력해야 한다.

*/

#include<iostream>
#include<vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<size_t>card;

    for(int i=0; i<n-1; i++){
        size_t k;
        cin>>k;
        card.push_back(k);
    }

    bool check{true};
    int pop_card{0};

    do{
        pop_card++;
        check = false;
        for(auto v:card)
            if(v == pop_card){
                check = true;
                continue;
            }
    }while(check);

    cout<<pop_card;

    return 0;
}