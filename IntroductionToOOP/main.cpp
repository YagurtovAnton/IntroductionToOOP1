#include"Introduction.h"

//#define STUCT_POINT
//#define CONSTRUCTORS_CHEK
//#define arifmetical_operators_chek
//#define COMPARISON_OPERATORS_CHEK
//#define DISTANCE_CHECK
//#define ASSIGNMENT_CHECK

void main()
{
	setlocale(LC_ALL, "");
	
#ifdef STUCT_POINT
	cout << "Hello OOP" << endl;
	int a;
	Point A;

	A.x = 2;
	A.y = 3;
	cout << A.x << "\t" << A.y << endl;

	Point* pA = &A;
	cout << pA->x << "\t" << pA->y << endl;
#endif // STUCT_POINT

#ifdef CONSTRUCTORS_CHEK
	Point A;
	//A.set_x(2);
	//A.set_y(3);
	//cout << A.get_x() << "\t" << A.get_y() << endl; 
	A.print();

	Point B = 5;
	
	B.print();

	Point C(2, 3);
	C.print();

	Point D = C;
	D.print();

	Point E;
	E = D;
	E.print();
	/*for (int i = 0; i < 10; i++)
	{
		cout << i << "\t";
	}
	cout << i << endl;
	cout << endl;*/
#endif // CONSTRUCTORS_CHEK
#ifdef DISTANCE_CHECK
	Point A(2, 3);
	Point B(7, 8);

	A.print();
	B.print();

	cout << delimiter << endl;
	cout << "Расстояние от точки 'A' до точки 'B':" << A.distance(B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние от точки 'B' до точки 'A':" << B.distance(A) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками 'A' и 'B':  " << distance(A, B) << endl;
	cout << delimiter << endl;
	cout << "Расстояние между точками 'B' и 'A':  " << distance(B, A) << endl;
	cout << delimiter << endl;
#endif // DISTANCE_CHECK
#ifdef arifmetical_operators_chek
	Point A(2, 3);
	A.print();

	Point B(7, 8);
	B.print();

	Point C = A + B;
	C.print();

	Point D = C++;
	D.print();

#endif // arifmetical_operators_chek
#ifdef ASSIGNMENT_CHECK
	int a, b, c;
	a = b = c = 0;
	cout << a << "\t" << b << "\t" << c << endl;


	Point A, B, C;

	cout << delimiter << endl;
	A = B = C = Point(2, 3);	//Point(2, 3) - явно вызываем конструктори создем временный безымяный объект,этот объект и передается как параметр в первый CopyAssignment.
	cout << delimiter << endl;

	A.print();
	B.print();
	C.print();

	cout << delimiter << endl;
#endif // ASSIGNMENT_CHECK
#ifdef COMPARISON_OPERATORS_CHEK
	//cout << (2 == 3)<<endl;
//cout << (Point(2, 3) == Point(2, 3)) << endl;
	Point A(2, 3);
	Point B(2, 3);
	cout << (A == B) << endl;
	//cout << (Point(2, 3) == Point(2, 3)) << endl;  
#endif // COMPARISON_OPERATORS_CHEK

	Point A(2, 3);

	cout << A << endl;

}
