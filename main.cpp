#include <iostream>
using namespace std;
float add(float a1 , float a2);
float sub(float s1 , float s2);
float mul(float m1 , float m2);
float divi(float d1 , float d2);
float sqr(float q1);


int main()
{
 float a , b;
 int select;
 do{
    cout << endl;
    cout << "Hello I'm a small Calculator" << endl;
    cout << "1:ADD"<< endl;
    cout << "2:SUBTRACTION"<< endl;
    cout << "3:MULTIPLICATION"<< endl;
    cout << "4:DIVISION"<< endl;
    cout << "5:SQUARE"<< endl;
    cout << "6: EXIT"<< endl;
    cout << "pleas choose the number of operation that you need : ";
    cin >> select ;

    switch (select) {

    case 1:
        add(a,b);
        break;
    case 2:
        sub(a,b);
        break;
    case 3:
        mul(a,b);
        break;
    case 4:
        divi(a,b);
        break;
    case 5:
        sqr(a);
        break;
    case 6:
        cout << "Thank you ";
        break;
    default :
        cout << "invalid choice please enter right number from this menu";
    }

}
while (select != 6);

    return 0;
}


float add(float a1 , float a2) {
cout << "inter first number :";
cin>> a1;
cout << "inter second number :";
cin>> a2;
return (cout << "Sum = " << a1+a2);
}

float sub(float s1 , float s2){
cout << "inter first number :";
cin>> s1;
cout << "inter second number :";
cin>> s2;
return (cout << "Subtract = " << s1-s2);
}

float mul(float m1 , float m2){
cout << "inter first number :";
cin>> m1;
cout << "inter second number :";
cin>> m2;
return (cout << "multiply = " << m1*m2);
}

float divi(float d1 , float d2){
cout << "inter first number :";
cin>> d1;
cout << "inter second number :";
cin>> d2;
return (cout << "division = " << d1/d2);
}

float sqr(float q1){
cout << "inter number :";
cin>> q1;
return (cout << "Square = " << q1*q1);
}
