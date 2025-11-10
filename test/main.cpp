#include <iostream>

using namespace std;

int main ()

{
    float num1, num2, num3, num4, num5;
    float sum,per;
    cout << "Enter a Math number: ";
    cin >> num1;

    cout << "Enter a Biology number: ";
    cin >> num2;

    cout << "Enter a English number: ";
    cin >> num3;

    cout << "Enter a History number: ";
    cin >> num4;

    cout << "Enter a Physics number: ";
    cin >> num5;

    sum  = num1 + num2 + num3 + num4 + num5;
    per = (sum / 500)*100;

    cout << "Percentage: "<< per << endl;
}
