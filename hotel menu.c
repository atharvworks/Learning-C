#include <stdio.h>
/* Service 1 : lodging */
float lodgingBill(int type, int nights)
{
float rate = 0;
switch (type)
{
case 1: rate = 1500; break;
case 2: rate = 2200; break;
case 3: rate = 3500; break;
default: printf("Invalid room type\n");
}
return rate * nights;
}
/* Service 2 : food */
float foodBill(int item, int qty)
{
float price = 0;
switch (item)
{
case 1: price = 200; break;
case 2: price = 350; break;
case 3: price = 450; break;
default: printf("Invalid food item\n");
}
return price * qty;
}
