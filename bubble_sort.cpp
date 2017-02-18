#include<iostream>
using namespace std;

int main(){
	int A1[5]={35,10,55,20,5};
	int p,q;
	cout<<"BUBBLE SORTING:\n";
	for(int i=1;i<5;i++){
		for(int j=0;j<4;j++){
			if(A1[j]>A1[j+1]){
				int temp = A1[j];
				q = A1[j];
				A1[j] = A1[j+1];
				p = A1[j];
				A1[j+1] = temp;
				cout<<"Swapped: "<<p<<", "<<q<<"\n";
			}
		}
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
		for(int i=0;i<5;i++){
			cout<<A1[i] << " ";
		}
		cout<<"\n\n";
	}
	return 0;
}
