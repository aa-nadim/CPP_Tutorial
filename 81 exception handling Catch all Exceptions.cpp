#include<iostream>
using namespace std;

int main()
{
    try{
        int a;
        cin>>a;

        if(a==1) throw 1;
        if(a>1) throw 1.3;
        if(a<1) throw "Negative";
    }
    catch(int e)
    {
        cout<<"Exception integer "<<e<<endl;
    }
//    catch(double e)
//    {
//        cout<<"Exception double "<<e<<endl;
//    }
///kintu jodi aro onek onek condition thakto taile prottektar jonno
///catch block banate hoto kintu eta khubi kothin and time wasting
///kaj er chaite shohoj ekta upay ase ta holo shudhu ekta catch
///block deya jar argument er jaygay tinti dot thakbe. eita
///shobdhoroner type er exception kei catch korte pare.
    catch(...)
    {
        cout<<"Exception !"<<endl;
    }

    return 0;
}
