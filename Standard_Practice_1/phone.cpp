/*
 * =====================================================================================
 *
 *       Filename:  phone.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2013年10月23日 21时44分36秒
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

#include <time.h>

using namespace std;

int main( int argc, char * argv[] )
{
    char  bgn_time[8+1];
    char  end_time[8+1];
    char  tmp[2+1];
    struct tm  t1, t2;
    int   sec1=0;
    int   sec2=0;

    memset( bgn_time, 0x00, sizeof( bgn_time) );
    memset( end_time, 0x00, sizeof( end_time) );
    memset( tmp, 0x00, sizeof( tmp ) );

    scanf( "%s %s", bgn_time, end_time );

    if( 8 != strlen( bgn_time) || 8 != strlen(end_time) )
       return -1;

    memset( tmp, 0x00, sizeof( tmp ) );
    strncpy( tmp, bgn_time, 2 );
    t1.tm_hour = atoi( tmp );
    memset( tmp, 0x00, sizeof( tmp ) );
    strncpy( tmp, bgn_time+3, 2 );
    t1.tm_min = atoi( tmp );
    memset( tmp, 0x00, sizeof( tmp ) );
    strncpy( tmp, bgn_time+6, 2 );
    t1.tm_sec = atoi( tmp );

    sec1 = t1.tm_sec + t1.tm_min * 60 + t1.tm_hour * 60 * 60;

    memset( tmp, 0x00, sizeof( tmp ) );
    strncpy( tmp, end_time, 2 );
    t2.tm_hour = atoi( tmp );
    memset( tmp, 0x00, sizeof( tmp ) );
    strncpy( tmp, end_time+3, 2 );
    t2.tm_min = atoi( tmp );
    memset( tmp, 0x00, sizeof( tmp ) );
    strncpy( tmp, end_time+6, 2 );
    t2.tm_sec = atoi( tmp );

    sec2 = t2.tm_sec + t2.tm_min * 60 + t2.tm_hour * 60 * 60;

    cout<<abs(sec2-sec1)<<endl;
    
    return 0;
}

