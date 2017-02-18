//JOSH DV
#include<iostream>
using namespace std;

int main(){
	int A1[5]={30,40,20,50,10};
	cout<<"SELECTION SORTING:\n";
	for(int i=0;i<4;i++){
		int min=A1[i], index=i;
		for(int j=i+1;j<5;j++){
			if(A1[j]< min){
				min = A1[j];
				index = j;
			}
		}
		A1[index] = A1[i];
		A1[i] = min;
		if(i==0){
			cout<<"1st Pass: ";
		}
		if(i==1){
			cout<<"2nd Pass: ";
		}
		if(i==2){
			cout<<"3rd Pass: ";
		}
		if(i>2){
			cout<<i+1<<"th Pass: ";
		}
		for(int i=0;i<5;i++){
			cout<<A1[i]<<" ";
		}
		cout<<"\n\n";
	}

}
