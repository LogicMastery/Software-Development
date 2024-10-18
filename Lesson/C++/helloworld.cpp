#include <iostream>
using namespace std;

int main(){
string Name = "Dale";
int Age = 27;

cout << "What is your name?";
cin >> Name; 
cout << "Next question is, how old are you?";
cin >> Age;
cout << "Your name is " << Name << " your " << Age << " years old.";
return 0;
}

