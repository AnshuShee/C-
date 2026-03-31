#include<iostream>
using namespace std ;

int main (){
    char grade ;
    cout << "Enter your grade : " << endl;
    cin >> grade;

    switch (grade) {
        case 'A':
            cout << "Your marks will be 90-100" << endl;
            break;
        case 'B':
            cout << "Your marks will be 80-90" << endl;
            break;
        case 'C':
            cout << "Your marks will be 70-80" << endl;
            break;
        case 'D':
            cout << "Your marks will be 60-70" << endl;                  
            break;
      
    }
    return 0;
}