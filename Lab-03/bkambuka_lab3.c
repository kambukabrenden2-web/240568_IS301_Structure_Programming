#include <stdio.h>
#include <stdlib.h>

int main() 
{
    FILE *inFile, *outFile;

    char empNo[10];
    int dept;
    float payRate;
    char exempt;
    int hoursWorked;
    float basePay;

    char header[100];

    /* Open employee file for reading */
    inFile = fopen("employee.txt", "r");

    if (inFile == NULL)
    {
        printf("Error opening employee.txt\n");
        return 1;
    }

    /* Open payroll register file for writing */
    outFile = fopen("payroll_register.txt", "w");

    if (outFile == NULL)
    {
        printf("Error creating payroll_register.txt\n");
        fclose(inFile);
        return 1;
    }

    /* Read and discard first line (header) */
    fgets(header, sizeof(header), inFile);

    /* Write headings to output file */
    fprintf(outFile, "%-15s %-12s %-10s %-10s %-15s %-10s\n",
            "EmployeeNo", "Department", "PayRate",
            "Exempt", "HoursWorked", "BasePay");

    fprintf(outFile, "--------------------------------------------------------------------------\n");

    /* Read employee records */
    while (fscanf(inFile, "%s %d %f %c %d",
                  empNo, &dept, &payRate, &exempt, &hoursWorked) == 5)
    {
        /* Calculate base pay */
        basePay = payRate * hoursWorked;

        /* Write to payroll register */
        fprintf(outFile, "%-15s %-12d %-10.2f %-10c %-15d %-10.2f\n",
                empNo, dept, payRate, exempt, hoursWorked, basePay);
    }

    /* Close files */
    fclose(inFile);
    fclose(outFile);

    printf("Payroll register has been created.\n");

    return 0;
}