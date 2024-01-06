#include <iostream>
using namespace std;

int main(){
    int nums[5] = {1,2,3,4,5};
    for(int i=0; i<sizeof(nums)/4; i++){
        cout<<nums[i]<<endl;
    }
}
