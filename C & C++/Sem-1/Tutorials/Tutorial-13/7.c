// Create a structure to store details of smartphones and their features. The details should
// include smartphone name, price, battery capacity, RAM size, storage size, and camera quality
// (measured on a scale from 1 to 10). Declare a structure pointer and use it to access the
// structure elements. Define a function best_phone(char criteria[], structure array) to list the
// best smartphone according to a feature given by the user (like highest battery capacity or best
// camera quality). You may define additional utility functions if required.

#include <stdio.h>
#include <string.h>

struct Smartphone
{
    char name[50];
    float price;
    int battery;
    int ram;
    int storage;
    int camera;
};

void best_phone(char criteria[], struct Smartphone phones[], int n)
{
    int best = 0;
    for (int i = 1; i < n; i++)
    {
        if (strcmp(criteria, "battery") == 0)
        {
            if (phones[i].battery > phones[best].battery)
                best = i;
        }
        else if (strcmp(criteria, "camera") == 0)
        {
            if (phones[i].camera > phones[best].camera)
                best = i;
        }
        else if (strcmp(criteria, "ram") == 0)
        {
            if (phones[i].ram > phones[best].ram)
                best = i;
        }
        else if (strcmp(criteria, "storage") == 0)
        {
            if (phones[i].storage > phones[best].storage)
                best = i;
        }
        else if (strcmp(criteria, "price") == 0)
        {
            if (phones[i].price < phones[best].price)
                best = i;
        }
    }

    printf("Best smartphone based on %s:\n", criteria);
    printf("Name: %s\n", phones[best].name);
    printf("Price: %.2f\n", phones[best].price);
    printf("Battery: %d mAh\n", phones[best].battery);
    printf("RAM: %d GB\n", phones[best].ram);
    printf("Storage: %d GB\n", phones[best].storage);
    printf("Camera Quality: %d/10\n", phones[best].camera);
}

int main()
{
    int n;
    printf("Enter number of smartphones: ");
    scanf("%d", &n);

    struct Smartphone phones[n];
    struct Smartphone *ptr = phones;

    for (int i = 0; i < n; i++)
    {
        printf("Enter details for smartphone %d\n", i + 1);
        printf("Name: ");
        scanf("%s", ptr[i].name);
        printf("Price: ");
        scanf("%f", &ptr[i].price);
        printf("Battery Capacity (mAh): ");
        scanf("%d", &ptr[i].battery);
        printf("RAM Size (GB): ");
        scanf("%d", &ptr[i].ram);
        printf("Storage Size (GB): ");
        scanf("%d", &ptr[i].storage);
        printf("Camera Quality (1-10): ");
        scanf("%d", &ptr[i].camera);
    }

    char criteria[20];
    printf("Enter criteria for best smartphone (battery/camera/ram/storage/price): ");
    scanf("%s", criteria);

    best_phone(criteria, ptr, n);

    printf("Janmejai Pandey - 2501030199 -B4\n");
    return 0;
}