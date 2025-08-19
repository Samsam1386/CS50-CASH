#include  <cs50.h>
#include <stdio.h>

int main(void)
{

int change;
do {
 change = get_int(" change owed in cents :  ");
}

while ( change < 0);




 int quarters = change / 25;
 change = change % 25;

int dimes = change / 10;
change = change % 10 ;

int nickles = change / 5;
 change = change % 5;

int pennies = change /1 ;
 change = change % 1 ;


 int total_amount=( quarters + dimes + nickles + pennies);

  printf("%i\n ", total_amount);








}
