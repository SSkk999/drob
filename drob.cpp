using namespace std;
#include <iostream>
class drob {
	private:
	struct  drobick1
	{
		int numerator;
		int  denominator;
	};


	drobick1 drop1;
	drobick1 drop2;
	public:
	void setdrobick1() {
		cout << "enter:numerator:" << endl;
		cin >> drop1.numerator;
		cout << "enter:numerator:" << endl;
		cin >> drop1.denominator;
	}
	void setdrobick2() {
		cout << "enter:numerator:" << endl;
		cin >> drop2.numerator;
		cout << "enter:numerator:" << endl;
		cin >> drop2.denominator;
	}
	//void plus() {
	//	return  drop1.numerator + drop2.numerator;


	//}
	//int minus() {
	//	return  drop1.numerator - drop2.numerator;
	//	


	//}








	void oparetions() {
		char oparations;

		cin >> oparations;
		if (oparations == '+')
		{
			if (drop2.denominator == drop1.denominator)
			{
				int  vyshlo = drop1.numerator +  drop2.numerator;
				cout << vyshlo << "\n""-""\n" << drop1.denominator;
					
			}
			else {
				int  vyshlo = drop1.numerator * drop2.denominator + drop2.numerator * drop1.denominator;
				cout << vyshlo << "\n""-""\n" << drop1.denominator * drop2.denominator;
			}
		}
		if (oparations == '-')
		{
			if (drop2.denominator == drop1.denominator)
			{
				int  vyshlo = drop1.numerator - drop2.numerator;
				cout << vyshlo << "\n""-""\n" << drop1.denominator;
			}

			else {
				int  vyshlo = drop1.numerator * drop2.denominator - drop2.numerator * drop1.denominator;
				cout << vyshlo << "\n""-""\n" << drop1.denominator * drop2.denominator;
			}

		}

		if (oparations == '/')
		{
	
			int  vyshlo = drop1.numerator * drop2.denominator;
			int vyshlo1 = drop1.denominator * drop2.numerator;
			cout << vyshlo << "\n""-""\n" << vyshlo1;

		}
		if (oparations == '*')
		{
			int  vyshlo = drop1.numerator * drop2.numerator;
			int vyshlo1 = drop1.denominator * drop2.denominator;
			cout << vyshlo << "\n""-""\n" << vyshlo1;
		}

		




	}
























};















int main()
{
	drob s;
	s.setdrobick1();
	s.setdrobick2();
	s.oparetions();





}
   