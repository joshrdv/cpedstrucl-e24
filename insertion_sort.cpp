//JOSH DV
#include<iostream>
using namespace std;

int main(){
	int A1[5]={40,30,20,50,10};
	cout<<"INSERTION SORTING:\n";
	int p,q;
	for(int i=1;i<5;i++){
		int j,tmp = A1[i];
		for(j=i-1;j>=0 && tmp<A1[j];j--){
			A1[j+1] = A1[j];
			p = A1[j];
			q=tmp;
		}
		A1[j+1] = tmp;
		cout<<"Swapped: "<<p<<", "<<q<<"\n";
		if(i==1){
			cout<<"1st Pass: ";
		}
		if(i==2){
			cout<<"2nd Pass: ";
		}
		if(i==3){
			cout<<"3rd Pass: ";
		}
		if(i>3){
			cout<<i<<"th Pass: ";
		}
		for(int k=0;k<5;k++){
			cout<<A1[k]<<" ";
		}
		cout<<"\n\n";
	}	
}
