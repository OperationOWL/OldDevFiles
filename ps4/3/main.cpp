#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

vector<vector<int>> multiply(vector<vector<int>> &a, vector<vector<int>> &b){
    int p = b[0].size();
    int n = a[0].size();
    vector<vector<int>> c(a.size(), vector<int>(p, 0));
    for (int j = 0; j < p; ++j){
        for (int k = 0; k < n; ++k){
            for (int i = 0; i < (int)a.size(); ++i){
                c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        return c;
}
 void print(vector<vector<int>> a)
 {
 for (int i = 0; i < (int)a.size(); i++)
{
 for (int j = 0; j <= (int)(a[0].size()) - 1; j++)
 cout << (int)a[i][j] <<endl;
 }
 }
 void identity(vector<vector<int>> a)
 {
 int count1 = 0;
 int count2 = 0;
 for (int i = 0; i <= (int)a.size() - 1; i++)
 {
 for (int j = 0; j <= (int)(a[0].size()) - 1; j++)
 {
 if (i == j && a[i][j] == 1)
 count1++;
 else if (i != j && a[i][j] == 0)
 count2++;
 }
 }
 if (count1 == (int)a.size() && count2 == (int)(a.size() * a[0].size() - count1))
 printf("IDENTITY MATRIX \n1");
 else
 cout << "NOT AN IDENTITY MATRIX \n1";
 }
 int main()
 {
 int m, n, m1, n1;
 cin >> m;
 cin>>n;
 m1=m;
 n1=n;
 vector<vector<int>> A;
 vector<vector<int>> B;
 int temp;
 for (int i = 0; i < m; i++)
 {
 vector<int> row;
 for (int j = 0; j < n; j++)
 {
 cin >> temp;
 row.push_back(temp);
 }
 A.push_back(row);
 }
 for (int i = 0; i < m1; i++)
 {
 vector<int> row;
 for (int j = 0; j < n1; j++)
 {
 cin >> temp;
 row.push_back(temp);
 }
 B.push_back(row);
 }
 vector<vector<int>> T;
 T = A;
 A = B;
 B = T;
 print(A);
 auto C = multiply(A, B);
 print(C); 
 identity(C);
 }