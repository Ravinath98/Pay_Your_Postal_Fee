#include <iostream>
using namespace std;

struct values		//structure for return 5,4 stamps quantities values...
{
	int x, y;		//5,4 stamp quantities...
};

values postalFee(int c, int a1, int b1, int n)		//function for generating 5,4 stamps quantities values....
{
	int x, y;

	if (a1 <= c)
	{
		if (b1 <= c)
		{
			if (5 * a1 + 4 * b1 == n)
			{
				x = a1;
				y = b1;

				return values{ x,y };			//return 5,4 stamps quantities values.....


			}
			else
			{

				postalFee(c, a1, ++b1, n);		//recursively call the function...

			}
		}
		else
		{
			postalFee(c, ++a1, 0, n);			//recursively call the function...
		}
	}

}



int main()
{
	while (true)		//to enter Postal fee values continuously...
	{
		int n;   //postal fee variable...
		cout << "Enter Postal Fee Value (Greater than or Equal 12 ) : ";
		cin >> n;		//input postal fee...
		if (n >= 12)   //check the value...
		{
			cout << "5-rupee and 4-rupee stamps representation          : ";
			int c = n / 4;		//to get the worst case stamps quantity...
			int a1 = 0;		//recursion function variable...
			int b1 = 0;		//recursion function variable...



			values v;		//values structure member variable...
			v = postalFee(c, a1, b1, n);	//call and assign 5,4 stamps quantities to v variable...


			for (int w = 0; w < v.x; w++)	//print 5 stamps...
			{
				cout << 5 << " ";
			}
			for (int k = 0; k < v.y; k++)	//print 4 stamps... 
			{
				cout << 4 << " ";
			}

			cout << endl << endl;
		}
		else
		{
			cout << "Error...Re-Enter the value...." << endl << endl;
		}
	}
	return 0;
}
