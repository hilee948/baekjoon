#include <iostream>
#include <math.h>
using namespace std;
int main() {
  int a,b;
  cin >> a >> b;
  int total=0;

  int ra = (int)sqrt(a);
  int rb = (int)sqrt(b);
  if (ra*ra == a) ;
  else ra = ra+1;
  
  if (ra >= rb) cout << "-1";
  else {
    for(int i=ra; i<=rb; i++){
      total += i*i;
    }
    cout << total<<endl;
    cout << ra*ra;
  }
  
}
