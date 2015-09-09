#include <iostream>
using namespace std;

int main(){
  unsigned int n ,val;
  int out [200];int m=1;int l;
  scanf("%u",&n);
  while(n--){
        m=1;
        scanf("%u",&val);
        l =0;out[0]=1;
        while(val){
              int k;
              for(k=0;k<m;k++){
                out[k]=out[k]*val+l;
                l=out[k]/10;
                out[k]=out[k]%10;
              }
              while(l){
                out[k]=l%10;
                m++;k++;
                l=l/10;
              }
              val--;
        }
        int p=m;
        while(p>0){
         printf("%d",out[p-1]);
          p--;
        }
        printf("\n");
  }
  return 0;
}
