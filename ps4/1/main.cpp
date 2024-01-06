#include<iostream>
#include<cmath>
#include<iomanip>

class Polar{
    public:
        double r;
        double a;
        double x, y;

        void input(){
            std::cin >> r;
            std::cin >> a;
            }
        void convert(){
            a = a * (3.14 / 180);
            x = r * std::cos(a);
            y = r * std::sin(a);
            }
        void convert_back(){
            a = std::atan(y / x);
            a = a * (180 / 3.14);
            r = std::sqrt(x * x + y * y);
            }
        Polar operator+(Polar &other){
            Polar New;
            New.x = x + other.x;
            New.y = y + other.y;
            return New;
            }
        Polar operator-(Polar &other){
            Polar New;
            New.x = x - other.x;
            New.y = y - other.y;
            return New;
            }
};

int main(){
    Polar p1 {};
    Polar p2 {};
    p1.input();
    p2.input();
    p1.convert();
    p2.convert();
    int choice;
    std::cin>>choice;

    if(choice==1){
        Polar p3 = p1.operator+(p2);
        p3.convert_back();
        std::cout << std::setprecision(6) << p3.r << "\n";
        std::cout << std::setprecision(6) << p3.a << std::endl;
    }
    else if(choice==2){
        Polar p3 = p1.operator-(p2);
        p3.convert_back();
        std::cout << std::setprecision(6) << p3.r << "\n";
        std::cout << std::setprecision(6) << p3.a << std::endl;
    }
    else{
        std::cout<<"Invalid Input"<<std::endl;
    }
 }