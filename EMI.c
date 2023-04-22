// Q.1 Mr. Shyam brought a new car of work 15,50,000 INR. He paid an amount of 85,000 INR as a down
// payment, and for the rest of the amount, he took a loan from a bank. The bank charges 16% of the
// rate of interest per month. If Shyam chooses the repayment period of 60 months, what is the EMI
// (Equated monthly installments) amount he needs to pay per month?

#include <stdio.h>
int main()
{
    float loan_amount, a, paid_amount, r, simple_emi;
    int t;
    paid_amount = 85000;
    loan_amount = 1550000 - paid_amount;
    t = 60;
    r = 16;

    simple_emi = (loan_amount + (loan_amount * 16 * 60) / (100 * 12)) / t;

    printf("The monthly emi in simple interest is : %f\n", simple_emi);

    return 0;
}