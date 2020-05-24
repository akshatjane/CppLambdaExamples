#include<iostream>
using namespace std;
int main()
{
int lv=100;
[lv](){
// lv is readOnly
cout<<lv<<endl; 
}();
return 0;
}