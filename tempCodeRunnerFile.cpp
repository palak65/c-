#include<iostream>

using namespace std;

int main()
{
    int n,i,total=0;
    cout<<"enter the num:";
    cin>>n;
    for(i=0;i<=n;i++)
    {
        if(i%2==0)
        total+=i;
        cout<<endl;
        }
        cout<<total;
        return 0;

    }
