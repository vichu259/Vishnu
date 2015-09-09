#include <iostream>
using namespace std;

int main(){
  unsigned int n ,k;
  unsigned long int val;
  unsigned int total ,p;
  scanf("%u",&n);
  while(n--){
    scanf("%lu",&val);
    k=5;total=0;p=0;
    while((p=val/k)>0){
      //cout << "p :"<<p <<"\n";
      total = total + p;
      k*=5;
    }
    printf("%u\n",total);
  }
}
