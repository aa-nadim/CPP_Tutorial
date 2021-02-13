 #include<bits/stdc++.h>
 using namespace std;
 class Bookshop
 {
     public:
     string author,author1;
     string title,title1,publisher,publisher1;
     double price,stockPosition,neededBook;
 };


 int main()
 {
    Bookshop ob1,ob2;
    ob1.author="Abdur_Rahman";
    ob1.price=134;
    ob1.publisher="Lecture prokashoni";
    ob1.title="C++_Programming" ;
    ob1.stockPosition=3;
    cout<<"give the author name"<<endl;
    cin>>ob2.author1;
        cout<<"give the title name"<<endl;
    cin>>ob2.title1;

    if((ob1.author==ob2.author1) &&(ob1.title==ob2.title1))
    {
        cout<<ob1.author<<endl;
        cout<<ob1.publisher<<endl;
        cout<<ob1.price<<endl;
        cout<<ob1.title<<endl;
        cout<<ob1.stockPosition<<endl;
    }
    else
        cout<<"there has no book in this title "<<endl;
     ///
     cin>>ob1.neededBook;
     if
        (ob1.neededBook<=ob1.stockPosition)
     {
         cout<<"total_price "<<ob1.neededBook*ob1.price<<endl;
     }
     else
        cout<<"not available in this book"<<endl;

    return 0;

 }
