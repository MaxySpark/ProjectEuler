#include<iostream>
using namespace std;
int add(int n){
    int sum=0;

    for(int i=3;i<n;i++){
        if((i%3==0)||(i%5==0)){
            sum=sum+i;
        }
    }
    return sum;
}
int main()
{
    int T,a[100000],j;
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
