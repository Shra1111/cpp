#include<iostream>
#include<iomanip>
using namespace std;
class Date
{
	 int day;
	 int  month;
	 int year;
      public:
         Date()
{
      day=1;
      month=1;
      year=2000;
}
void getDate()
{
   cout<<"day month year";
   cin>>day>>month>>year;
    if(day>31)
    {
     cout<<"invalid day";
     }
    else if(month>12)
{
     cout<<"invalid month";
}}
void putDate()
{
  cout<<"\nage is"<<year<<"years"<<month<<"month and"<<day<<"days";
}

Date ageCalculate(Date & dob,Date &cd);
};
Date Date::ageCalculate(Date &dob,Date &cd)
{
    Date cal;
    int monthcode[12]={31,((dob.year%4==0&&dob.year%100!=0||dob.year%400==0||cd.year%      4==0&&cd.year%100!=0||cd.year%400==0)?29:28),31,30,31,30,31,31,30,31,30,31};
if(dob.day>cd.day)
{
    cd.day=cd.day+monthcode[cd.month-2];
    cal.day=cd.day-dob.day;
    cd.month=cd.month-1;
} 
else

    cal.day=cd.day-dob.day;
    if(dob.month>cd.month)
{ 
    cd.month=cd.month=12;
    cd.year=cd.year-1;
    cal.month=cd.month=dob.month;
}
 else


  cal.month=cd.month-dob.month;
  cal.year=cd.year-dob.year;
  return cal;
}
int main()
{
   Date dob,td,cal;
   cout<<"enter date of birth";
   dob.getDate();
   cout<<"enter current date";
   td.getDate();
   cal=dob.ageCalculate(dob,td);
   cal.putDate();
}





   
