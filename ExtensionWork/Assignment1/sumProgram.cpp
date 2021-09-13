#include <iostream>

using namespace std; 

int main() {


//cout << "This program calculates the sum of a series of numbers entered. Tell the program when to stop with a 0" << endl;

int x, sum, i;

sum = 0;

i = 1;

    while(i == 1){

    //cout << "enter a number: ";
    cin >> x;

    sum = sum + x;

    //cout << "the sum is: " << sum << endl;

    //cout << "continue?(1 for yes, 0 for no) ";
    cin >> i;

    if(i == 0){
        //cout << "the final sum is: " << sum << endl;
        cout << sum;
    }

}


}
//use while loop like in more_condition