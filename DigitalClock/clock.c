#include<stdio.h>
#include<time.h>

void fill_time(char*)  ;
int main()
{
    char time[100];
    fill_time(time);
    printf("current time : %s",time);
    return 0;
   
}
void fill_time(char* buffer)  
{
      time_t raw_time ;  //In C and C++, time_t is a data type defined in the <time.h> (or <ctime> in C++) header file, used to represent calendar time.
    struct tm *Current_time ;  // struct tm -seperate fields : year,month,day, hours, min,sec,etc

    time(&raw_time);  //The time() function in C/C++ is used to get the current calendar time. It takes a pointer to a time_t variable as an argument and fills it with the current time.
    Current_time=localtime(&raw_time); 
    strftime(buffer,50,"%I : %M:%S %p  " ,Current_time) ; //strftime() function in C/C++ is used to format date and time information into a string based on a specified format.
    
}


 