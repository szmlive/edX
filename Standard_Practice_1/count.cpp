/*
 * =====================================================================================
 *
 *       Filename:  count.cpp
 *
 *    Description:  字母统计
 *
 *        Version:  1.0
 *        Created:  2013年10月23日 21时00分22秒
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

#define TEXT_MAX 4096

using namespace std;

int main ( int argc, char * argv[] )
{
    char *str_text=(char*)malloc( (TEXT_MAX + 1)*sizeof(char) );
    int  letter[27]={ 0 };
    int  i;

    memset( str_text, 0x00, sizeof(string) );
    fgets( str_text, TEXT_MAX, stdin );

    for( i=0; '\n' != str_text[i]&&i<TEXT_MAX; i++ )
    {
        printf( "%c\n", str_text[i] );
        if( isalpha( str_text[i]) )
        {
            if( islower( str_text[i] ) )
            {
                printf( "%c%d\n", str_text[i], str_text[i]-'a');
                letter[str_text[i] -'a']++;
            }
            else
            {
                printf( "%c%d\n", str_text[i], str_text[i]-'A');
                letter[str_text[i] -'A']++;
            }
        }
    }

    for( i=0; i < 'Z'-'A'; i++ )
    {
        if( 0 != letter[i] )
        {
            printf("%c: %d\n", 'A'+i, letter[i] );
        }
    }

    return 0;
}


