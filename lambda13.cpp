#include<iostream>
using namespace std;
int main()
{
int lv=100;
[=](){
cout<<lv<<endl; // "=" making all the local variable available to this lambda funtion
}();
return 0;
}