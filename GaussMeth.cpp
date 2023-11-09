#include "Gauss.h"

int main()
{
	float** Matrix1;
	float** Matrix2;
	float* ans;
	float* b = new float(3);
	float* ansb;



	float a[12] = { 2.6, -4.5, -2, 19.07,
				  3, 3, 4.3, 3.21,
				  -6, 3.5, 3, -18.25 };


	Matrix1 = Create(3, 4, a);


	Out(Matrix1, 3, 4);

	try {
		ans = FindX2(Matrix1, 3, 4);
	}
	catch (const char* error_mesage)
	{
		cout << error_mesage;
		return 0;
	}

	Out(Matrix1, 3, 4);

	b = ResidualVect(ans, a, 4, 3);


	for (int i = 0; i < 3; i++)
		cout << " ! " << b[i] << endl;

	Matrix2 = CreateB(3, 4, a, b);


	Out(Matrix2, 3, 4);

	ansb = FindX2(Matrix2, 3, 4);


	OutAns(ans, 3);
	OutAns(ansb, 3);

	Error(ans, ansb, 3);

	return 0;
}