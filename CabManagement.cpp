#include<iostream>
using namespace std;
class CustomerManagement
{
protected:
int age,mno;
char gen[10],adrs[500],nm[100];
public:
void input()
{
cout<<"Enter Customer Name:"<<endl;
cin>>nm;
cout<<"Enter Customer Age:"<<endl;
cin>>age;
cout<<"Enter Customer Gender:"<<endl;
cin>>gen;
cout<<"Enter Customer Address:"<<endl;
cin>>adrs;
cout<<"Enter Customer Mobile Number:"<<endl;
cin>>mno;
cout<<"---------------------------------------------"<<endl;
}
void display()
{
cout<<"Customer Details"<<endl;
cout<<"Name :"<<nm<<endl;
cout<<"Age :"<<age<<endl;
cout<<"Gender :"<<gen<<endl;
cout<<"Address :"<<adrs<<endl;
cout<<"Mobile Number :"<<mno<<endl;
cout<<"-------------------------------------------"<<endl;
}
};
class BookingManagement
{
int h;
public:
//hotel info and managemnt
void hotel()
{ 
cout<<"Hotel "<<" Rates"<<" Distance "<<endl;
cout<<"1.paradise"<<" 2500/day"<<" 8 km"<<endl;
cout<<"2.Blues"<<" 3000/day"<<" 10 km"<<endl;
cout<<"3.Aesthetic"<<" 3200/day"<<" 11 km"<<endl;
cout<<"4.Plasma"<<" 3500/day"<<" 12 km"<<endl;
cout<<"5.De Luna"<<" 3800/day"<<" 15 km"<<endl;
cout<<"Enter Choice :"<<endl;
cin>>h;
cout<<"----------------------------------------------"<<endl;
}
void display_hotel()
{
switch(h)
{
case 1:
{
cout<<"Your hotel is Paradise and hotel number is 1."<<endl;
cout<<"Your hotel price is 2500/day"<<endl;
cout<<"Your hotel is 8 km away"<<endl;
cout<<"----------------------------------------------"<<endl;
}
break;
case 2:
{
cout<<"Your hotel is blues and hotel number is 2."<<endl;
cout<<"your hotel price is 3000/day"<<endl;
cout<<"your hotel is 10 km away"<<endl;
cout<<"------------------------------------------------"<<endl;
}
break;
case 3:
{
cout<<"Your hotel is Aesthetic and your hotel number is 3."<<endl;
cout<<"Your hotel price is 3200/day"<<endl;
cout<<"Your hotel is 11 km away"<<endl;
cout<<"---------------------------------------------------"<<endl;
}
break;
case 4:
{
cout<<"Your hotel is plasma and your hotel number is 4."<<endl;
cout<<"Your hotel price is 3500/day"<<endl;
cout<<"Your hotel is 12 km away"<<endl;
cout<<"-----------------------------------------------------"<<endl;
}
break;
case 5:
{
cout<<"Your hotel is deluna and your hotel number is 5."<<endl;
cout<<"Your hotel price is 3800/day"<<endl;
cout<<"Your hotel is 15 km away"<<endl;
cout<<"-------------------------------------------------------"<<endl;
}
break;
}
}
};
class CabManagement
{
int km;
int dis=0;
int ch,day,bill = 0; //dis =distance
public:
void cab()
{
cout<<"Enter the KM you wanna travel(100/km) :"<<endl;
cin>>km;
dis=dis+km*100; //per km 100 rs
cout<<"charges :"<<dis<<endl;
cout<<"---------------------------------------"<<endl;
}
void bill_print()
{
cout<<"enter hotel number :"<<endl;
cin>>ch;
cout<<"Enter number of days :"<<endl;
cin>>day;
cout<<"-----------------------------------------------"<<endl;
switch(ch)
{
case 1:
{
bill = day * 2500 + dis;
cout<<"bill="<<bill<<endl;
break;
} 
case 2:
{
bill=day*3000+dis;
cout<<"bill="<<bill<<endl;
break;
} 
case 3:
{
bill=day*3200+dis;
cout<<"bill="<<bill<<endl;
break;
} 
case 4:
{
bill=day*3500+dis;
cout<<"bill="<<bill<<endl;
break;
}
case 5:
{
bill=day*3800+dis;
cout<<"bill="<<bill<<endl;
break;
} 
default:
cout<<"Enter correct hotel number ."<<endl;
break;
}
}
};
int main()
{ 
int a,b,c,d;
CustomerManagement m;
BookingManagement bm;
CabManagement cm;
while(a!=4)
{
cout<<"************MENU**********"<<endl; 
cout<<"**************************"<<endl;
cout<<" 1. Customer Management :"<<endl;
cout<<" 2. Booking Management :"<<endl;
cout<<" 3. Cab Management :"<<endl;
cout<<" 4. Exit"<<endl;
cout<<"***************************"<<endl;
cin>>a;
switch(a)
{
case 1:
{
while(b!=3)
{
cout<<"Enter your choice :"<<endl;
cout<<"1.Add customer "<<endl;
cout<<"2.View Customer:"<<endl;
cout<<"---------------------------"<<endl;
cin>>b;
switch(b)
{
case 1:
m.input();
break;
case 2:
m.display();
break;
default:
cout<<"invalid"<<endl;
break;
}
break;
}
break;
}
case 2:
{
cout<<"Enter your choice :"<<endl;
cout<<"1.Add hotel"<<endl;
cout<<"2.display hotel info:"<<endl;
cout<<"--------------------------------------"<<endl;
cin>>c;
switch(c)
{
case 1:
bm.hotel();
break;
case 2:
bm.display_hotel();
break;
default:
cout<<"invalid"<<endl;
break;
}
break;
}
case 3:
{
cout<<"Enter your choice :"<<endl;
cout<<"1.Cab Management: "<<endl;
cout<<"2.Bill Print :"<<endl;
cin>>d;
cout<<"-----------------------------------"<<endl;
switch(d)
{
case 1:
cm.cab();
break;
case 2:
cm.bill_print();
break;
}
}
}
}
}
