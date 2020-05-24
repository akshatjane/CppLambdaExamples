#include<iostream>
using namespace std;
int main()
{
auto func=[](int x)->int{
return x*x;
};
cout<<func(10)<<endl;
return 0;
}