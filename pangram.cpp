#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
int main(){
	char ch[1000];
	cin>>ch;
	cout<<ch;
	int k[1000],i=0,flag=0;
	while(ch[i]!='\0'){
		flag++;
	}
	for(i=0;i<flag;i++){
		k[i]=(int)ch[i];
	}
	for(i=0;i<flag;i++){
		cout<<k[i]<<"\t";
	}
}
