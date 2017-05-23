#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,rm,rm_first,rm_last,temp;
    int j = 9;
    vector<int> v;
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> temp;
        v.push_back(temp);
    }
    cin >> rm;
    cin >> rm_first;
    cin >> rm_last;
    v.erase(v.begin() + rm -1);
    v.erase(v.begin()+rm_first -1,v.begin()+rm_last -1);
    
    cout << v.size() << endl;
    while(v.size() > 0){
    temp = v[0];
    cout << temp << " ";
    v.erase(v.begin());
    }
    return 0;
}
