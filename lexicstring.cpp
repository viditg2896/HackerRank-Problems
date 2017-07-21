#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;
int main(){
	int x,n,i;
	cin>>n;
	string s[n],temp[n];
	for(i=0;i<n;i++){
		cin>>s[i];
		temp[i]=s[i];
	}
	for(i=0;i<n;i++){
	x=next_permutation(s[i].begin(),s[i].end());
	if(s[i]==temp[i] || x==0)
	cout<<"no answer"<<endl;
	else
	cout<<s[i]<<endl;
	}
	return 0;
}
