
#include<iostream>
using namespace std;
int main(){
	string str;
	getline(cin,str);
	char str1[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
	int arr[26];
	int count = 0;
	for(int i=0;i<26;i++){
		count = 0;
		for(int j = 0;j<str.length();j++){
		
	if(str[j] == str1[i] ){
		count++;

	}
	
	}
	cout<<count<<endl;
arr[i] = count;
}


int max = arr[0];
int index_max = 0;
for(int i=1;i<26;i=i+1)
	{
		if(max<arr[i]){
		max = arr[i];
		index_max = i;
		}
	}
cout<<"max no is"<<" "<<max<<endl;
cout<<"index of max no is "<<index_max<<endl;

cout<<"max occuring character is "<<str1[index_max]<<endl;	
	


}
