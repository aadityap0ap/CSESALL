#include<iostream>
using namespace std;

int main(){
    long long n;
    cin>>n;
    long long totalSum = (n * (n+1)) / 2;
    long long givenSum = 0;
    for(int i = 0;i<n-1;i++){
        long long ele;
        cin>>ele;
        givenSum += ele;
    }
    cout<<totalSum -givenSum<<endl;
    return 0;
}