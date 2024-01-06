#include <iostream>
using namespace std;

int compare(int n1, int n2){
    if (n1>n2){
        return n1;
    }
    else {
        return n2;
    }
}


int main(){
    cout<<compare(5, 4)<<endl;
    return 0;
}
