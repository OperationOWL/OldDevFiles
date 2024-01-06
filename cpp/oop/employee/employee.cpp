#include<iostream>
using namespace std;

class AbstractEmployee{
    virtual void askForPromotion() = 0;

};

class Employee: AbstractEmployee{
    protected:
        int age;
        string name;
        string company;

    public:
        Employee(string name, string company, int age){
            this->age = age;
            this->name = name;
            this->company = company;

        }

        virtual void work(){
            cout<<name<<" is checking email, task backlog, and performing tasks.."<<endl;
        }

        //getters and setter
        
        //age
        int getAge(){
            return age;
        }
        void setAge(int age){
            if (age>=18){
                this->age = age;
            }
        }
        
        //name
        string getName(){
            return name;
        }
        void setName(string name){
            this->name=name;
        }

        //company
        string getCompany(){
            return company;
        }
        void setCompany(string company){
            this->company = company;
        }
        
        void introduce(){
            cout<<"my name is "<<name<<endl<<"my age is "<<age<<endl<<"i work for "<<company<<endl<<endl;
        }
        void askForPromotion(){
            if (age>=30){
                cout<<name<<" has been promoted"<<endl;
            }
            else{
                cout<<name<<" cannot be promoted yet"<<endl;
            }
        } 
};


class dev:public Employee{
    public:
        int xp;

        //constructor
        dev(string name, string company, int age, int xp): Employee(name, company, age){
            this->xp = xp;
        }

        void work(){
            cout<<this->name<<" is fixing bug"<<endl;
        }
};

class Teacher :public Employee{
    public:
        string subject;
        void prepareLesson(){
            cout<<this->name<<" is preparing lesson for "<<this->subject<<endl;
        }

        Teacher(string subject, string name, int age, string company): Employee(name, company, age){
            this->subject = subject;
        }

        void work(){
            cout<<this->name<<" is teaching "<<this->subject<<endl;
        }

};

int main(){
/*
    Employee e1("bob","dell",30);
    e1.introduce();

    Employee e2 = Employee("owl","google",29);
    e2.introduce();

    e1.setAge(17);
    e1.introduce();

    e1.askForPromotion();
    e2.askForPromotion();
*/
    dev d1("kami", "humans", 32, 10);
    d1.work();
    d1.askForPromotion();

    Teacher t1("Philosophy", "mary", 25, "Loyola");
    t1.prepareLesson();
    t1.askForPromotion();
    t1.work();

    Employee* e3 = &t1;
    Employee* e4 = &d1;

    e3->work();
    e4->work();

}
