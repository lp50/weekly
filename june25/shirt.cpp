#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    for(int c=0;c<t;c++){
        int n,b,temp,sum=0,s=0;
        cin>>n>>b;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        sort(a,a+n);

        while(sum<=b&&s<=n){
            sum+=a[s++];
        }

        cout<<"Case #"<<c+1<<": "<<s-1<<"\n";
    }
    return 0;
}
