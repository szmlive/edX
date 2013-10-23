/*
 * =====================================================================================
 *
 *       Filename:  expr.cpp
 *
 *    Description:  expr
 *
 *        Version:  1.0
 *        Created:  2013年10月22日 22时21分41秒
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

int  main ( int argc, char * argv[] )
{
    char str_expr[256];
    char str_tmp[256];
    char opera;
    int  pos;
    long num1=0L;
    long num2=0L;

    memset( str_expr, 0x00, sizeof( str_expr ) );
    cin.getline( str_expr, sizeof(str_expr) );

    if( NULL != strpbrk( str_expr, "\t" ) ) {
        cout<<"INCLUDE TAB"<<endl;
        return -1;
    }

    pos = strcspn( str_expr, "+-*" );
    
    memset( str_tmp, 0x00, sizeof( str_tmp ) );
    strncpy( str_tmp, str_expr, pos );
    num1 = atol( str_tmp );

    opera = *(str_expr + pos );
    
    memset( str_tmp, 0x00, sizeof( str_tmp ) );
    strcpy( str_tmp, str_expr + pos + 1 );
    num2 = atol( str_tmp );

    switch ( opera )
    {
        case '+': cout<<num1+num2<<endl;break;
        case '-': cout<<num1-num2<<endl;break;
        case '*': cout<<num1*num2<<endl;break;
        default: cout<<"ERROR op"<<endl; break;
    };

    return 0;
}
