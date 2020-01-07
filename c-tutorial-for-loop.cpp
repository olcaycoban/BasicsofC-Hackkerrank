#include <iostream>
#include <vector>
#include<string>

using namespace std;

int main() {
    int n,k;cin>>n>>k;
    vector<string> vec={"zero","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=n;i<k+1;i++){
        if(i>9 && i%2==0) cout<<"even"<<endl;
        else if(i>9 && i%2!=0) cout<<"odd"<<endl;   
        else cout<<vec[i]<<endl;
    }
    return 0;
}