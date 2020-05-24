#include<iostream>
using namespace std;
int main()
{
int lv=100 ;
[](){
lv++; //will not compile
}();
return 0;
}