#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  int n;
  int arr[n];
  int temp;
  cin >> n;
  for(int i=0; i< n; i++){
    cin >> temp;
    arr[i] = temp;
  }
  for(int i=0; i < n; i++){
    printf("%d ",arr[n-1-i]);
  }
    return 0;
}
