#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int tae=0;
	int s;
	
	cout << "Enter size: ";
	cin >> s;

	int Arr[100];
	if (s<100)
	{cout << "Enter Integers: ";
	
	for (int i=0;i<s;i++)
	{
		cin >> Arr[i];
	} 

	for(int i=0;i<s;i++)
	{
	 	for (int j=0; j<s-1;j++)
	 	{ 
			if (Arr[j]>Arr[j+1])
	 		{
	 			tae=Arr[j];
	 			Arr[j]=Arr[j+1];
	 			Arr[j+1]=tae;
			}
		 } 

	 } 

	 for (int i=0;i<s;i++)
	 {
	 	cout << Arr[i] << ", "; 	
	 }
	}

	else if (s>100)
		cout << "INVALID";

	 _getch();

	 return 0;

}