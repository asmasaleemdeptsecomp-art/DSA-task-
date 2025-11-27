#include<iostream>
using namespace std;
int findlinear(int roll[],int n,int key)
{
	for(int i=0;i<n;i++)
	{
		if(roll[i]==key)
		{
			return i;
		}
	}
	return-1;
}
int findBinary(int roll[],int n,int key)
{
	int low=0;
	int high=n-1;
	while(low<=high)
	{
	int mid=(low+high)/2;
	if(roll[mid]==key)
	{
		return mid;
		}	
		if(roll[mid]<key)
		{
			low=mid+1;
		}
		else
		{
			high=mid-1;
		}
	}
	return-1;
}
int main()
{
	int choice,size,searchNum,position;
	cout<<"enter the number of students :";
	cin>>size;
	int rollNum[size];
	cout<<"select search method:\n";
	cout<<"1.linear search (for unsorted records)\n";
	cout<<"2.binary search (for sorted record)\n";
	cout<<"enter your choice: ";
	cin>>choice;
	if(choice==1)
	{
		cout<<"\nenter"<<size<<"student roll number(in any order)";
		for(int i=0;i<size;i++)
		{
			cout<<"roll no"<<i+1<<":";
			cin>>rollNum[i];
		}
		cout<<"\nenter roll no to search:";
		cin>>searchNum;
		position=findlinear(rollNum , size , searchNum);
		if(position!=-1)
		{
			cout<<"\nstudent found at position"<<position+1<<endl;
		}
		else
		{
			cout<<"\nstudent not found in record"<<endl;
		}
	}
	else if(choice==2)
	{
		cout<<"\nenter"<<size<<"student roll number(in sorted order):\n";
		for(int i=0;i<size;i++)
		{
			cout<<"roll no"<<i+1<<":";
			cin>>rollNum[i];
		}
		cout<<"enter roll no to search:";
		cin>>searchNum;
		position=findBinary(rollNum,size,searchNum);
		if(position!=-1)
		{
			cout<<"\nstudent found at position"<<position+1<<endl;
		}
		else
		{
			cout<<"\nstudent not found in record"<<endl;
		}
	}
	else
	{
		cout<<"invalid choice"<<endl;
	}
	return 0;
	}
	
	