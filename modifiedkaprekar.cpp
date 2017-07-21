#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;
char a[100000],b[100000],l[100000],r[100000];
void toarray(long long int k,int base){
	long long int temp;
	int i=0;
	while(k!=0){
		temp=k%10;
		a[i]=temp;
		k/=10;
		cout<<"ar"<<a[i]<<"\t";
		i++;
	}
}
long long int tonumber(char* a[]){
	int i=0,flag=0;
	long long int temp=0,j=1;
	while(a[i]='\0'){
		flag++;i++;
	}
	cout<<"flag"<<flag;
	i=0;
	while(a[i]!='\0'){
		j=j*pow(10,flag-1-i);
		temp+=((int)a[i])*j;
		cout<<a[i];
		i++;
	}
	cout<<temp;
    return temp;
}
int kaprekar(long long int k){
	int x,d=0,flag=0;
	long long int sq,left,right;
	sq=k*k;
//	cout<<sq<<endl;
	
	toarray(k,10);
	toarray(sq,10);
//	cout<<sq<<endl;
	int i=0;
	while(b[i]!='\0'){
//		cout<<b[i];
		flag++;
		i++;
	}
//	cout<<sq<<endl;
	i=0;
	while(a[i]!='\0'){
		d++;
		i++;
	}
	if (flag-d==d){
		for(int j=0;j<d;j++)
		l[j]=b[j];
		for(int k=d,x=0;k<flag;k++,x++)
			r[x]=b[k];
	}
	else if(flag-d==d-1){
			//cout<<flag<<"\t"<<d;
		for(int j=0;j<d-1;j++)
		l[j]=b[j];
		for(int k=d-1,x=0;k<flag;k++,x++)
		r[x]=b[k];
	}
	left=tonumber(l);
	right=tonumber(r);
	//sq=atoi(b);
//	cout<<sq;
	cout<<endl<<left<<"\t"<<right;
	if(left+right==k)
	return 1;
	else 
	return 0;
}
int main(){
	long long int x;
	x=kaprekar(99);
	/*long long int low,up;
	int f1,i;
	cin>>low>>up;
	for(long long int v=low;v<=up;v++){
		i=kaprekar(v);
		if(i==1){
			cout<<v<<" ";
			f1++;
		}	
	}	
	if(f1==0){
		cout<<"INVALID RANGE";
	}*/
	
	return 0;
}
