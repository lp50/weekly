#include<iostream>
using namespace std;

int main(){
	int denom[]={2000, 500, 200, 100, 50, 20, 10, 5, 2, 1};
	int n=sizeof(denom)/sizeof(denom[0]);
	int freq[n]={};
	int sum=0;
	cin>>sum;
	
	if(sum<=0||sum>25000){
		cout<<"Error";
		return 0;
	}
	
	for(int i=0;i<n;i++){
		if(sum>=denom[i]){
			freq[i]=sum/denom[i];
			sum%=denom[i];
		}
	}
	
	for(int i=0;i<n;i++)
		cout<<freq[i]<<" ";
	
	return 0;
}
