#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 5

int h[TABLE_SIZE] = {0};

void insert() {
    int key, index, i, flag = 0, hkey;
    printf("\nEnter a value to insert into the hash table: ");
    scanf("%d", &key);

    // Check for duplicate values
    for (i = 0; i < TABLE_SIZE; i++) {
        if (h[i] == key) {
            printf("\nDuplicate element. Cannot insert.\n");
            return;
        }
    }

    hkey = key % TABLE_SIZE;
    for (i = 0; i < TABLE_SIZE; i++) {
        index = (hkey + i) % TABLE_SIZE;
        if (h[index] == 0) {
            h[index] = key;
            break;
        }
    }

    if (i == TABLE_SIZE)
        printf("\nElement cannot be inserted.\n");
}

void search() {
    int key, index, i, flag = 0, hkey;
    printf("\nEnter the search element: ");
    scanf("%d", &key);
    hkey = key % TABLE_SIZE;

    for (i = 0; i < TABLE_SIZE; i++) {
        index = (hkey + i) % TABLE_SIZE;
        if (h[index] == key) {
            printf("Value is found at index %d\n", index);
            return;
        }
    }

    printf("\nValue is not found.\n");
}

void display() {
    int i;
    printf("\nElements in the hash table are:\n");

    for (i = 0; i < TABLE_SIZE; i++)
        printf("At index %d \t Value = %d\n", i, h[i]);
}

int main() {
    int opt, i;

    while (1) {
        printf("\nPress 1. Insert\t 2. Display \t3. Search \t4. Exit \n");
        scanf("%d", &opt);

        switch (opt) {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:
                exit(0);
        }
    }

    return 0;
}
