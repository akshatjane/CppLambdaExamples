#include<iostream>
using namespace std;
int main()
{
[]()->int{
cout<<"lambda"<<endl;
return 786;
}();
return 0;
}