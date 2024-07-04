#include<iostream>
using namespace std;

int main()
{
    int *arr = new int[10];

cout<<"Enter 10  numbers"<<endl;

for(int i = 0; i<10; i++)
{
    cin>>arr[i];
}
for(int i= 0; i<10;i++)
{
cout<<arr[i]<<endl;
}
delete[]arr;
    return 0;

}