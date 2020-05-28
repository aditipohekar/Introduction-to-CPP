//Input Format

You will be given two positive integers, a and  b(a<=b), separated by a newline.

Output Format

For each integer  in the interval [a,b] :

If 1<=n<=9, then print the English representation of it in lowercase. That is "one" for , "two" for , and so on.
Else if n>9  and it is an even number, then print "even".
Else if n>9  and it is an odd number, then print "odd".//

#include <iostream>
#include <cstdio>
using namespace std;

int main(void)
{
    int a, b;

    cin >> a >> b;

    for(int i = a; i <= b; i++){
       if(i == 1)
            cout << "one" << endl;
       else if(i == 2)
            cout << "two" << endl;
       else if(i == 3)
            cout << "three" << endl;
       else if(i == 4)
            cout << "four" << endl;
       else if(i == 5)
            cout << "five" << endl;
       else if(i == 6)
            cout << "six" << endl;
       else if(i == 7)
            cout << "seven" << endl;
       else if(i == 8)
            cout << "eight" << endl;
       else if(i == 9)
            cout << "nine" << endl;
       else if(i > 9 && (i % 2 == 0))
            cout << "even" << endl;
       else
           cout << "odd" << endl;
    }

    return 0;
    }
