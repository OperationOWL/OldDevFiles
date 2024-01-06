#include <iostream>
using namespace std;

void printer(int grid[2][3]){
    for(int i=0; i<2; i++){
        for(int j=0; j<3; j++){
            cout<<grid[i][j];
        }
        cout<<endl;
    }
}

int main(){
    int grid[2][3] = { {1,2,3}, {4,5,6} };
    printer(grid);
    return 0;
}
