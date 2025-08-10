#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define MAX_SIZE 100

int arr[MAX_SIZE];
int size = 0;


void create() {
    printf("Enter the size of the array you want to create? ");
    scanf("%d", &size);


    printf("Enter the elements: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);

    }

    return;

}


void display() {

    printf("The elements in the array are: ");
    for (int i = 0; i < size; i++) {

        printf("%d \n", arr[i]);


    }
};

void insert() {
    int element;
    int position;
    printf("Enter the element you want to enter: ");
    scanf("%d", &element);

    printf("Enter the position where you want to enter");
    scanf("%d", &position);


    for (int i = size; i > position; i--) {

        arr[i] = arr[i - 1];


    }

    arr[position] = element;
    size++;
    printf("The size of array is %d", size);
};

void delete_element(int del_pos) {


    for (int i = del_pos; i < size; i++) {

        arr[i] = arr[i + 1];



    }

    size--;
};

int linear_search() {
    int element, i;

    printf("Enter the element you want to search ");
    scanf("%d", &element);


    for (i = 0; i < size; i++) {
        if (arr[i] == element) {
            return i;
        }
    }

    return-1;
}

int binarySearch() {
    int low = 0, high = size - 1, n;

    printf("Enter the element you want to search ");
    scanf("%d", &n);

    while (low < high) {
        int mid = (low + high) / 2;
        if (arr[mid] == n) {
            return mid;
        }

        else {
            if (arr[mid] > n) {
                high = mid - 1;

            }
            else {
                low = mid + 1;
            }

        }
    }

    return -1;

}

void swap(int* arr, int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


void bubbleSort() {
    int n = size;
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < (n - i - 1); j++) {
            if (arr[j] > arr[j + 1]) {

                swapped = true;
                swap(arr, j, j + 1);

            }
        }

        if (swapped == false) {
            break;
        }
    }
}

void unique_arr() {
    bubbleSort();

    int curr = 0;
    while (curr != size - 1) {
        if (arr[curr] == arr[curr + 1]) {
            delete_element(curr + 1);
        }
        else {
            curr = curr + 1;
        }
    }
}

int inversion() {
    int inversionNum = 0;
    for (int i = 0; i < size; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                inversionNum++;

            }


        }
        return inversionNum;
    }

    int main()

    {
        int choice;

        do {
            printf("\n——MENU——\n");
            printf("1. CREATE\n");
            printf("2. DISPLAY\n");
            printf("3. INSERT\n");
            printf("4. DELETE\n");
            printf("5. LINEAR SEARCH\n");
            printf("6. BINARY SEARCH\n");
            printf("7. BUBBLE SORT\n");
            printf("8. UNIQUE ARRAY\n");
            printf("9. INVERSIONS\n");
            printf("10. EXIT\n");
            printf("Enter your choice: ");
            scanf("%d", &choice);



            switch (choice) {
            case 1:
                create();
                break;


            case 2:
                display();
                break;


            case 3:
                insert();
                break;
            case 4:
                int del_pos;
                printf("Enter the positon of the element you wnat to delete: ");
                scanf("%d", &del_pos);
                delete_element(del_pos);
                break;

            case 5:

                int result = linear_search();
                if (result != -1) {
                    printf("Element found at position: %d\n", result);

                }
                else {
                    printf("Element not found.\n");
                }
                break;

            case 6:
                result = binarySearch();
                if (result != -1) {
                    printf("Element found at position: %d\n", result);

                }
                else {
                    printf("Element not found.\n");
                }
                break;

            case 7:
                printf("The original array is: \n");
                for (int i = 0; i < size; i++) {
                    printf("%d \n", arr[i]);

                }
                bubbleSort();
                printf("The sorted array is: \n");
                for (int i = 0; i < size; i++) {
                    printf("%d \n", arr[i]);

                }
                break;

            case 8:
                unique_arr();
                printf("The unique array is: \n");
                for (int i = 0; i < size; i++) {
                    printf("%d \n", arr[i]);

                }

                printf("The count of unique elements in the array is: %d", size);
                break;


            case 9:
                int invNum = inversion();
                printf("The number of inversions are %d", invNum);
                break;



            case 10:
                printf("Exiting program");
                break;

            default:
                printf("Invalid choice! Please enter again");

            }
        } while (choice != 10);


        return 0;
    }






