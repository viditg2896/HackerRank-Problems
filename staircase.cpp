#include <iostream>
using namespace std;
int main(){
	int n,i,j,k;
	cin>>n;
	char a[n][n];
	char x = ' ';
	for(i=0;i<n;i++){
		for(k=0;k<n;k++){
			while(k<=n-2-i){
			a[i][k]=x;
			k++;
			}
			a[i][k]='#';
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			cout<<a[i][j];
		}
		cout<<endl;
	}
}
