#include <iostream>
#include <string>
using namespace std;

int main() {
   // Complete the program
    string a, b;
    char x;
    cin >> a;
    cin >> b;
    printf("%d %d\n",(int)a.size(), (int)b.size());
    printf("%s\n", (a+b).c_str());
    x = a[0];
    a[0] = b[0];
    b[0] = x;
    printf("%s %s", a.c_str(), b.c_str());
    
  
    return 0;
}
