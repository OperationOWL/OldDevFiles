#include <iostream>
using namespace std;

int main(){
    double n1;
    double n2;
    string op;
    cout<<"enter number 1: ";
    cin>>n1;
    cout<<"enter operation: ";
    cin>>op; 
    cout<<"enter number 2: ";
    cin>>n2;
    if (op=="+"){
        cout<<n1+n2<<endl;
    }
    else if(op=="-"){
        cout<<n1-n2<<endl;
    }
    else if(op=="*"){
        cout<<n1*n2<<endl;
    }
    else if(op=="/"){
        cout<<n1/n2<<endl;
    }
    else{
        cout<<"calculator cannot process ur request"<<endl;
    }
}
