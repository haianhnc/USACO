#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
  int n,temp;
  int j = 9;
  vector<int> v;
  cin >> n;
  for(int i=0;i<n;i++){
    cin >> temp;
    v.push_back(temp);
  }
  sort(v.begin(), v.end());
  while(v.size() > 0){
    temp = v[0];
    cout << temp << " ";
    v.erase(v.begin());
  }
    return 0;
}
