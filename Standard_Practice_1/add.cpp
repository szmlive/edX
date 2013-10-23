/*
 * =====================================================================================
 *
 *       Filename:  add.cpp
 *
 *    Description:  add
 *
 *        Version:  1.0
 *        Created:  2013年10月22日 21时53分02秒
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
#include <iostream>

using namespace std;

int main(int argc, char * argv[] )
{
    long arg=0L;
    long result=0L;

    /* cout<<"INPUT number1 number2"<<endl;
     **/
    scanf( "%ld %ld", &arg, &result );

    cout<<result+arg<<endl;

    return 0;
}

