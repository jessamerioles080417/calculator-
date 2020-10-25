#include <iostream>
using namespace std;
int main(){
    int num1, num2, c;
    char opr;
    cout<<"Enter the first number: ";
    cin>>num1;
    cout<<"Enter the second number: ";
    cin>>num2;
    cout<<"Enter operator (+, -, *, /, %)";
    cin>>opr;
    if(opr== '+')
    {
        c = num1+num2;
        cout<<c;
    }
    if(opr== '-'){
        c = num1-num2;
        cout<<c;
    }
    else if (opr== '*'){
        c = num1*num2;
        cout<<c;
    }
    else if (opr== '/'){
        c = num1/num2;
        cout<<c;
    }
    else if (opr== '%'){
        c = num1%num2;
        cout<<c;
    }
    else 
    cout<<"You entered wrong operator";
    return 0;
}
