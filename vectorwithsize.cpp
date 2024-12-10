#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>v;
    int x;
    cin>>x;
    v.push_back(3);
    v.push_back(5);
    v.push_back(7);
    v.push_back(11);
    v.push_back(13);
  v.at(2)=90;
  cout<<v.at(2);
  return 0;
}