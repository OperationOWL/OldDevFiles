#include<iostream>
using namespace std;

int main(){
    int age = 19;
    int *pAge = &age;
    double gpa = 2.7;
    double *pGpa = &gpa;
    cout<<pAge<<endl;
    cout<<*pAge<<endl;
    cout<<&age<<endl;
    return 0;
}
