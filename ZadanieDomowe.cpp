
#include <iostream>
#include <math.h>
#include <cstdlib>
#include <cmath>
#define _USE_MATH_DEFINES

using namespace std;

int main()
{
	int wybor;
	float a, b, c, d, e, y, PI = 3.14159265359; //coœ mi nie dzia³a biblioteka wiêc tutaj jest zadeklarowane PI
	
	cout << "Podaj numer rownania jakie chcesz policzyc: " << endl;
	cin >> wybor;
	cout << "Podaj y: " << endl;
	cin >> y;

	float rad = (y * PI) / 180; //zamiana liczby na radiany

	switch (wybor)
	{
			case 1:
				cout << "Rownanie jakie wybrales y * (2 / 3) * sqrt(y) + 1" << endl;
				a = y * (2. / 3) * sqrt(y) + 1;
				cout << "Wartosc wyrazenia 1 wynosi: " << a << endl;
				return 1;
			break;

				case 2:
					cout << "Rownanie jakie wybrales ((sqrt(2) * y) / 3) * (2 / (3 * y + 1)) * (pow(y, 3))" << endl;
					b = ((sqrt(2) * y) / 3) * (2 / (3 * y + 1)) * (pow(y, 3));
					cout << "Wartosc wyrazenia 2 wynosi: " << b << endl;
					return 1;
				break;

					case 3:
						cout << "Rownanie jakie wybrales ((pow(5 * y, 1 / 4) + (3 / (4 * y + 1))) / 3) * (2 / (3 * y + 1)) * pow(y, 4 / 3)" << endl;
						c = ((pow(5 * y, 1. / 4) + (3 / (4 * y + 1))) / 3) * (2 / (3 * y + 1)) * pow(y, 4. / 3);
						cout << "Wartosc wyrazenia 3 wynosi: " << c << endl;
						return 1;
					break;

						case 4:
							cout << "Rownanie jakie wybrales ((pow(5 * y, 1 / 4) + (3 / (4 * y + 1))) / 3) * (2 / (3 * y + 1)) * PI" << endl;
							d = ((pow(5 * y, 1. / 4) + (3 / (4 * y + 1))) / 3) * (2 / (3 * y + 1)) * PI;
							cout << "Wartosc wyrazenia 4 wynosi: " << d << endl;
							return 1;
						break;

							case 5:							
								cout << "Rownanie jakie wybrales ((sin(PI + 2 * rad)) / 5 * y) + (3 / (cos(4 * y) + 1)) - (3 / 4) + (tan(3) / (3 * y + 1)) + PI" << endl;
								e = ((sin(PI + 2 * rad)) / 5 * y) + (3 / (cos(4 * y) + 1)) - (3. / 4) + (tan(3) / (3 * y + 1)) + PI;
								cout << "Wartosc wyrazenia 5 wynosi: " << e << endl;
								return 1;
							break;
	default:
		cout << "Nie ma rownania o takim numerze" << endl;
		return 2;
	break;
	}
	return 0;
}

