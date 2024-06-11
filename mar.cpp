#include<iostream>

using namespace std;

class Student
{
    protected :
    string name;
    int roll_no , math , sci ,eng;

    public :

    void getData()
    {
        cout <<"Student Name :";
        cin >> name;
        cout <<"Student Roll Number :";
        cin >> roll_no;
        cout <<"Enter Maths Marks :";
        cin >> math;
        cout <<"Enter Science Marks :";
        cin >> sci;
        cout <<"Enter eng Marks :";
        cin >> eng;

    }
};

class Result : protected Student 
{
    int total;
    double per;

    public :

    void setData()
    {
        getData();
        total = math + sci + eng;
        per = total / 3 ;

        cout <<"Total Marks : " << total << endl;
        cout <<"Percentage : " << per << endl;

        cout << endl << "Name\t" << "Rollno.\t" << "Maths\t" << "Science\t" << "eng\t" << "Total\t" << "Percen\t" << endl;
        cout << endl << name << "\t"<< roll_no << "\t"<< math << "\t"<< sci << "\t"<< eng << "\t"<< total << "\t"<< per << "\t" << endl;
    }    
};

int main()
{
    Result result;

    result.setData();
}