#include <iostream>
using namespace std;
int main(){
	int n,i,max=-2147483640,f=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]>max)
		max=a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]==max)
		f++;
	}
	cout<<f;
}
