
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T=1,num,sum,temp,i=1;
    while(T!=1000000000){
        num=i;sum=0;
        while(num!=0){
            temp=num%10;
            sum=sum*10+temp;
            num=num/10;
        }
        if(i==sum){
            cout<<i<<" ";
            T++;
        }i++;
    }
    return 0;
}


