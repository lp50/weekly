#include<iostream>
using namespace std;

int main(){
	
	const int PROD_AGE=52,EGGS_PER_WEEK=4;
	
	int n=0;
	cin>>n;
	if(n<0){
		cout<<"Error";
		return 0;
	}
	int a[n]={};
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]<=0){
			cout<<"Error";
			return 0;
		}
	}
	
	int prod_weeks=0;
	int freq[5]={};
	
	for(int i=0;i<n;i++){
		if(a[i]<PROD_AGE-3)
			freq[0]++;
		else if(a[i]>=PROD_AGE)
			freq[4]++;
		else
			freq[4-(PROD_AGE-a[i])]++;
	}
	
	
	for(int i=0;i<5;i++){
		prod_weeks+=i*freq[i];
	}
	
	cout<<prod_weeks*EGGS_PER_WEEK;
	
	return 0;
}