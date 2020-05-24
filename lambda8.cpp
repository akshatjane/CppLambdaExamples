#include<iostream>
#include<functional>
using namespace std;
int main()
{
function<int(int)> func=[](int x)->int{
return x*x;
};
cout<<func(10)<<endl;
return 0;
}