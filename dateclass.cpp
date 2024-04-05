#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class date
{
private:
	 int day;
	 int  month;
	 int year;
public:
	date()
      {
	cout<<"day : month : year "<<endl;
      } 
      date(int d,int m ,int y)
      {
	day=d;
	month=m;
	year=y;
      }

void getdata()
      {
	cout<<"day"<<endl;
	cin>>day;
	cout<<"month"<<endl;
	cin>>month;
	cout<<"year"<<endl;
	cin>>year;
      }
	
void display()
	
      {
	cout<<day<<"-"<<month<<"-"<<year<<endl;
      }
	
void display1()
      {				
	cout<<day;
	if(month==1)
	cout<<"Jan";
	else if(month==2)
        cout<<"Feb";
	else if(month==3)
	cout<<"Mar";
	else if(month==4)
	cout<<"Apr";
	else if(month==5)
	cout<<"May";
	else if(month==6)
	cout<<"Jun";
	else if(month==7)
	cout<<"Jul";
	else if(month==8)
	cout<<"Aug";
	else if(month==9)
	cout<<"Sep";
	else if(month==10)
	cout<<"Otc";
	else if(month==11)
	cout<<"Nov";
	else if(month==12)
	cout<<"Dec";
	cout<<year%100<<endl;
      }
void leapyear()
      {
	cout<<((year%4==0 && year%100!=0) || (year%400==0))<<endl;	  
      } 
void setdate()
      {
	

};
int main()
{
	date d;
	date d1(11,11,2004);
        d.getdata();
	d.display();
	d1.display();
	d.display1();
	d1.display1();
	d.leapyear();
	d1.leapyear();
	
}
