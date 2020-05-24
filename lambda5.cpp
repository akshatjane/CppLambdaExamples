#include<iostream>
using namespace std;
int main()
{
string result = []()->string{
cout<<"lambda"<<endl;
return "786";
}();
cout<<result<<endl;
return 0;
}