#include<iostream>
using namespace std;
int main()
{
  int n,value,flag=0;
cout<<"Enter n number of elements in array ";
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
cout<<<"Enter array element in arr["+i+"] ";
cin>>arr[i];
}

cout<<"Enter element for search in arr ";
cin>>value;

for(int i=0;i<n;i++)
{
if(value==arr[i])
{
  flag=1;
cout<<"value found in arr "i+" index";
}
}

if(flag==0)
{
cout<<"value not found in array -1";
}
return 0;
}
