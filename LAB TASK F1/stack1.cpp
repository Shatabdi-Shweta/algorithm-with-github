#include<iostream>
#include<stack>
using namespace std;

class Student
{
private:
    int id;
    string name;
    double cgpa;
public:
    Student()
    {

    }

    Student(int id,string name,double cgpa)
    {
        this->id=id;
        this->name=name;
        this->cgpa=cgpa;
    }
    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    double getCgpa()
    {
        return cgpa;
    }
};

int main()
{
    stack<Student>studentstack;
    freopen("Shatabdi.text.txt","r",stdin);

    int idd;
    string namee;
    double cgpaa;
    for(int i=0; i<3; i++)
    {
        cin>>idd>>namee>>cgpaa;
        Student s(idd,namee,cgpaa);
        studentstack.push(s);
    }

    while (!studentstack.empty())
    {
        Student s=studentstack.top();
        cout<<s.getId() << " "<<s.getName() << " "<<s.getCgpa() <<endl;
        studentstack.pop();
    }
}
