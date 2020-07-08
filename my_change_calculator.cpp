#include <iostream>
#include <string>
#include <cmath>
#include "my_change_calculator.h"

string calculateChange(double purchase,double cash)

{
double balance;
balance=cash-purchase;
int tw_d,ten_d,five_d,one_d;
int fifty_c,Tw_c,ten_c,five_c,one_c;
int dollars;
double cent;
string result;

cout<<"The remaining change is: "<<balance<<endl;
  
dollars=floor(balance);
cent=(balance-floor(balance));
//calculating dollars
tw_d=dollars/20;
dollars=dollars%20;
result="Twenty US Dollar Bills:"+to_string(tw_d)+"\n";
  
ten_d=dollars/10;
dollars=dollars%10;
result+="Ten US Dollar Bills:"+to_string(ten_d)+"\n";
  
five_d=dollars/5;
dollars=dollars%5;
result+="Five US Dollar Bills:"+to_string(five_d)+"\n";
  
one_d=dollars/1;
result+="One US Dollar Bills:"+to_string(one_d)+"\n";

//calculating cents
fifty_c=cent/0.50;
cent=cent-fifty_c*0.50;
result+="Fifty US Cents Coins: "+to_string(fifty_c)+"\n";
  
Tw_c=cent/0.25;
cent=cent-Tw_c*0.25;
result+="Twenty-Five US Cents Coins:"+to_string(Tw_c)+"\n";
  
ten_c=cent/0.10;
cent=cent-ten_c*0.10;
result+="Ten US Cents Coins:"+to_string(ten_c)+"\n";
  
five_c=cent/0.05;
cent=cent-five_c*0.05;
result+="Five US Cents Coins:"+to_string(five_c)+"\n";
  
one_c=cent/0.01;
result+="One US Cent Coins:"+to_string(one_c)+"\n";
  
return result;
}