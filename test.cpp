#include<iostream>
using namespace std;
class test
{
    private:
    int testcode;
    char description[10];
    int nocandidate;
    int centerread;
    int calcnter(int nocandidate);

    public:
    void schedule();
    void disptest();
};
int test::calcnter(int nocandidate)
{
    int centerread= nocandidate/100+1;
    return centerread;

}
void test::schedule()
{
    cout<<"enter test code:";
    cin>>testcode;
    cout<<"enter description:";
    cin>>description;
    cout<<"enter no of candidate:";
    cin>>nocandidate;
 
}

void test::disptest()
{
    cout<<"test code:"<<testcode<<endl;
    cout<<"description:"<<description<<endl;
    cout<<"no of candidate:"<<nocandidate<<endl;
 
    cout<<"center read:"<<calcnter(nocandidate);

}
int main()
{
    test t1;
    t1.schedule();
    t1.disptest();
    return 0;
}