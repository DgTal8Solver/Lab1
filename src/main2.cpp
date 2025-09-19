#include <iostream>
#include <string>

int main()
{
    using namespace std;

    setlocale(LC_ALL, "Russian");
    
    int i_num = -3;
    short si_num = 32000;
    long long li_num = 864245158;
    unsigned int ui_num = 255;

    float f_num = 1.5f;
    double d_num = 3.14159265358979;

    char c = 'C';
    unsigned char u_c = 'C';

    bool condition = false;
    
    // Types
    unsigned int size;

    size = sizeof(i_num);
    cout << "int i_num = " << i_num << " | от " << INT_MIN << " до " << INT_MAX << " | " << size << " байт" << endl;
    size = sizeof(si_num);
    cout << "short si_num = " << si_num << " | от " << SHRT_MIN << " до " << SHRT_MAX << " | " << size << " байт" << endl;
    size = sizeof(li_num);
    cout << "long long li_num = " << li_num << " | от " << LLONG_MIN << " до " << LLONG_MAX << " | " << size << " байт" << endl;
    size = sizeof(ui_num);
    cout << "unsigned int ui_num = " << ui_num << " | от " << 0 << " до " << UINT_MAX << " | " << size << " байт" << endl;

    size = sizeof(f_num);
    cout << "float f_num = " << f_num << "  | от " << __FLT_MIN__ << " до " << __FLT_MAX__ << " | " << size << " байт" << endl;
    size = sizeof(d_num);
    cout << "double d_num = " << d_num << " | от " << __DBL_MIN__ << " до " << __DBL_MAX__ << " | " << size << " байт" << endl;

    size = sizeof(c);
    cout << "char c = " << c << " | от " << CHAR_MIN << " до " << CHAR_MAX << " | " << size << " байт" << endl;
    size = sizeof(u_c);
    cout << "unsigned char u_c = " << u_c << " | от " << 0 << " до " << UCHAR_MAX << " | " << size << " байт" << endl;
    
    size = sizeof(condition);
    cout << "bool condition = " << condition << " | от " << 0 << " до " << 1 << " | " << size << " байт" << endl;

    // Calculations
    double out;

    out = i_num + si_num;
    cout << "Int + Short: " << i_num << " + " << si_num << " = " << (int)out << endl;

    out = d_num - f_num;
    cout << "Double - Float: " << d_num << " - " << f_num << " = " << (double)out << endl;

    out = li_num / ui_num;
    cout << "Long / UInt: " << li_num << " / " << ui_num << " = " << (double)out << endl;

    out = i_num * condition;
    cout << "Int * Bool: " << i_num << " * " << condition << " = " << (int)out << endl;

    // Extra
    int x, y;
    cout << "Введите значения с клавиатуры:" << endl;
    cin >> x >> y;
    cout << "Ваши значения: x = " << x << ", y = " << y << endl;

    cout << "===SUM===" << endl;
    double sum_double = (double)x + (double)y;
    cout << "Int: " << x << " + " << y  << " = " << (int)sum_double << endl;
    cout << "Double: " << x << " + " << y  << " = " << sum_double << endl << endl;

    cout << "===SUBTRACTION===" << endl;
    double sub_double = (double)x - (double)y;
    cout << "Int: " << x << " - " << y  << " = " << (int)sub_double << endl;
    cout << "Double: " << x << " - " << y  << " = " << sub_double << endl << endl;

    cout << "===MUL===" << endl;
    double mul_double = (double)x * (double)y;
    cout << "Int: " << x << " * " << y  << " = " << (int)mul_double << endl;
    cout << "Double: " << x << " * " << y  << " = " << mul_double << endl << endl;

    cout << "===DIVISION===" << endl;
    double div_double = (double)x / (double)y;
    cout << "Int: " << x << " / " << y  << " = " << (int)div_double << endl;
    cout << "Double: " << x << " / " << y  << " = " << div_double << endl;

    system("pause");
    return 0;
}