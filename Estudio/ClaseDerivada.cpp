#include<iostream>
using namespace std;
class Building
{

public:
 
  virtual void healthPoint(int points) const=0;
  virtual ~Building(){}
};

class Armory : public Building
{

public:
  void healthPoint(int points) const override{
    cout<<"Health points for Armory: "<<points<<endl;
    
  }
};

#include <iostream>

w Complex {
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overload + operator using a member function
    Complex operator + (const Complex& other) const {
        return Complex(real + other.real, imag + other.imag);
    }

    // Friend function to overload the << operator
    friend std::ostream& operator << (std::ostream& out, const Complex& c);
};

// Definition of the friend function for <<
std::ostream& operator << (std::ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}

#include <iostream>
#include <vector>

class Matrix {
private:
    std::vector<std::vector<int>> data;
    int rows;
    int cols;
		

public:
    Matrix(int r, int c) : rows(r), cols(c) {
        data.resize(rows, std::vector<int>(cols, 0));
    }

    // Overload the () operator to access matrix elements
    int& operator()(int r, int c) {
        return data[r][c];
    }

    // Overload the + operator to add two matrices
    Matrix operator + (const Matrix& other) const {
        Matrix result(rows, cols);
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < cols; ++j) {
                result(i, j) = data[i][j] + other.data[i][j];
            }
        }
        return result;
    }

    // Friend function to overload the << operator for matrix output
    friend std::ostream& operator << (std::ostream& out, const Matrix& m);
};

std::ostream& operator << (std::ostream& out, const Matrix& m) {
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j) {
            out << m.data[i][j] << " ";
        }
        out << std::endl;
    }
    return out;
}


int main() {
    Complex c1(3.0, 4.0);
    Complex c2(1.0, 2.0);
    Complex c3 = c1 + c2;

    std::cout << "c1: " << c1 << std::endl;
    std::cout << "c2: " << c2 << std::endl;
    std::cout << "c3: " << c3 << std::endl;
    Matrix m1(2, 2);
    Matrix m2(2, 2);

    m1(0, 0) = 1; m1(0, 1) = 2;
    m1(1, 0) = 3; m1(1, 1) = 4;

    m2(0, 0) = 5; m2(0, 1) = 6;
    m2(1, 0) = 7; m2(1, 1) = 8;

    Matrix m3 = m1 + m2;

    std::cout << "Matrix m1:\n" << m1;
    std::cout << "Matrix m2:\n" << m2;
    std::cout << "Matrix m3 (m1 + m2):\n" << m3;

  Building* armoryLevelOne=new Armory();
  armoryLevelOne->healthPoint(10);
	delete armoryLevelOne;
	

    return 0;
}