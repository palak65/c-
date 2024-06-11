#include<iostream>
using namespace std;
class base
{
   int a; //private
   protected:
   int b;
   public:
   int c;
};
class derived: protected base
{
   public:
   void hello()
   {
    base::b=3;
    base::c=33;
    cout<<"value of b is:"<<b<<endl;
    cout<<"value of c is:"<<c<<endl;
    cout<<"hello"<<endl;
   }
};
int main()
{
    derived d;
    d.hello();
}

