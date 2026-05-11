#include <iostream>
using namespace std;

class Rectangle{

	private:
		float length;
		float width;

	public:

		Rectangle(){
			length = 1.0;
			width = 1.0;
		}

		Rectangle(float l, float w){
			length = l;
			width = w;
		}

		Rectangle(float side){
			length = side;
			width = side;
		}

		float calculateArea(){
			return length * width;
		}

		void showArea(){

			cout << "Length : " << length << endl;
			cout << "Width  : " << width << endl;
			cout << "Area   : " << calculateArea() << endl;
		}
};

int main(){

	cout << "==================================" << endl;
	cout << "Rectangle Area Program" << endl;
	cout << "==================================" << endl;

	cout << "\nRectangle 1" << endl;

	Rectangle rec1;
	rec1.showArea();

	cout << endl;

	cout << "Rectangle 2" << endl;

	Rectangle rec2(2.5, 3.6);
	rec2.showArea();

	cout << endl;

	cout << "Rectangle 3" << endl;

	Rectangle rec3(5.5);
	rec3.showArea();

	return 0;
}
