#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n,i,a,b,count;
    cout<<"enter the limits";
    cin>>a>>b;
for(i=a;i<b;i++)
{
count=0;
for(n=2;n<i;n++)
{
if(i%n==0)
count++;
}
if(count==0)
cout<<i<<endl;
}
return 0;
}
