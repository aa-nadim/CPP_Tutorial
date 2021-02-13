///                      BISMILLAHIR RAHMANIR RAHEEM
///                  ||\  ||    /\    |''\   ||  ||\  /||
///                  || \ ||   /__\   |   |  ||  || \/ ||
///                  ||  \||  /    \  |../   ||  ||    ||
#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n,count=0,t=0;cin>>n;
    while(n/2!=0){
        v.push_back(n%2);
        n/=2;
    }
    v.push_back(n%2);
    for(int i=0;i<v.size();i++) {       //cout<<v[i]<<"\t";
        if(v[i]==1) count++;
        else {
            t=max(t,count);
            count=0;
        }
    }t=max(t,count);
    cout<<t<<endl;
    return 0;
}


///...........Alhamdulillah.........///





