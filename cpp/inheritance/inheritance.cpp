#include<iostream>
using namespace std;

class Chef{
    public:
        void makeChicken(){
            cout<<"chef has made chicken"<<endl;
        }
        void makeSalad(){
            cout<<"chef has made salad"<<endl;
        }
        void makeSpecialDish(){
            cout<<"chef has made special dish"<<endl;
        }
};

class ItalianChef: public Chef{
    public:
        void makePasta(){
            cout<<"chef has made pasta"<<endl;
        }
};

int main(){
    ItalianChef c1;

    c1.makeSalad();
    c1.makePasta();


}
