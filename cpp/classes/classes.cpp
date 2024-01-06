#include <iostream>
using namespace std;


class Book{
    public:
        string title;
        string author;
        int pages;
};

int main(){
    Book b1;
    b1.title = "your name";
    b1.author = "makoto shinkai";
    b1.pages = 564;
    cout<<b1.title<<endl;

    Book b2;
    b2.title = "weathering with you";
    b2.author= "makoto shinkai";
    b2.pages = 624;
    cout<<b2.author<<endl;

    return 0;
}
