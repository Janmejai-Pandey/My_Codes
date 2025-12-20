#include <stdio.h>
#include <string.h>

struct Product
{
    char name[50];
    char category[50];
    float price;
    int stock;
};

struct Product* cheapestProductInCategory(struct Product* products, int count, char* category)
{
    struct Product* cheapest = NULL;
    for (int i = 0; i < count; i++)
    {
        if (strcmp(products[i].category, category) == 0)
        {
            if (cheapest == NULL || products[i].price < cheapest->price)
            {
                cheapest = &products[i];
            }
        }
    }
    return cheapest;
}

void restockProduct(struct Product* product, int quantity)
{
    product->stock += quantity;
}

int main()
{
    int n;
    printf("Enter number of products: ");
    scanf("%d", &n);

    struct Product products[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter details for product %d\n", i + 1);
        printf("Name: ");
        scanf("%s", products[i].name);
        printf("Category: ");
        scanf("%s", products[i].category);
        printf("Price: ");
        scanf("%f", &products[i].price);
        printf("Stock: ");
        scanf("%d", &products[i].stock);
    }

    char category[50];
    printf("Enter category to find cheapest product: ");
    scanf("%s", category);

    struct Product* cheapest = cheapestProductInCategory(products, n, category);
    if (cheapest != NULL)
    {
        printf("Cheapest product in category %s:\n", category);
        printf("Name: %s\n", cheapest->name);
        printf("Price: %g\n", cheapest->price);
        printf("Stock: %d\n", cheapest->stock);

        int restockQty;
        printf("Enter quantity to restock: ");
        scanf("%d", &restockQty);
        restockProduct(cheapest, restockQty);
        printf("Updated stock for %s: %d\n", cheapest->name, cheapest->stock);
    }
    else
    {
        printf("No products found in category %s\n", category);
    }

    printf("Janmejai Pandey - 2501030199 -B4\n");
    return 0;
}