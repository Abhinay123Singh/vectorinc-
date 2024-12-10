#include<iostream>
#include<vector>
using namespace std;
int main()
{
   vector<int>v;// you need not the mention the size

   v.push_back(6);// 1 1
 v.push_back(1);//2 2 
 v.push_back(4);//3 4
 v.push_back(9);//4 4 
 v.push_back(16);//5 8
 v.push_back(4);// 6 8 
 v.push_back(9);//7 8
 v.push_back(16);//8 8 
 v.push_back(4);//9 16 
 v.push_back(9);//
 v.push_back(16);
 //v.pop_back();
 cout<<"size is:v.size()"<<endl;
 cout<<"Capacity is:<<v.capacity()"<<endl;
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
 
}
cout<<endl;
v.pop_back();
v.pop_back();
for(int i=0;i<v.size();i++)
{
    cout<<v[i]<<" ";
 
}



  //  v.pop_back(); // it removes the last element
 //  cout<<v[5]<<" ";
// if you want to update and /access
  // Deleting elements
   return 0;
}