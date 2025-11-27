#include<iostream>
using namespace std;
int binarySearchAsc(int arr[], int size , int  key){
	int low=0 , high=size-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)
		low=mid+1;
		else
		high=mid-1;
	}
	return -1;
}
int binarySearchDesc(int arr[], int size , int key){
	int low=0 , high=size-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(arr[mid]==key)
		return mid;
		else if(arr[mid]<key)
		low=mid+1;
		else
		high=mid-1;
		}
		return -1;
}
int main(){
	const int size=10;
	int ascRolls[size]={1,2,3,4,5,6,7,8,9,10};     //ascending order
	int descRolls[size]={10,9,8,7,6,5,4,3,2,1};    //descending order
	int key;
	cout<<"enter roll no to search:";
	cin>>key;
	if(key%2==0){
		cout<<"\nEven roll no -> binary search in ascending order\n";
		int pos=binarySearchAsc(ascRolls,size,key);
		if(pos!=-1)
		cout<<"roll no"<<key<<"found at index"<<pos<<endl;
		else
		cout<<"roll no"<<key<<"not found"<<endl;
	}
	else{
		cout<<"\nOdd roll no -> binary search in descending order\n";
		int pos=binarySearchDesc(descRolls,size,key);
		if(pos!=-1)
		cout<<"roll no"<<key<<"found at index"<<pos<<endl;
		else
		cout<<"roll no"<<key<<"not found"<<endl;
	}
	return 0;
}