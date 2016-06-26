#include<iostream>
using namespace std;
long long fiboEven(long long N) {
    if(N==1){
        return 2;
    } else if(N==2){
        return 8;
    } else {
        return 4*((fiboEven(N-1)))+fiboEven(N-2);
    }
}
long long addFibo(long long N){
    long long sum=0,i;
        for(i=1;i<=N;i++){
            if(fiboEven(i)<=N){
                sum=sum + fiboEven(i);
            } else
            break;
        }
    return sum;
}
int main()
{
    long long T,N,i;
    cin>>T;
    while(T>0){

        cin>>N;
        cout<<addFibo(N)<<endl;
        --T;
    }
    return 0;
}
