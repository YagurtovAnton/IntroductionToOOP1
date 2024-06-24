// объектное-орентированное програмирования на языке С++
#include<iostream>
using namespace std;

class Point
{
	double x;
	double y;
public:
	double get_x()const
	{
		return x;
	}
	double get_y()const
	{
		return y;
	}
	void set_x(double x)
	{
		this->x = x;
	}
	void set_y(double y)
	{
		this->y = y;
	}

	/*Point& operator++
	{
		this->x = x;
		this->y = 0;
		cout << "1ArgConstructor:\t" << this << endl;
	}
	Point(double x, double y)*/
	

	Point()
	{
		x = y = 0;
		cout << "DefaultConstructor:\t" << this << endl;
	}
	Point(double x)
	{
		this->x = x;
		this->y = 0;
		cout << "1ArgConstructor:\t" << this << endl;
	}
	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Constrcutor:\t\t" << this << endl;
	}
	void operator=(const Point& other)
	{
		this->x = other.x;
		this->y = other.y;
		cout << "CopyAssignemen\t\t" << this << endl;
	}
	~Point()
	{
		cout << "Destructor:\t\t" << this << endl;
	}

	//					Operators
	Point& operator++()
	{
		x++;
		y++;
		return *this;

	}
	Point operator++(int)
	{
		Point old = *this;
		x++;
		y++;
		return old;
	}
	void print()const
	{
		cout << "X = " << x << "\tY=" << y << endl;
	}
	double distance(const Point& other)const
	{
		//other.x *= 10;
		double x_distance = this->x - other.x;
		double y_distance = this->y - other.y;
		double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
		//sqrt() - Square Root (Квадратный корень)
		//this->x *= 10;
		return distance;
	}
};

double distance(const Point& A, const Point& B)
{
	//A.set_x(A.get_x() * 10);
	double x_distance = A.get_x() - B.get_x();
	double y_distance = A.get_y() - B.get_y();
	double distance = sqrt(x_distance * x_distance + y_distance * y_distance);
	return distance;
}


Point operator+(const Point& left, const Point& right)
{
	Point result;
	result.set_x(left.get_x() + right.get_x());
	result.set_y(left.get_y() + right.get_y());
	return result;
}

bool operator==(const Point& left, const Point& right)
{
	/*if (left.get_x() == right.get_x() && left.get_y() == right.get_y())
		return true;
	else
		return false;*/
	return left.get_x() == right.get_x() && left.get_y() == right.get_y();
}
	std::ostream& operator<<(std::ostream & os, const Point & obj)
	{
		return os << "X=" << obj.get_x() << "\tY=" << obj.get_y();
	}
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
