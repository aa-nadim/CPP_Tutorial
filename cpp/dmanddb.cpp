#include<iostream>
using namespace std;
class DB;
class DM
{
public:
    double distance; int meter; float centi;
    DM(){}
    void getdata(double a)
    {
        distance=a;
        meter=int(distance);
        centi=(distance-meter)*100;
    }
    void display()
    {
        cout<<"Distance "<<meter<<" meter and "<<centi<<"centimeter"<<endl;
    }
    double add(DM &,DB &);
};
class DB
{
public:
    double distance; int feet; float inches;
    DB() {}
    void getdata(double a)
    {
        distance=a;
        feet=int(distance);
        inches=(distance-feet)*12;
    }
    void display()
    {
        cout<<"Distance "<<feet<<" feet and "<<inches<<"inches"<<endl;
    }
    double add(DM &,DB &);
};
double DM:: add(DM &x,DB &y)
{
   y.distance=(y.distance*30.48)/100;
   distance=x.distance+y.distance;
    return distance;

}
double DB::add(DM& x,DB &y)
{
    x.distance=((x.distance*100)/30.48);
   distance=x.distance+y.distance;
   return distance;
}
int main()
{
    double x,y;
    DM a,c; DB b,d;
cout<<"Enter distance in meter and centimeter\n";
cin>>x;
a.getdata(x);
a.display();
cout<<"Enter distance in feet and inches\n";
cin>>y;
b.getdata(y);
b.display();
cout<<"Add distance in meter and centimeter\n";
float h=c.add(a,b);
c.getdata(h);
c.display();
cout<<"Add distance in feet and inches\n";
float k=d.add(a,b);
d.getdata(k);
d.display();
return 0;

}
