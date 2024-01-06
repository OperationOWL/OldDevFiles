#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class BC{
    public:
        int N;
        void input()
        {
        cin >> N;
    }
};

template <class T>
class DC : public BC{
    public:
    template <typename ForwardIterator>
    ForwardIterator remove_duplicates(ForwardIterator first, ForwardIterator last){
    auto new_last = first;
    for (auto current = first; current != last; ++current){
        if (std::find(first, new_last, *current) == new_last){
            if (new_last != current)
                *new_last = *current;
            ++new_last;
            }
        }
    return new_last;
    }
    
    void frequency(){
        input();
        T t;
        vector<T> arr;
        vector<T> ip;
        for (int i = 0; i <= N - 1; i++){
            cin >> t;
            arr.push_back(t);
            }
        vector<T> temp = arr;
        temp.erase(remove_duplicates(temp.begin(), temp.end()), temp.end());
        ip = temp;
        T temp2;
        int count = 0;
        for (int i = 0; i <= (int)ip.size() - 1; i++){
            temp2  = ip[i];
            count = 0;
            for (int j = 0; j <= (int)arr.size() - 1; j++){
                if (temp2 == arr[j])
                count++;
            }
            cout << temp2 << "-" << count << endl;
        }
    }
};

int main(){
    DC<int> o1;
    DC<float> o2;
    o1.frequency();
    o2.frequency();
}