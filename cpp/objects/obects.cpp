#include<iostream>
using namespace std;

class Student{
    public:
        double gpa;
        string name;
        string major;
        
        Student(string name, string major, double gpa){
            this->name = name;
            this->major = major;
            this->gpa = gpa;
        }

        bool isHonors(){
            if (gpa>=3.5){
                return true;
            }
            return false;
        }
};

int main(){
    Student s1("Jim", "Buisness", 2.4);
    Student s2("Pam", "Art", 3.6);
    cout<<s2.isHonors()<<endl;

    return 0;
}
