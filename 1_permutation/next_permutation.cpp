#include <cstdio>
#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;


void printV(vector<int> &v){
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

int main(){
    // next_permutation은 오름차순의 배열을 기반으로 순열을 만들어준다.
    // 1, 2, 3부터 오름차순으로 순열을 뽑습니다.
    vector<int> v = {1, 2, 3, 200, 100};
    sort(v.begin(), v.end());

    do{
        printV(v);
    }while (next_permutation(v.begin(), v.end()));
    return 0;
}