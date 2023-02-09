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
    int a[3] = {1, 2, 3};
    vector<int> v;

    for(int i = 0; i < 3; i++)v.push_back(a[i]);

    do{
        printV(v);
    }while (next_permutation(v.begin(), v.end()));

    cout << endl << endl;

    // prev_permutation은 내림차순의 배열을 기반으로 순열을 만들어준다.
    // 3, 2, 1부터 내림차순으로 순열을 뽑습니다.
    v.clear();

    for(int i = 2; i >= 0; i--)v.push_back(a[i]);

    do{
        printV(v);
    }while (prev_permutation(v.begin(), v.end()));

    return 0;
}