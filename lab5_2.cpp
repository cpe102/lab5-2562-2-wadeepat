#include<iostream>
using namespace std;


string mixText(string a,string b){
	if (a.size()==b.size())
	{
		int i=0,N=a.size();
		string c;
		while (i<N)
		{
			c=c+a[i]+b[i];
			i++;
		}
		return c;
	}else{
		return "E";
	}
	
}


int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
