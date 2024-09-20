# Australian Tax Estimator (2021-22)
updated for 2023-24
## Overview

This C program calculates the estimated Australian tax for the financial year 2021-22 based on income provided by the user. The tax brackets and rates are defined as per the official guidelines from the Australian Taxation Office (ATO).

## Purpose

To provide an estimation of tax payable based on user input for taxable income, according to the tax brackets applicable for the 2021-22 financial year.

## Features

- Calculates tax based on predefined income brackets.
- Outputs estimated tax payable based on user input.
- Displays a disclaimer regarding the official status of the calculator and the absence of the Medicare Levy in calculations.

## Tax Brackets (2021-22)

- **$0 - $18,200**: No tax payable.
- **$18,201 - $45,000**: 19% on income over $18,200.
- **$45,001 - $120,000**: $5,092 plus 32.5% on income over $45,000.
- **$120,001 - $180,000**: $29,467 plus 37% on income over $120,000.
- **$180,001 and above**: $51,667 plus 45% on income over $180,000.

## Usage

1. Compile the C program using a C compiler.
2. Run the executable file.
3. Enter your taxable income for the 2021-22 financial year when prompted (rounded to the nearest dollar, without commas or decimal points).
4. View the estimated tax payable as per the input income.

## Example
```bash
What was your taxable income for the 2021-22 Financial Year? (rounded to the nearest dollar without commas or full stops): 55000
Your estimated total tax payable for the 2021-22 Financial Year is: 10992.00
```

## Improvements to be Made

- **Modularization**: Refactor the program to break down the calculations into functions for better readability and maintainability.
- **Input Validation**: Implement error handling to manage non-integer inputs and provide user-friendly feedback.

## Disclaimer

This program is not an official calculator from the ATO. For official calculations, please visit the [ATO website](https://www.ato.gov.au).
