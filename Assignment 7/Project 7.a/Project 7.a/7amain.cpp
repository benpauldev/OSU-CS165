#include <iostream>
#include "Square.hpp"
#include "Rectangle.hpp"

using namespace std;

int main()

{
    Rectangle rect(10,5);
    Square box(10);
    
    double aR = rect.area();
    double perR = rect.perimeter();
    double a=box.area();
    double per=box.perimeter();
    
    cout<<"Area of the square is "<<a<<endl;
    cout<<"Perimeter of the square is "<<per<<endl;
    
    cout<<"Area of the rectangle is "<<aR<<endl;
    cout<<"Perimeter of the rectangle is "<<perR<<endl;
    
    
    box.setLength(5);
    cout<<endl;
    cout<< "The square has been changed.";
    cout<<endl;
    cout<<endl;
    
    
    cout<<"Now the area of the square is "<<a<<endl;
    cout<<" Now the perimeter of the square is "<<per<<endl<<endl;;
    

       return 0;
    
}
