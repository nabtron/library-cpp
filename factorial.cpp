//
//  main.cpp
//  this function (getFactorial) will return the value of the factorial for any entered number
//  takes care of 1 and 0
//
//  Created by admin on 5/4/16.
//  Copyright (c) 2016 nabtron. All rights reserved.
//

int getFactorial(int num){
    
    int sum = 0;
    if( (0 == num) || (1 == num) ){
        sum = num;
        return sum;
    }
    sum = getFactorial(num - 1) * num;
    return sum;
    
}

/* call by using this as example:

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

//programming is so easy, really!

    string num;
    int intnum = 0;
    cout << "Enter a number " << endl;
    getline(cin, num);
    intnum = abs(stoi(num)); 
    cout << getFactorial(intnum) << endl;
    
    return 0;
}


*/
