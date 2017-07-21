#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	int h[26],i,k,flag=0,b[10];
	for(i=0;i<26;i++){
		cin>>h[i];
	}
	char a[10];
	cin>>a;
	i=0;
	while(a[i]!='\0'){
		k=(int)a[i]-97;
		cout<<k<<"\t";
		b[i]=h[k];
		i++;
		flag++;
	}
	int max = *max_element(b,b+flag);
	cout<<endl<<max*flag;
}
