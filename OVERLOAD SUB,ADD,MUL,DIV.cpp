///7.1 exercise code
#include<iostream>
using namespace std;

class FLOAT
{
    float f;
public:
    void set(float x){f=x;}
    void show();
    FLOAT operator+(FLOAT ob)
    {
        FLOAT tmp;
        tmp.f=f+ob.f;
        return tmp;
    }
    FLOAT operator-(FLOAT ob)
    {
        FLOAT tmp;
        tmp.f=f-ob.f;
        return tmp;
    }
    FLOAT operator*(FLOAT ob)
    {
        FLOAT tmp;
        tmp.f=f*ob.f;
        return tmp;
    }
    FLOAT operator/(FLOAT ob)
    {
        FLOAT tmp;
        tmp.f=f/ob.f;
        return tmp;
    }
};
void FLOAT::show()
{
    cout<<"f = "<<f<<endl;
}

int main()
{
    FLOAT ob1,ob2,ob3;
    ob1.set(10);
    ob2.set(5);
    ob1.show();
    ob2.show();
    cout<<"' + ' overloaded.."<<endl;
    ob3=ob1+ob2;
    ob3.show();
    cout<<"'- ' overloaded.."<<endl;
    ob3=ob1-ob2;
    ob3.show();
    cout<<"'* ' overloaded.."<<endl;
    ob3=ob1*ob2;
    ob3.show();
    cout<<"'/ ' overloaded.."<<endl;
    ob3=ob1/ob2;
    ob3.show();

    return 0;
}
