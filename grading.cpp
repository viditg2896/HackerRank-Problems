#include <iostream>
using namespace std;
int main(){
	int n,i,x;
	cin>>n;
	int grade[n];
	for(i=0;i<n;i++)
	cin>>grade[i];
	for(i=0;i<n;i++){
		if(grade[i]>=38){
			x=grade[i];
			x/=5;
			x++;
			if((x*5-grade[i])<3){
				grade[i]=x*5;
			}
		}
	}
	for(i=0;i<n;i++){
		cout<<grade[i]<<endl;
	}
}
