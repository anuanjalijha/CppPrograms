#include<iostream>
using namespace std;
int main(){
	int num1,num2,check;
	cin>>num1>>num2;
	if(num1<num2){
	check = num1;	
			}
	else{
		check = num2;		
			}
	for(int i =check;i>=1;i--){
		if(num1%i == 0 && num2%i == 0){
		cout<<i<<endl;
		break;
		}
	}		
}
