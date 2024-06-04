#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a,w=b,h=c;
    }


int getvolume()
{
    return l*w*h;
}
box operator-(box &n)
{
    box t;
    t.l=l-n.l;
    t.w=l-n.w;
    t.h=l-n.h;
    return t;
}
};
int main()
{
    box a,b,c;
    a.setdata(3,3,3);
    b.setdata(2,2,2);
    cout<<"volume of A is:"<<a.getvolume()<<endl;
    cout<<"volume of B is:"<<b.getvolume()<<endl;
    c=a-b;
     cout<<"volume of C is:"<<c.getvolume()<<endl;
}