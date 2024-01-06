#include<iostream>
using namespace std;

class Movie{
    private:
        string rating;
    
    public:
        string director;
        string title;
        
        Movie(string title, string director, string rating){
            this->title = title;
            this->rating = rating;
            this->director = director;
        }

        void setRating(string rating){
            if (rating=="g" || rating=="pg" || rating=="r" || rating=="nr"){
                this->rating = rating;
            }
            else{
                this->rating = "nr";
            }
        
        }

        string getRating(){
            return rating;
        }
};

int main(){
    Movie m1("mune", "Aenoît Philippon", "g");
    m1.setRating("moon");
    cout<<m1.getRating()<<endl;
    return 0;
}
