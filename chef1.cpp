#include <iostream>

int main(){
  using namespace std;
    int numInputs ;
    cin >> numInputs;
    char a[11],b[11];
    int out = 1,q=0;
    while(numInputs--){
      cin >> a;
      cin >> b;
      out =1 ;q=0;
      while(a[q]!='\0'){
        if(a[q]==b[q]||a[q]=='?'||b[q]=='?'){}
        else{out = 0 ;break;}
        q++;
      }
      if(out==1){cout<<"Yes\n";}
      else{cout<<"No\n";}
    }
    return 0;
}
