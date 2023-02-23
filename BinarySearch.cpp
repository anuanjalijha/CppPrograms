#include<iostream>
using namespace std;
int main(){
	int n,key;
	cout<<"enter size of an array ";
	cin>>n;
	int s=0,e=n,mid;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter value of key ";
	cin>>key;
	for(int i=0;i<=n;i++){
		mid = (s+e)/2;
		if(arr[mid]==key){
		cout<<mid<<endl;
		break;	
		}
		else if(arr[mid]>key){
			e = mid-1;
		}
		else{
			s=mid+1;
		}
		
	}
}
