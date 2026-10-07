#include<iostream>
using namespace std;

int main()
{
int arr[10];
for(int i=0;i<10;i++)
{
cout<<"enter "<<i<<"number in array:: ";
cin>>arr[i];


}
cout<<endl;
int n;
cout<<"enter a number of times you wnat to execute::";
cin>>n;
for(int j=0;j<n;j++)
{
cout<<arr[j]<<" ";
}
return 0;
}
