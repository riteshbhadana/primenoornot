#include<iostream>
#include<math.h>
using namespace std;
int main (){
   int reverse(int x){
      int ans =0;
      while(x){
         int digit =x%10;
         if((ans > INT_MAXI10)||(ans<INT_MINI10))
         return 0;
         ans=ans*10+digit;
         x/=10;
      }
      return ans;
   }
}