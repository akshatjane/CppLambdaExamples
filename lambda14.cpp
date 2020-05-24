#include<iostream>
using namespace std;
int main()
{
int lv=100;
[&](){
cout<<(++lv)<<endl; 
}();
return 0;
}