#include<iostream>
#include<vector>

int main(){
    std::cout<<"enter 10 seperate ages: ";
    float total {0};
    int temp {0};
    for(int i=0; i<10; i++)
    {
        std::cin>>temp;
        std::cout<<"you entered "<<temp<<". This is your "<<i+1<<" entry"<<std::endl;
        total+=temp;
    }

    std::cout<<total<<std::endl;
    std::cout<<total/10<<std::endl;

    return 0;
}
