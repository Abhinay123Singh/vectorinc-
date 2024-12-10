#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>v;// you need not the mention the size
   //   Inserting input do not use 
   //[] to take input


   v.push_back(6);
   cout<<v.size()<<endl;
 v.push_back(1);
 cout<<v.size()<<endl;
 v.push_back(4);
 cout<<v.size()<<endl;
 v.push_back(9);
 cout<<v.size()<<endl;
 v.push_back(16);
 cout<<v.size()<<endl;
  cout<<v[0]<<" ";
  cout<<v[1]<<" ";
  cout<<v[2]<<" ";
  cout<<v[3]<<" ";
  cout<<v[4]<<" ";
  //  v.pop_back(); // it removes the last element
 //  cout<<v[5]<<" ";
// if you want to update and /access
  // Deleting elements
   return 0;
}