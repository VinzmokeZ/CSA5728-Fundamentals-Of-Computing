#include <stdio.h>

int main() {
   
    printf("Sharan.B\n");
    printf("Reg No: 192210486\n");

    
    double loanAmount = 3000.0;
    double monthlyPayment = 85.0;
    double monthlyInterestRate = 0.01;
    int months = 0;

    
    printf("Loan Amount: $%.2lf\n", loanAmount);
    printf("Monthly Payment: $%.2lf\n", monthlyPayment);

    
    while (loanAmount > 0) {
        
        double interest = loanAmount * monthlyInterestRate;

      
        double principal = monthlyPayment - interest;

        
        loanAmount -= principal;

       
        printf("\nMonth %d:\n", ++months);
        printf("Interest: $%.2lf\n", interest);
        printf("Principal: $%.2lf\n", principal);
        printf("Balance: $%.2lf\n", loanAmount);
    }

    
    int years = months / 12;
    int remainingMonths = months % 12;

    
    double totalInterest = 3000.0 - loanAmount;

   
    printf("\nTotal Years to Pay Back: %d\n", years);
    printf("Total Months to Pay Back: %d\n", remainingMonths);
    printf("Total Interest Paid: $%.2lf\n", totalInterest);

    return 0;
}

