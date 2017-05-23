#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,q;
    int temp_size;
    int temp;
    int a,b;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> n >> q;
     vector<vector<int>> nvec;
    for(int i=0; i<n; i++){
       std::vector<int> array;
       cin >> temp_size;
        for(int j=0;j<temp_size;j++){
          cin >> temp;
          //  printf("%d",temp);
            array.push_back(temp);
        }
        nvec.push_back(array);
    }
    for(int k=0;k<q;k++){
        cin >> a >> b;
        printf("%d\n",nvec[a][b]);
        // cout << nvec[a][b];
    }
    return 0;
}
