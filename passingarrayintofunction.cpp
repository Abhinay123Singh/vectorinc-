#include<iostream>
using namespace std;
// accessing the elements of array in another functions
//updation pass 
void display(int a[],int size)
{
for(int i=0;i<=size-1;i++)
{
 
 cout<<a[i]<<" ";

}
cout<<endl;
return;
}
void change(int b[],int size)
{
  b[0]=100;

}
int main()
{
    int arr[]={1,4,8,10,12};
    int size=sizeof(arr)/sizeof(arr[0]);  
    // accessing the elements of array while passing in function 
 // updation,pass by value / reference  ?
 cout<<size<<endl;
display(arr,size);
change(arr,size);
display(arr,size);
}