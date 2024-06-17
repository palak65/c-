#include<iostream>
using namespace std;

class bank
{
    int bal;
    string name;

    public:
    void setdata(int bal,string name)
    {
        this->bal=bal;
        this->name=name;
    }

    void getdata()
    {
        cout<<"your name:"<<name<<endl;
        cout<<"your balnce:"<<bal<<endl;
    }
};

int main()
{
    bank b;
    b.setdata(1000,"palak");
    b.getdata();
}