#include<iostream>

using namespace std;

class students
{
    private:
    int adno;
    int eng,maths,sci;
    char name[20];
    float total;
    float ctotal( float eng,float maths,float sci);

    public:
    void takedata();
    void showdata();
   

};

void students::takedata()
{
    cout<<"\nEnter the admission number: ";
    cin>>adno;
    cout<<"\nEnter the name: ";
    cin>>name;
    cout<<"\nEnter the marks in English: ";
    cin>>eng;
    cout<<"\nEnter the marks in Maths: ";
    cin>>maths;
    cout<<"\nEnter the marks in Science: ";
    cin>>sci;
}
float students::ctotal(float eng,float maths,float sci){
    total=eng+maths+sci;
    return total;
}
void students::showdata()
{
    cout<<"\nAdmission number: "<<adno;
    cout<<"\nName: "<<name;
    cout<<"\nMarks in English: "<<eng;
    cout<<"\nMarks in Maths: "<<maths;
    cout<<"\nMarks in Science: "<<sci;
    cout<<"\ncTotal marks: "<<ctotal(eng,maths,sci);
}

int main() 
{
    students s1;
    s1.takedata();
    s1.showdata(); 
 
    return 0;

}



    

