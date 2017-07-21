#include <iostream>
using namespace std;
int angryprof(){
	int n,k;
	cin>>n>>k;
	int a[n],i,flag=0;
	for(i=0;i<n;i++)
	cin>>a[i];
	for(i=0;i<n;i++){
		if(a[i]<=0)
		flag++;
	}
	if(flag<k)
	return 1;
	if(flag>=k)
	return 0;
}
int main(){
	int t,j,c[10],x;
	cin>>t;
	for(j=0;j<t;j++){
	x=angryprof();
	c[j]=x;
	}
	for(j=0;j<t;j++){
		if(c[j]==1)
		cout<<"YES"<<endl;
		if(c[j]==0)
		cout<<"NO"<<endl;
	}
}
