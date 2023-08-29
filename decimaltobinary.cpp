#include<iostream>
#include<math.h>
using namespace std;

int main(){
int n;
cin>>n;
int ans;

while(n!=0)
{
    int i=0;
    int bit= n&1;
      ans= bit*pow(10,i)+ans;
      n>>1;
      i++;
      return ans;
}
cout<<"answer is"<<ans<<endl;
}

