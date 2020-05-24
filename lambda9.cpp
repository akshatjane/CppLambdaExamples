#include<iostream>
#include<functional>
using namespace std;
int main(){

//(a+b)2=a2+b2+2ab;

auto fxSqr=[](int a,int b)->int{

int aSqr = [](int a)->int{
return a*a;
}(a);

int bSqr = [](int b)->int{
return b*b;
}(b);

int tab= [](int a,int b)->int{
return 2*a*b;
}(a,b);

return aSqr+bSqr+tab;
};
int rel = fxSqr(2,2) ;
cout<<rel<<endl;
return 0;
}