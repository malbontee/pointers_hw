

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    /* Создать пятижды указатель.Показать адреса всех элементов цепочки, используя только этот указатель.*/
    
    int value = 19;
    int* p_value = &value;
    int** pp_value = &p_value;
    int*** ppp_value = &pp_value;
    int**** pppp_value = &ppp_value;
    int***** ppppp_value = &pppp_value;
    cout << "The address of the fourth pointer: " << *ppppp_value << "\n"; // pppp_value
    cout << "The address of the third pointer: " << **ppppp_value << "\n"; // ppp_value
    cout << "The address of the second pointer: " << ***ppppp_value << "\n"; // pp_value
    cout << "The address of the first pointer: " << ****ppppp_value << "\n"; // p_value
    cout << "Value: " << *****ppppp_value << "\n"; // value

    /*Создать две переменные и определить «расстояние между ними в памяти. Расстояние показать в переменных того же типа (вычесть из одного указателя другой). Затем показать расстояние в байтах.*/
    int number1 = 170;
    int number2 = 111;
    int* p_number1 = &number1;
    int* p_number2 = &number2;
    auto distance(p_number1 - p_number2);
    int bytes_dist = distance * sizeof(int);
    cout << "p_number1: " << p_number1 << "\n";
    cout << "p_number2: " << p_number2 << "\n";
    cout << "Result of subtraction of two addresses: " << distance << "\n";
    cout << "Result of subtraction in bytes: " << bytes_dist << "\n";
    
    /* Через указатели на указатели посчитать сумму двух чисел и записать в третье. */
    int num1 = 1000;
    int* p_num1 = &num1;
    int** pp_num1 = &p_num1;
    int num2 = 879;
    int* p_num2 = &num2;
    int** pp_num2 = &p_num2;
    int result = **pp_num1 + **pp_num2;
    cout << "Your result: " << result << "\n";

    /* Пользователь вводит число, оно показывается в 2, 3 и 4 степени. Подсчёты осуществляются с помощью указателей.*/

    int num;
    cout << "Enter your number here: ";
    cin >> num;
    int* p_num = &num;
    int res1 = pow(*p_num, 2);
    int res2 = pow(*p_num, 3);
    int res3 = pow(*p_num, 4);
    cout << "Your number in the second power: " << res1 << "\n";
    cout << "Your number in the third power: " << res2 << "\n";
    cout << "Your number in the fourth power: " << res3 << "\n";

    /*Через указатель на указатель на указатель посчитать идеальный вес. Ввести рост и реальный вес, показать сколько кг нужно сбросить или набрать. Идеальный вес Рост 110.*/
    int height, weight, res;
    cout << "Enter your height here: ";
    cin >> height;
    cout << "Enter your weight here: ";
    cin >> weight;
    int* p_height = &height;
    int** pp_height = &p_height;
    int*** ppp_height = &pp_height;
    int ideal_weight = ***ppp_height - 110;
    if (weight > ideal_weight) {
        res = weight - ideal_weight;
        cout << "You need to lose " << res << " kilos\n";
    }
    else if (weight == ideal_weight) {
        cout << "You don't need to lose weight! It's already perfect!\n";
    }
    else {
        res = ideal_weight - weight;
        cout << "You're underweight! You need to gain " << res << " kilos!\n";
    }






}


