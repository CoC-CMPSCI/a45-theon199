//      **************************************************
//      Find the min, max among three values
//      Display three values in ascending order  min, other, max
//     **************************************************
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, num3;
    int min, max, med;
    cin >> num1 >> num2 >> num3;

    if (num1 <= num2 && num1 <= num3)
        min = num1;
    else if (num2 <= num1 && num2 <= num3)
        min = num2;
    else
        min = num3;

    if (num1 >= num2 && num1 >= num3)
        max = num1;
    else if (num2 >= num1 && num2 >= num3)
        max = num2;
    else
        max = num3;

    med = num1 + num2 + num3 - min - max;

    cout << min << " " << med << " " << max << endl;
}
