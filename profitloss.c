//Q22: Write a program to find profit or loss percentage given cost price and selling price.

/*
Sample Test Cases:
Input 1:
1000 1200
Output 1:
Profit 20%

Input 2:
1000 800
Output 2:
Loss 20%

Input 3:
1000 1000
Output 3:
No Profit No Loss

*/
#include <stdio.h>
int main() {
    float costPrice, sellingPrice, profit, loss;
    
    // Input cost price and selling price
    printf("Enter the cost price and selling price: ");
    scanf("%f %f", &costPrice, &sellingPrice);
    
    // Calculate profit or loss
    if(sellingPrice > costPrice) {
        profit = sellingPrice - costPrice;
        printf("Profit %.2f%%\n", (profit / costPrice) * 100);
    } else if(costPrice > sellingPrice) {
        loss = costPrice - sellingPrice;
        printf("Loss %.2f%%\n", (loss / costPrice) * 100);
    } else {
        printf("No Profit No Loss\n");
    }
    
    return 0;
}