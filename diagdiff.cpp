#include <iostream>
using namespace std;
int main(){
	int n,i,j,sum1,sum2;
	sum1=sum2=0;
	cin>>n;
	int a[n][n];
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	for(i=0;i<n;i++)
		for(j=0;j<n;j++){
			if(i==j){
				sum1+=a[i][j];
			}
		}	
		i=0;
		j=n-1;
		while(i<n && j>=0){
			sum2+=a[i][j];
			i++;
			j--;
		}
		int x = sum1-sum2;
		if(x<0)
		x=x*(-1);
		cout<<x;
}
