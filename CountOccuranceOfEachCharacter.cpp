#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	int count = 0;
	for(int i = 0;i<str.length();i++)
	{
		count = 0;
		for(int j = 0;j<str.length();j++){
			if(j<i && str[i] == str[j]){
				break;
			}
			if(str[i] == str[j]){
				count++;
			}
		}
		if(count!=0)
		cout<<str[i]<<" "<<"occurs"<<" "<<count<<" "<<"no of times"<<endl;
	}
	
}
