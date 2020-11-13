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
        card.emplace_back(k);
        // emplace_back : push_back과 똑같은 연산을 하지만, push_back은 일반생성자, 복사생성자(이동생성자)를 호출하여 임시 객체를 만들어 복사를 하는데 오버헤드가 커지게 됨.
        // 하지만 emplace_back은 일반 생성자만 호출을하여 복사를 하여 성능이 더 좋음.
        // 아직 이 두가지의 차이를 완전히 알지를 못해 더 공부해야 할것 같음.
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