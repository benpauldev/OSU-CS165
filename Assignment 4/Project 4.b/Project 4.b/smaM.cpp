#include <iostream>

using namespace std;

void smallSort(int*, int*, int*);

int main()
{
    int num1, num2, num3;
    cout << "Please enter the first number" << endl;
    cin >> num1;
    cout << "Please enter the second number" << endl;
    cin >> num2;
    cout << "Please enter the third number" << endl;
    cin >> num3;
    cout << "Now I will sort from smallest to largest!" << endl;
    
    smallSort(&num1, &num2, &num3);
    
    return 0;
}
