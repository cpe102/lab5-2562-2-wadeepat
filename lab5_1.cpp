#include<iostream>
using namespace std;

int main(){
	int N,i=0;
	cout << "Enter the number of student: ";
	cin >> N;
	
	string name[N];
		int age[N];
		
	while (i<N)
	{
		cout << "Name of student "<<i+1 <<" = ";
		cin>>name[i];
		cout << "Age of student "<<i+1 <<" = ";
		cin>>age[i];
		i++;
	}
	
	int key;
	cout << "--------------------------------------\n";
	cout << "Enter an age to search: ";
	cin >> key;
	cout << "--------------------------------------\n";

	i=0;
	while (i<N)
	{
		if (key==age[i])
		{
			cout<<name[i]<<endl;
		}
		i++;
	}
	cout << "--------------------------------------\n";
	
	return 0;
}
