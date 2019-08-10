#include<iostream>
using namespace std;
int main()
{
   int price_coffee,distotal_cost,total_cost = 0;
   cin >> price_coffee >> distotal_cost;
   distotal_cost = 100 - distotal_cost;
   while(price_coffee>0)
   {
       total_cost = total_cost + price_coffee;
       price_coffee = (distotal_cost*price_coffee) / 100;
   }
   cout <<  total_cost;
   return 0;
}