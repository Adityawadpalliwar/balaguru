#include <stdio.h>
#include <stdio.h>

struct energy {
    char name[80];
    float watt;
    int no;
    float use_hour;
    int days;
   
};

int main() {
    struct energy Bill[100];
    int n, i;
    float amt = 0, total, ef, grand_total;
    int total_units=0;

    // Define fixed charges
    const int fc = 200;   // Fixed Charges
    const int tc = 138;   // Transmission Charges
    const int fuelc = 100; // Fuel Charges

    printf("Enter the number of appliances: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("\nEnter the name of Appliance: ");
        getchar(); 
        scanf("%[^\n]s", Bill[i].name);
        printf(" \n Enter the number of %s ",Bill[i].name);
        scanf("%d",&Bill[i].no);
        printf("Enter the Wattage: ");
        scanf("%f", &Bill[i].watt);
        printf("Enter usage in hours per day: ");
        scanf("%f", &Bill[i].use_hour);
        printf("Enter the number of days: ");
        scanf("%d", &Bill[i].days);
    }

    for (i = 0; i < n; i++) {
        float units = (float)((Bill[i].watt * Bill[i].no * Bill[i].use_hour * Bill[i].days) / 1000.0);
        printf("\nAppliance: %s, Units consumed: %f", Bill[i].name, units);
        total_units += units;
       
    }
       if ( total_units <= 100) {
            amt +=  total_units * 4.71;
        } else if ( total_units <= 300) {
            amt += (100 * 4.71) + (( total_units - 100) * 10.29);
        } else if ( total_units <= 500) {
            amt += (100 * 4.71) + (200 * 10.29) + (( total_units - 300) * 14.55);
        } else {
            amt += (100 * 4.71) + (200 * 10.29) + (200 * 14.55) + (( total_units - 500) * 16.64);
        }

    total = amt + fc + tc + fuelc;
    ef = total * 0.16;  // Electricity fees (16% of total)
    grand_total = total + ef;

    printf("\n\nFixed Charges: %d", fc);
    printf("\nTransmission Charges: %d", tc);
    printf("\nFuel Charges: %d", fuelc);
    printf("\nTotal Electricity Bill: %.2f\n", grand_total);

    return 0;
}