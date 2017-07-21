#include <iostream>
using namespace std;
int main(){
	int n,i;
	float f1,f2,f3;
	f1=f2=f3=0;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	for(i=0;i<n;i++){
		if(a[i]<0)
		f1++;
		else if(a[i]>0)
		f2++;
		else
		f3++;
	}
	cout<<f2/n<<endl<<f1/n<<endl<<f3/n;
}
