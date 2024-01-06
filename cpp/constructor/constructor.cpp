#include<iostream>
using namespace std;

class Book{
    public:
        string title;
        string author;
        int pages;

        Book(string title, string author, int pages){
            cout<<"object being created"<<endl;
            this->pages = pages;
            this->author = author;
            this->title = title;
            cout<<"object successfully created"<<endl;
        }
};


int main(){
    Book b1("tokyo ghoul", "sui ishida", 993);
    cout<<"printing out object information"<<endl;
    cout<<b1.title<<endl;
    cout<<b1.author<<endl;
    cout<<b1.pages<<endl;
    cout<<"information successfully printed"<<endl;
}
