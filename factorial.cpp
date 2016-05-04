//
//  main.cpp
//  this function (getFactorial) will return the value of the factorial for any entered number
//  takes care of 1 and 0
//
//  Created by admin on 5/4/16.
//  Copyright (c) 2016 nabtron. All rights reserved.
//

int getFactorial(int num){
    
    // remove - sign if any
    num = abs(num);

    // define sum
    int sum = 0;
    
    // if the num is 0 or 1, no factorials possible, so return the same number back
    // not returning 0 here will result in an infinite loop
    // not returning 1 here will return 0 if the logic processes
    if( (0 == num) || (1 == num) ){
        // return the original number as it is, if it's 0 or 1
        return num;
    }

    // run recurrsively to get all factorials
    sum = getFactorial(num - 1) * num;
    // return the factorials
    return sum;
    
}

/* call by using this as example:

#include <iostream>

using namespace std;

int main(int argc, const char * argv[])
{

    string num;
    int intnum = 0;
    cout << "Enter a number " << endl;
    getline(cin, num);
    if(num != ""){
        intnum = stoi(num);
    }
    cout << getFactorial(intnum) << endl;
    
    return 0;
}


*/
