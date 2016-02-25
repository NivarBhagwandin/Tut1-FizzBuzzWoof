#include <iostream>

using namespace std;

int main()
{
	for (int x = 1; x <= 20; x++)
	{
		if (x % 3 == 0)											/* checking for all numbers from 1 to 20 divisable by 3*/
		{
			cout << x << " is divisable by 3 " << endl;			/* prints out all numbers divisable by 3*/
		}
		else
		{
			cout << x << " is not divisable by 3 " << endl;		/* prints out the number not divisable by 3*/
		}
		if (x % 6 == 0)											/* checking for all numbers from 1 to 20 divisable by 6*/
		{
			cout << x << " is divisable by 6 " << endl;			/* prints out all numbers divisable by 3*/
		}
		else
		{
			cout << x << " is not divisable by 6 " << endl;		/* prints out the number not divisable by 6*/
		}
		if (x % 3 == 0 && x % 6 == 0)							/* checking for all numbers from 1 to 20 divisable by 3 and 6*/
		{
			cout << x << " is divisable by 3 & 6 " << endl;		/* prints out all numbers divisable by 3 and 6*/
		}
		else
		{
			cout << x << " is not divisable by 3 & 6 " << endl;	/* prints out the number not divisable by 3 and 6*/
		}
	}
}