#include <iostream>
#include <typeinfo>
#include <string>
#include <sstream>

#include <limits>

using namespace std;


template<typename T>
void getinfo(string name, T& var)
{
    double min = numeric_limits<T>::min();
    double max = numeric_limits<T>::max();

    cout << "--------------------" << endl;
    cout << "Variable name: " << name << endl;
    cout << "Type: " << typeid(var).name() << endl;
    cout << "Size: " << sizeof(var) << " bytes" << endl;
    cout << "Current value: " << var << endl;
    cout << "[Min; Max]: " << "[" << min << "; " << max << "]" << endl;
    cout << "--------------------" << endl;

}

void base_task()
{
    int i_num = -3;
    short si_num = 32000;
    long li_num = 864245158;
    unsigned int ui_num = 255;

    float f_num = 1.5f;
    double d_num = 3.14159265358979;

    char c = 'C';

    bool condition = false;

    // Show data
    cout << "Data types:" << endl;

    getinfo("i_num", i_num);
    getinfo("si_num", si_num);
    getinfo("li_num", li_num);
    getinfo("ui_num", ui_num);

    getinfo("f_num", f_num);
    getinfo("d_num", d_num);

    getinfo("c", c);

    getinfo("condition", condition);

    printf("\n--------------------\n");
    // Calculations
    double out;

    out = i_num + si_num;
    printf("Int + Short: %i + %i = %i\n", i_num, si_num, (int)out);

    out = d_num - f_num;
    printf("Double - Float: %lf - %f = %lf\n", d_num, f_num, (double)out);

    out = li_num / ui_num;
    printf("Long / UInt: %ld / %u = %lf\n", li_num, ui_num, (double)out);

    out = i_num * condition;
    printf("Int * Bool: %i * %i = %f\n", i_num, condition, (int)out);

    ostringstream oss;
    oss << c << "++";
    string str = oss.str();
    printf("Char + String: '%s' + '%s' = '%s'\n", "C", "++", str.c_str());
    printf("--------------------\n");
}

void calculations(int x, int y)
{
    printf("Your numbers: x=%i, y=%i\n\n", x, y);

    cout << "SUM:" << endl;
    double sum_double = (double)x + (double)y;
    printf("Int: %i + %i = %i\n", x, y, (int)sum_double);
    printf("Double: %i + %i = %.4lf\n", x, y, sum_double);
    printf("--------------------\n");

    cout << "SUBTRACTION:" << endl;
    double sub_double = (double)x - (double)y;
    printf("Int: %i - %i = %i\n", x, y, (int)sub_double);
    printf("Double: %i - %i = %.4lf\n", x, y, sub_double);
    printf("--------------------\n");

    cout << "MUL:" << endl;
    double mul_double = (double)x * (double)y;
    printf("Int: %i * %i = %i\n", x, y, (int)mul_double);
    printf("Double: %i * %i = %.4lf\n", x, y, mul_double);
    printf("--------------------\n");

    cout << "DIVISION:" << endl;
    double div_double = (double)x / (double)y;
    printf("Int: %i / %i = %i\n", x, y, (int)div_double);
    printf("Double: %i / %i = %.4lf\n", x, y, div_double);
    printf("--------------------\n");
}

int main() 
{
    base_task();

    printf("\n--------------------\n");
    int x, y;
    cout << "Enter the first number: ";
    cin >> x;
    cout << "Enter the second number: ";
    cin >> y;
    calculations(x, y);

    return 0;
}