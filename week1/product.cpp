#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
long long product(const vector<int>& arr)
{
    int n=arr.size();
    int max_index1=-1,max_index2=-1;
    for(int i=0;i<n;i++)
        if((max_index1==-1) || (arr[i]>arr[max_index1]))
        max_index1=i;

    for(int j=0;j<n;j++)
        if((j!=max_index1) && ((max_index2==-1) || (arr[j]>arr[max_index2])))
            max_index2=j;

    return ((long long)(arr[max_index1])) * arr[max_index2];
}

int main()
{
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];

    long long res=product(arr);
    cout<<res;
}
