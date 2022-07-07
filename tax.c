/**************************************************************************************
Author: Asish Benny
Date: 7/07/2022
Purpose: C Program to calculate estimated Australian TAX for Year 21-22 as per ato.gov.au
***************************************************************************************/

#include <stdio.h>

int main () {
	
	int income;
	int taxReturn;
	float taxPayable;
	
	printf("\nNote: This is not an official calcualtor from the ATO. An official Calculator can be found on the ATO website. \n This calculator also does not account for the 2% Medicare Levy.");
	printf("What was your taxable income for the 2021-22 Financial Year? (rounded to the nearest dollar without commas or full stops): $");
	scanf("%d", &income);
	
	printf("\nYour reported INCOME for the 2021-22 Financial Year was: %d \n", income);
	
		if (income > 0 && income <= 18200)
		{
			taxPayable = income;
			printf("No tax payable if earning for Financial Year is less than $18200.");
		}
		else if (income > 18200 && income <= 45000)
		{
			taxPayable = (income - 18200) * 0.19; //19c for each $1 over $18,200
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else if (income > 45000 && income <= 120000)
		{
			taxPayable = 5092 +((income - 45000) * 0.325); // 5092 + 32.5c for each $1 over 45000
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else if (income > 120000 && income <= 180000)
		{
			taxPayable = 29467 +((income - 120000) * 0.37); // 29,467 + 37 for each $1 over 120,000
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else if (income > 180000)
		{
			taxPayable = 51667 +((income - 180000) * 0.45); // 51,667 + 45c for each $1 over 180,000
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else {
			printf("Could not calculate tax payable. Sorry. Please contact creator");
		}
		
	return 0;
}

/**************************************************************************************
Improvements to be made:
	Modularise program
	Error Correction for non integer values (Validate for non-integer numbers input)
***************************************************************************************/