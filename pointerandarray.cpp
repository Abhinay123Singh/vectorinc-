#include<iostream>
using namespace std;
int main()
{
int arr[]={4,8,12,1,96};
int* ptr=&arr[0];  // Address giving 
// cout<<ptr<<endl;
// ptr[0]=8;
for(int i=0;i<=4;i++)
{
    cout<<ptr[i]<<" ";
}
cout<<endl;
*ptr=8;//ptr[0]=8;
ptr++;
*ptr=9;

for(int i=0;i<=4;i++)
{
    cout<<ptr[i]<<" ";

}
}
