#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> arr{9,8,7,6,5,4,3,2,1};

auto def=[](int i){
cout<<i<<endl;
};

for_each(arr.begin(),arr.end(),def);
return 0;
}