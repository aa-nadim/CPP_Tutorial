///problem 1.code..
#include<iostream>
using namespace std;

class Result
{
    char stu_name[30];
    char stu_id[10];
    int first_s_completecredit;
    double first_s_gpa;
    int second_s_completecredit;
    double second_s_gpa;;
    int third_s_completecredit;
    double third_s_gpa;
    double CGPA;
public:
    void set();
    void show();
};
void Result::set()
{
    cout<<"Enter student Name ............";cin>>stu_name;
    cout<<"Enter student ID ..............";cin>>stu_id;
    cout<<"Enter 1st semi complete credit.";cin>>first_s_completecredit;
    cout<<"Enter 1st semi gpa.............";cin>>first_s_gpa;
    cout<<"Enter 2nd semi complete credit.";cin>>second_s_completecredit;
    cout<<"Enter 2nd semi gpa.............";cin>>second_s_gpa;
    cout<<"Enter 1st semi complete credit.";cin>>third_s_completecredit;
    cout<<"Enter 1st semi gpa.............";cin>>third_s_gpa;
    CGPA=(first_s_gpa+second_s_gpa+third_s_gpa)/3;
}
void Result::show()
{
    cout<<"STUDENT NAME........: "<<stu_name<<endl;
    cout<<"STUDE ID............: "<<stu_id<<endl;
    cout<<"1st S_credit........: "<<first_s_completecredit<<endl;
    cout<<"1st s_gpa...........: "<<first_s_gpa<<endl;;
    cout<<"2nd S_credit........: "<<second_s_completecredit<<endl;
    cout<<"2nd s_gpa...........: "<<second_s_gpa<<endl;
    cout<<"3rd S_credit........: "<<third_s_completecredit<<endl;
    cout<<"3rd s_gpa...........: "<<third_s_gpa<<endl;
    cout<<"C.G.P.A.............: "<<CGPA<<endl<<endl;
}

int main()
{
    int i;
    Result ST[5];
    for(i=0;i<2;i++)
    {
        ST[i].set();
        ST[i].show();
    }
    return 0;
}
