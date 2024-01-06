#include <iostream>
using namespace std;

string dayName(int d){
    switch(d){
        case 0:
            return "sunday";
        case 1:
            return "monday";
        case 2:
            return "tuesday";
        case 3:
            return "wednesday";
        case 4:
            return "thursday";
        case 5:
            return "friday";
        case 6:
            return "saturday";
        default:
            return "invalid input";
    }

}


int main(){
    int d;
    cout<<"enter day from 0-7: ";
    cin>>d;
    cout<<dayName(d)<<endl;

}
