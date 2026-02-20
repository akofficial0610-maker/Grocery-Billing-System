#include <stdio.h>
#include <string.h>

int main() 
{
    char product[50];
    int quantity;
    float price, total = 0;
    float discount = 0, gst = 0, finalAmount;
    int n, i;

    printf("===== GROCERY BILLING SYSTEM =====\n");

    printf("Enter number of products: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        printf("\nProduct %d\n", i);

        printf("Enter product name: ");
        scanf("%s", product);

        printf("Enter price (in Rs): ");
        scanf("%f", &price);

        printf("Enter quantity: ");
        scanf("%d", &quantity);

        total = total + (price * quantity);
    }

    printf("\n----------------------------------");
    printf("\nTotal Amount = Rs %.2f", total);

    // Discount (10% if total > 1000)
    if(total > 1000)
    {
        discount = total * 0.10;
        printf("\nDiscount (10%%) = Rs %.2f", discount);
    }

    float amountAfterDiscount = total - discount;

    // GST 5% (Indian grocery GST)
    gst = amountAfterDiscount * 0.05;
    printf("\nGST (5%%) = Rs %.2f", gst);

    finalAmount = amountAfterDiscount + gst;

    printf("\n----------------------------------");
    printf("\nFinal Amount to Pay = Rs %.2f", finalAmount);
    printf("\n----------------------------------");

    printf("\nThank You! Visit Again\n");

    return 0;
}
