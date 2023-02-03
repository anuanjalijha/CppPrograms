#include<iostream>
using namespace std;
int main(){
	int num1,num2,lcm;//lcm = firstnum*secondnum/hcf
	cin>>num1>>num2;
	for(int i =num1;i<=num1*num2;i = i+1){
		if(i%num1 == 0 && i%num2 == 0){
			lcm = i;
				cout<<lcm<<endl;
				break;
		}
	}

}
