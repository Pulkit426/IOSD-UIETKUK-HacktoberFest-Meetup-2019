#include<iostream>
using namespace std;

int main()
{
int n;
cout<<"\n ENTER THE SIZE OF ARRAY - ";
cin>>n;

int A[n],i,x;
cout<<"\n ENTER THE ARRAY ELEMENTS - ";
for(i=0;i<n;i++)
cin>>A[i];

cout<<"\n ENTER THE ELEMENT TO BE SEARCHED  - ";
cin>>x;

sort(A,A+n);
int low=0,high=n-1,flag=0;

while(low<high)
{
int mid= low+ (high-low)/2;

if(A[mid]==x)
{
cout<<"\n ELEMENT  "<<x<<" FOUND AT POSITION "<<mid+1;
flag=1;
break;
}

else if(x>A[mid])
low=mid+1;

else
high=mid-1;
}

if(flag==0)
cout<<"\n ELEMENT NOT FOUND ";

return 0;
}
