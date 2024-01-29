#include <iostream>
using namespace std;
#include <math.h>

int main()
{
	float x;
	float y;
	cout << "Введите чему равен x - " << endl;
	cin >> x;

	if (x < 0)
	{
		y = pow((pow(x, 3) + 1), 2);
		cout << "y = " << y << endl;
	}

	else if (x >= 0 && x < 1)
	{
		y = x * 0;
		cout << "y = " << y << endl;
	}

	else if (x >= 1)
	{
		y = fabs(pow(x, 2) - 5 * x + 1);
		cout << "y = " << y << endl;
	}

	else
	{
		cout << "Значения x не существует" << endl;
	}
}