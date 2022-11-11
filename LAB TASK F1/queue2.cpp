#include<iostream>
#include<queue>
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
    queue<Student>studentQueue;
    freopen("Shatabdi.text.txt","r",stdin);

    int idd;
    string namee;
    double cgpaa;

    for(int i=0; i<3; i++){
        cin>>idd>>namee>>cgpaa;
        Student s(idd,namee,cgpaa);
        studentQueue.push(s);
    }

    while(!studentQueue.empty()){
        Student s=studentQueue.front();
        cout<<s.getId()<<" "<<s.getName()<<" "<<s.getCgpa()<<endl;
        studentQueue.pop();
    }

    return 0;
}
