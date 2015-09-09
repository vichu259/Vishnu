#include <iostream>
using namespace std;
int main(){
  float bal = 0.00;
  int withdraw;
  cin >> withdraw;
  cin >> bal;
  if(withdraw%5 == 0 && bal >= (withdraw+0.50)){
    bal = bal - withdraw - 0.50;
  }

  printf("%0.2f\n",bal);
  return 0;
}
