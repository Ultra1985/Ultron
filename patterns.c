#include <stdio.h>


void pattern1(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}


void pattern2(int n) {
    for (int i = 1; i <= n; i++) {
        for (int s = i; s < n; s++) printf(" ");
        for (int j = 1; j <= i; j++) printf("%d", j);
        printf("\n");
    }
}


void pattern3(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= j; k++) printf("%d", k);
        }
        printf("\n");
    }
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            for (int k = 1; k <= j; k++) printf("%d", k);
        }
        printf("\n");
    }
}


void pattern4(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d", j % 2 == 0 ? 0 : 1);
        }
        printf("\n");
    }
}


void pattern5(int n) {
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("%d", i);
        }
        printf("\n");
    }
}

int main() {
    int choice, n;
    do {
        printf("\n--- Number Pattern Menu ---\n");
        printf("1. Increasing numbers\n");
        printf("2. Pyramid numbers\n");
        printf("3. Diamond with repetition\n");
        printf("4. Binary triangle\n");
        printf("5. Inverted numbers\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice != 0) {
            printf("Enter number of rows: ");
            scanf("%d", &n);
        }

        switch (choice) {
            case 1: pattern1(n); break;
            case 2: pattern2(n); break;
            case 3: pattern3(n); break;
            case 4: pattern4(n); break;
            case 5: pattern5(n); break;
            case 0: printf("Exiting...\n"); break;
            default: printf("Invalid choice! Try again.\n");
        }

    } while (choice != 0);

    return 0;
}
