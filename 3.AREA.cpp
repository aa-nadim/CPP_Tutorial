#include <iostream>
using namespace std;
class Area
{
public:
    int x,y;
    void getdata()
 	{
   	    cout << "\nEnter value of x and y:\n"; cin >> x >> y;
 	}
};
class Rectangle : public Area
{
    public:
 	void Rec_area()
 	{
 	    cout << "\nArea of the Rectangle X*Y= " << x * y;
 	}
};
class Square : public Area
{
    public:
 	void Squ_area()
 	{
 	    cout << "\nArea of the Squre X*X= " << x * x;
 	}
};
class Circle : public Area
{
    public:
 	void Cir_area()
 	{
 	    cout << "\nArea of the Cirle pi*x*x= " << 3.1416*x*x;
 	}
};
class Triangle : public Area
{
    public:
 	void Tri_area()
 	{
 	    cout << "\nArea of Triangle .5*X*Y= " << .5*x * y;
 	}
};
int main ()
{
    Rectangle obj1;
    Square obj2;
    Circle obj3;
    Triangle obj4;
    obj1.getdata();
    obj1.Rec_area();
    obj2.getdata();
    obj2.Squ_area();
    obj3.getdata();
    obj3.Cir_area();
    obj4.getdata();
    obj4.Tri_area();
}

