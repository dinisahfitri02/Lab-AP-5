#include <iostream> 
using namespace std; 
int main()
{

int a,b,c,d,e;

a=12;

b=6;

c=2;

d=b&c^a>>c;

e=(c<=b) ||!(a!=b);

cout<<"Hasil adalah "<<d<<endl; 
cout<<"Hasil adalah "<<e<<endl; 
system ("pause");
}