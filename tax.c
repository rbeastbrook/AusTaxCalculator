/**************************************************************************************
Author: Asish Benny
Date: 7/07/2022
Purpose: C Program to calculate estimated Australian TAX for Year 21-22 as per ato.gov.au
***************************************************************************************/

#include <stdio.h>
#define taxBracket0 18200
#define taxBracket1 45000
#define taxBracket2 120000
#define taxBracket3 180000
#define fixedCents1 0.19
#define fixedCents2 0.325
#define fixedCents3 0.37
#define fixedCents4 0.45
#define fixedDollar2 5092
#define fixedDollar3 29467
#define fixedDollar4 51667

int main () {
	
	int income;
	int taxReturn;
	float taxPayable;
	
	//Australian Tax Brackets as per ATO Website
	printf("\nNote: This is not an official calcualtor from the ATO. An official Calculator can be found on the ATO website. \n This calculator also does not account for the 2% Medicare Levy.");
	printf("What was your taxable income for the 2021-22 Financial Year? (rounded to the nearest dollar without commas or full stops): $");
	scanf("%d", &income);
	
	printf("\nYour reported INCOME for the 2021-22 Financial Year was: %d \n", income);
	
		if (income > 0 && income <= taxBracket0)
		{
			taxPayable = income;
			printf("No tax payable if earning for Financial Year is less than $%d.", taxBracket0);
		}
		else if (income > taxBracket0 && income <= taxBracket1)
		{
			taxPayable = (income - taxBracket0) * fixedCents1; //19c for each $1 over $18200
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else if (income > taxBracket1 && income <= taxBracket2)
		{
			taxPayable = fixedDollar2 +((income - taxBracket1) * fixedCents2); // 5092 + 32.5c for each $1 over 45000
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else if (income > taxBracket2 && income <= taxBracket3)
		{
			taxPayable = fixedDollar3 +((income - taxBracket2) * fixedCents3); // 29,467 + 37 for each $1 over 120,000
			printf("\nYour estimated total tax payable for the 2021-22 Financial Year is: %0.2f", taxPayable);
		}
		else if (income > taxBracket3)
		{
			taxPayable = fixedDollar4 +((income - taxBracket3) * fixedCents4); // 51,667 + 45c for each $1 over 180,000
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