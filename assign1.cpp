#include <iostream>
#include <string>
#include <cmath>

using namespace std;

struct VECTOR {
	double x;
	double y;
};

//This function obtains the name and values of a vector.
void get_vector(string &name, VECTOR &vec)
{
	cout<<endl<<"Enter a name for the vector: ";
	getline(cin,name);
	cin.clear();
	cout<<"Enter a value for the x-value of "<<name<<": ";
	cin>>vec.x;
	cout<<"Enter a value for the y-value of "<<name<<": ";
	cin>>vec.y;
	cin.ignore();
}

//This function calculates the sum of two vectors and stores the value in the sum variable.
void calc_sum(const VECTOR &vec1, const VECTOR &vec2, VECTOR &sum)
{
	sum.x = vec1.x+vec2.x;
	sum.y = vec1.y+vec2.y;
}

//This function calculates the difference of two vectors and stores the value in the differ variable.
void calc_differ(const VECTOR &vec1, const VECTOR &vec2, VECTOR &differ)
{
	differ.x = vec1.x-vec2.x;
	differ.y = vec1.y-vec2.y;
}

//This function calculates the scalar multiple of a given vector and stores the value in the s_mult variable.
void scalar_mult(const VECTOR &vec, int scalar, VECTOR &s_mult)
{
	s_mult.x = vec.x*scalar;
	s_mult.y = vec.y*scalar;
}

//This function calculates the scalar product of two vectors and returns the answer.
double scalar_prod(const VECTOR &vec1,const VECTOR &vec2)
{
	return ((vec1.x*vec2.x)+(vec1.y*vec2.y));
}

//This function calculates the magnitude of a given vector and returns the answer.
double magnitude(VECTOR vec)
{
	return sqrt(pow(vec.x,2)+pow(vec.y,2));
}

//This function prints a name and the values in a certain vector.
void print_vector(string name, VECTOR v)
{
	cout<<endl<<name<<" = ("<<v.x<<", "<<v.y<<")"<<endl;
}

//This is the main function of the program that will call the rest of the functions
int main()
{
	VECTOR vec1, vec2, differ, sum, s_mult1, s_mult2;
	string name1, name2;
	
	get_vector(name1, vec1);
	get_vector(name2, vec2);
	
	calc_sum(vec1, vec2, sum);
	calc_differ(vec1, vec2, differ);
	scalar_mult(vec1, 10, s_mult1);
	scalar_mult(vec2, 10, s_mult2);
	
	print_vector(name1, vec1);
	print_vector(name2, vec2);
	print_vector("Sum", sum);
	print_vector("Difference", differ);
	print_vector("Scalar multiple of Vector 1", s_mult1);
	print_vector("Scalar multiple of Vector 2", s_mult2);
	
	cout<<endl<<"Scalar product = "<<scalar_prod(vec1, vec2)<<endl;
	cout<<endl<<"Magnitude of Vector 1 = "<<magnitude(vec1)<<endl;
	cout<<endl<<"Magnitude of Vector 2 = "<<magnitude(vec2)<<endl;
	
	cin.get();
	
	return 0;
}
