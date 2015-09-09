#include <iostream>
using namespace std;
#define maxsize 70000

int main(){
    unsigned long int n , divisor , total=0;
    long int count=0;
    unsigned long int num;
    char buff[maxsize];
    scanf("%ld %ld \n",&n,&divisor);
    int blockread=0;
    num=0;  int k ;
    while((blockread = fread(buff,1,maxsize,stdin))>0){
      for(k=0;k<blockread;k++){
        if(buff[k]=='\n'){
            if(num%divisor==0){total++;}
            num=0;
            count++;
        }
        else{
          num = num*10 + (buff[k]-'0');}
          }
   }
    printf("%ld\n",total);
    return 0;
}
