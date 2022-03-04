#include <stdio.h>
/* My name Is : Mahdi Jamadian.
 * My Gmail :  Mr.jamadian@gmail.com
 * Instagram :Mahdi_Jamadian
 * My Git hub : Mahdi_Jamadian
 * */

int house() /* Function to calculate the purchase price of a house for 5 years */{
    float initial_house_cost,annual_fuel_cast,tax_rate;
    printf("Enter Initial House Cost  : ");
    scanf("%f",&initial_house_cost);
    printf("Enter Annual Fuel Cost  : ");
    scanf("%f",&annual_fuel_cast);
    printf("Enter Tax  Rate : ");
    scanf("%f",&tax_rate);
    printf("The total amount of the house in five years : %3.f $ ",initial_house_cost +( ((initial_house_cost * tax_rate) + annual_fuel_cast)*5));
}
int main() {
house();
    return 0;
}
