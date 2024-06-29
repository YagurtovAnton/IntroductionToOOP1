#include "String.h"

//#define CONSTRUCTORS_CHECK
//#define OPERATOR_PLUS_CHEK
#define CALLING_CONSTRUCTORS
void main()
{

#ifdef CONSTRUCTORS_CHECK
	String str3 = "Hello ";
	str3.print();
	str3 = str3;

	String str4 = "World ";
	str4.print();

	cout << str3 << endl;
	cout << str4 << endl;

	//String str5 = str3 + str4;
	String str5;
	str5 = str3 + str4;		//Copy assignment
	str5.print();
	cout << str5 << endl;
#endif // CONSTRUCTORS_CHECK

#ifdef OPERATOR_PLUS_CHEK
	String str1 = "Hello ";
	String str2 = "World ";

	String temp = str1 + str2;
	cout << delimiter << endl;
	String str3;
	cout << delimiter << endl;
	str3 = str1 + str2; // тут вызывается MoveContractor
	cout << delimiter << endl;
	cout << str3 << endl;

	cout << str1 << endl;
	cout << str2 << endl;


#endif //OPERATOR_PLUS_CHEK
#ifdef CALLING_CONSTRUCTORS
	String str1;
	str1.print();

	String str2(8); //конструктор  эксплисит
	str2.print();

	String str3 = "hello"; //конструктоор чар
	str3.print();

	String str4();
	//str4.print();

	String str5{};
	str5.print();

	//String str6 = str3;	1вариант 
	//String str6(str3);	2вариант
	String str6{str3};//	3вариант
	str6.print();
#endif // CALLING_CONSTRUCTORS

}