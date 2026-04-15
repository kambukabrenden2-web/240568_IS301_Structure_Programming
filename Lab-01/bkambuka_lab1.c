/*  Problem:
    Algorithm:
    Developed by: Brenden Kambuka
    Date: 3-3-2026

*/

#include <stdio.h>

int main(){

//your program statements goes here


    // Constants
    const float TV_PRICE = 400.00;
    const float MONITOR_PRICE = 220.00;
    const float FLASH_DRIVE_PRICE = 35.20;
    const float HARD_DRIVE_PRICE = 150.00;
    const float PRINTER_PRICE = 300.00;
    const float TAX_RATE = 0.0835;

    // Variables
    int tvQuantity, monitorQuantity, flashDriveQuantity, hardDriveQuantity, printerQuantity;
    float tvTotal, monitorTotal, flashDriveTotal, hardDriveTotal, printerTotal;
    float subtotal, taxAmount, total;

    // Input Quantities
    printf("How Many TVs Were Sold? ");
    scanf("%d", &tvQuantity);

    printf("How Many Monitors Were Sold? ");
    scanf("%d", &monitorQuantity);

    printf("How Many Flash Drives Were Sold? ");
    scanf("%d", &flashDriveQuantity);

    printf("How Many Hard Drives Were Sold? ");
    scanf("%d", &hardDriveQuantity);

    printf("How Many Deskjet Printers Were Sold? ");
    scanf("%d", &printerQuantity);

    // Calculate Totals
    tvTotal = tvQuantity * TV_PRICE;
    monitorTotal = monitorQuantity * MONITOR_PRICE;
    flashDriveTotal = flashDriveQuantity * FLASH_DRIVE_PRICE;
    hardDriveTotal = hardDriveQuantity * HARD_DRIVE_PRICE;
    printerTotal = printerQuantity * PRINTER_PRICE;

    // Calculate Subtotal
    subtotal = tvTotal + monitorTotal + flashDriveTotal + hardDriveTotal + printerTotal;

    // Calculate Tax
    taxAmount = subtotal * TAX_RATE;

    // Calculate Total
    total = subtotal + taxAmount;

    // Output Bill
    printf("\nQTY\t\tDESCRIPTION\t\tUNIT PRICE\t\tTOTAL PRICE\n");
    printf("-------------------------------------------------------------------\n");
    printf("%d\t\tTV\t\t\t%.2f\t\t\t%.2f\n", tvQuantity, TV_PRICE, tvTotal);
    printf("%d\t\tMonitor\t\t\t%.2f\t\t\t%.2f\n", monitorQuantity, MONITOR_PRICE, monitorTotal);
    printf("%d\t\tFlash Drive\t\t%.2f\t\t\t%.2f\n", flashDriveQuantity, FLASH_DRIVE_PRICE, flashDriveTotal);
    printf("%d\t\tHard Drive\t\t%.2f\t\t\t%.2f\n", hardDriveQuantity, HARD_DRIVE_PRICE, hardDriveTotal);
    printf("%d\t\tDeskjet Printer\t\t%.2f\t\t\t%.2f\n", printerQuantity, PRINTER_PRICE, printerTotal);
    printf("Subtotal:\t\t\t\t\t%.2f\n", subtotal);
    printf("Tax:\t\t\t\t\t\t%.2f\n", taxAmount);
    printf("Total:\t\t\t\t\t\t%.2f\n", total);


return 0;
}
