#include <stdio.h>
struct Item 
{
    char name[50];
    int quantity;
    float price;
};

void main() 
{
    int numItems;
    printf("-------------------------------------------------\n");
    printf("        ***** WELCOME TO OUR SHOP*****\n");
    printf("-------------------------------------------------\n");
    printf("ENTER THE NUMBER OF ITEMS ON THE BILL  : ");
    scanf("%d", &numItems);

    struct Item billItems[numItems];

    for (int i = 0; i < numItems; i++) 
    {
        printf("-------------------------------------------------\n");
        printf("ENTER THE NAME OF ITEM %d: ", i + 1);
        scanf("%s", billItems[i].name);
        printf("ENTER THE QUANTITY OF ITEM %d: ", i + 1);
        scanf("%d", &billItems[i].quantity);
        printf("ENTER THE PRICE OF ITEM %d: ", i + 1);
        scanf("%f", &billItems[i].price);
    }
    printf("-------------------------------------------------\n");
    printf("%-20s%-10s%-10s%-10s\n", "Item Name", "Quantity", "Price", "Total");
    printf("-------------------------------------------------\n");

    float totalCost = 0.0;

    for (int i = 0; i < numItems; i++) 
    {
        float itemTotal = billItems[i].quantity * billItems[i].price;
        totalCost += itemTotal;
        printf("%-20s%-10d$%.2f$%.2f\n", billItems[i].name, billItems[i].quantity, billItems[i].price, itemTotal);
    }

    printf("-------------------------------------------------\n");
    printf("Total Cost: $%.2f\n", totalCost);
    printf("-------------------------------------------------\n");
}