#include <iostream>
using namespace std;
template<class T >
T Max( T data[] )
{
for(int i=0;i<10;i++)
{
 int sum=sum+data[i];
}
return sum;
}
template<class T >
T Min( T data[] )
{
for(int i=0;i<10;i++)
{
	 int mul=mul*data[i];
}
return small;
}
int main()
{
int a[10]={4,3,7,9,8,5,88,34,23,11};
cout<<"Largest number= "<<Max(a)<<endl;
cout<<"Smallest number= "<<Min(a)<<endl;
float b[10]={4.5,2.6,7.6,99.8,8,5,88.8,34.3,23.5,11.5};
cout<<"Largest number= "<<Max(b)<<endl;
cout<<"Smallest number= "<<Min(b)<<endl;
}
