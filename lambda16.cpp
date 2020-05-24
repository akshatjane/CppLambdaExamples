#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
vector<int> arr{1,2,3,4,5};

auto def=[](int i){
cout<<i<<endl;
};

for_each(arr.begin(),arr.end(),def);

auto plusOne=[](int i)->int{
return i+1;
};

auto somethingMapWillReturn=map(arr.begin(),arr.end(),plusOne);

for_each(arr.begin(),arr.end(),def);

return 0;
}
