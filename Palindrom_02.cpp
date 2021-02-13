#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,num,sum,temp,i=1;cin>>T;
    while(T--){
        num=i;sum=0;
        while(num!=0){
            temp=num%10;
            sum=sum*10+temp;
            num=num/10;
        }
        if(i==sum)
            cout<<i<<" ";
        i++;
    }
    return 0;
}


