#include<iostream>
using namespace std;
int main()
{
int rel = [](int x)->int{
return x*x;
}(10);
cout<<rel<<endl;
return 0;
}


