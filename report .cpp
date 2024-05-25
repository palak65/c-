#include<iostream>

using namespace std;

class report
{
    private:
    int i;
    int adnoo;
    char name[20];
    float mnarks[5];
    float avg,total,per;
    GETAVG()
{
    for(i=0;i<5;i++)
    {
        total=total+mnarks[i];
        avg=total/5;
        per=avg*100/500;
        return avg;
        return per; 

    }
}
public:
void readinfo();
void display();
};
void report::readinfo()
{
    cout<<"Enter admission no: ";
    cin>>adnoo;
    cout<<"Enter name: ";
    cin>>name;
    for (i=0;i<5;i++)
    {
        cout<<"Enter marks: ";
        cin>>mnarks[i];
    }
    avg= GETAVG();
}

void report::display()
{
    cout<<"Admission no: "<<adnoo<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Marks: ";
    for(i=0;i<5;i++)
    {
        cout<<mnarks[i]<<" ";
    }
    cout<<endl;
    cout<<"Average: "<<avg<<endl;
    cout<<"Percentage: "<<per<<endl;
}

int main()
{
    report r;
    r.readinfo();
    r.display();
    return 0;
}