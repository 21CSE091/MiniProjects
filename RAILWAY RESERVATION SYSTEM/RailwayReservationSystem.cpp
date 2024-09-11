#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int first=10,second=20,third=30,a;
struct node                                                    //defining a structure
{
int ticketno;                                                                
int phoneno;
char name[100];                                                            
int age;
int aadhar;
}s;
void booking()                       //defining a function for ticket booking
{
printf("\nStep 1: Ticket Booking\n");
printf("\n\tEnter details:\n");
printf("\t1.Name of the Passanger:");
scanf("%s",s.name);
printf("\t2.Contact Number:");
scanf("%d",&s.phoneno);
printf("\t3.Age:");
scanf("%d",&s.age);
printf("\t4.Aadhar Number:");
scanf("%d",&s.aadhar);
printf("\t5.Number of tickets needed:");
scanf("%d",&s.ticketno);
}
void availability()           //defining a function for checking availability
{
int c,one=350,two=250,three=150,total;
printf("\nStep 2: Checking Availability of Ticket\n");
printf("\n\t1.First class\n\t2.Second class\n\t3.Third class\n");
printf("\n\tEnter your choice:");
scanf("%d",&c);
switch(c)
{
case 1:if(first>s.ticketno)
{
printf("\t\tSeats are available in First Class\n");
printf("\t\tTicket has been successfully booked in First Class\n");
one=one*s.ticketno;
total=one;
printf("\t\tAmount to be paid%d",total);
a=1;
first=first-s.ticketno;
}
else
{
printf("\t\tSeats are not available in First Class\n");
}
break;
case 2:   if(second>s.ticketno)
{
printf("\t\tSeats are available in Second Class\n");
printf("\t\tTicket has been successfully booked in Second Class\n");
two=two*s.ticketno;
total=two;
printf("\t\tAmount to be paid%d",total);
a=1;
second=second-s.ticketno;
}
else
{
printf("\t\tSeats are not available in Second Class\n");
}
break;
case 3:if(third>s.ticketno)
{
printf("\t\tSeats are available in Third Class\n");
printf("\t\tTicket has been successfully booked in Third Class\n");
three=three*s.ticketno;
total=three;
printf("\t\tAmount to be paid%d",total);
a=1;
third=third-s.ticketno;
}
else
{
printf("\t\tSeats are not available in Third Class\n");
}
break;
default:
 printf("\nInvalid Choice");
 break;
}
}
void cancel()                              //defining a function for cancellation
{
int c;
if(a==1)
{
printf("\nStep 3: Cancellation of Ticket");
printf("\n\t\tIf you want to cancel the ticket...press 1\n \t\tElse press any other number: ");
scanf("%d",&c);
if(c==1)
 {
  printf("\n\t\tYour ticket has been cancelled successfully");
  }
 else
 {
  exit(0);
 }
}
}
int main()                                                       //main() function
{
int n;
printf("\t\t*** Welcome to Railway Reservation System ***\t\t\t\n\n");
printf("Steps:\n");
printf("\t1.Ticket booking\n\t2.Checking availability of ticket\n\t3.Cancellation of ticket\n");
booking();                                                       //calling the function
availability();                                                  //calling the function
cancel();                                                         //calling the function
printf("\n\n\t\t\t\t*** Thank You ***\t\t");
}

