#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int a[5],i;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	long int sum=0;
	for(i=0;i<5;i++){
		sum+=a[i];
	}
	long int s[5];
	for(i=0;i<5;i++){
		s[i]=sum-a[i];
	}
	int max = *max_element(s,s+5);
	int min = *min_element(s,s+5);
	cout<<min<<" "<<max;
}
