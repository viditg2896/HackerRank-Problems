#include <iostream>
using namespace std;
int main(){
	int t,temp,i,j,k;
	cin>>t;
	int flag[t];
	int n[t];
	for(i=0;i<t;i++){
		cin>>n[t];
		flag[i]=0;
	}
	for(j=0;j<t;j++){
			while(n[j]!=0)
			{
				temp=n[j]%10;
				if(n[j]%temp==0)
				flag[j]+=1;
				n[j]/=10;
		    }
	}
	for(k=0;k<t;k++)
	cout<<flag[k]<<endl;
}
