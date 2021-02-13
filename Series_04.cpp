///1+(2+3)+(4+5+6)+.....+nth term

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j,k,sum=0;cin>>n;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            k=1;
            cout<<k<" ";
            k++;
            //sum=sum+k;
        }
    }cout<<sum<<endl;


    return 0;
}

