#include<bits/stdc++.h>

using namespace std;

typedef pair<int,int> PAIR;

int main(){

    vector<int> V (3,-1);
    for(int i = 0;i <V.size();i++){
        cout << V[i] << " ";
    }
    cout << endl << endl;

    V.push_back(4);
    //iterator
    vector<int> :: iterator it;
    for(it=V.begin();it!=V.end();it++){
        cout << *it << " ";
    }
    cout << endl << endl;
    //'auto' Register in range based traversal

    for(auto element: V){
        cout<< element << " ";
    }
    cout << endl << endl;
    // auto register in place of iterator
    for(auto it=V.begin();it!=V.end();it++){
        cout << *it << " ";
    }

    cout << endl << endl;


    priority_queue<PAIR, vector<PAIR>> PQ;
    PQ.push(make_pair(1,9));
    PQ.push(make_pair(6,2));
    PQ.push(make_pair(4,1));

    while(!PQ.empty()){
        cout << PQ.top().first << "|" << PQ.top().second << endl;
        PQ.pop();
    }


    cout << endl << endl;
    return 0;
}