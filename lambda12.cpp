#include<iostream>
using namespace std;
int main()
{
int lv=100;
int lv1=101;
[lv,lv1](){
cout<<lv<<endl; 
cout<<lv1<<endl;
}();
return 0;
}