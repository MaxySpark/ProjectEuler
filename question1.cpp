#include<iostream>
#include<math.h>
using namespace std;
long long add(long long N)
{
    N=(N-1);
    long long sum = (((N/3)*(3+((N/3)*3)))+((N/5)*(5+((N/5)*5)))-((N/15)*(15+((N/15)*15))))/2;
return sum;
}
int main()
{
    long long T,a[100000],j;
    cin>>T;
    for(j=0;j<T;j++){
        cin>>a[j];

    }
    for(j=0;j<T;j++){
        cout<<add(a[j]);
        cout<<endl;
    }
    return 0;
}
