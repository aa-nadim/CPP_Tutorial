///.................................///
///...BISMILLAHIR RAHMANIR RAHEEM...///
///.................................///
#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>m;
    int n;cin>>n;
    long long num;
    string name;
    for(int i=0;i<n;i++){
        cin>>name;
        cin>>num;
        m[name]=num;
    }
    while(cin>>name){
        if(m.find(name)!=m.end()){
            cout<<name<<"="<<m.find(name)->second<<endl;
        }
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}

///...............Nadim.............///
///...........Alhamdulillah.........///



