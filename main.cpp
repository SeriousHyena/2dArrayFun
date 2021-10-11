#include <iostream>
#include <array>

using namespace std;

int main()
{
	int myNums[2][3]
	{
		{1,2,3},
		{4,5,6}
	};

	cout << myNums[0][2] << endl;

	myNums[1][0] = 14;
	cout << myNums[1][0]<<endl;

	//print the array forward-in original order
	for (int row = 0; row < 2; row++)
	{
		for (int col = 0; col < 3; col++)
		{
			cout << myNums[row][col] <<" ";
		}
		cout << endl;
	}

	cout << endl << endl;


	//print the array backwards
	for (int row = 2-1; row >=0; row--)
	{
		for (int col = 3 -1 ; col >= 0; col--)
		{
			cout << myNums[row][col] << " ";
		}
		cout << endl;
	}

	

	return 0;
}