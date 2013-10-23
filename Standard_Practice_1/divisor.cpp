/*
 * =====================================================================================
 *
 *       Filename:  divisor.cpp
 *
 *    Description:  最大公约数
 *
 *        Version:  1.0
 *        Created:  2013年10月22日 23时10分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  szmlive (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

long gcd(long a, long b )
{
    return b == 0 ? a : gcd( b, a%b );
}

int main( int argc, char * argv[] )
{
    long num1=0L;
    long num2=0L;

    cout<<319%377<<endl;
    scanf( "%ld %ld", &num1, &num2 );
    cout<<num1<<num2<<endl;

    cout<<gcd(num1, num2)<<endl;

    return 0;
}

