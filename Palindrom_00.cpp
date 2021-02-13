#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int num,temp,n,sum;
    cin>>num;
    n=num;
    sum=0;
    while(n!=0){
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    if(num==sum)
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;
    return 0;
}
