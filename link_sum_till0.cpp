#include <stdio.h>
//#include < process.h >
#include <stdlib.h>

    struct node {
        int data;
        struct node * next;
    };
struct node * head;
struct node * last;
void create();
void dispaly();
void linksum();

void main() {
    int count = 0;
    int sum = 0, k = 0;
    void create() {
        struct node * p;
        p = malloc(sizeof(struct node));
        if (count == 0) {
            printf("\nenter the data :");
            scanf("%d", & p - > data);
            p - > next = NULL;
            head = p;
            last = p;
        }
        else {
            printf("\nenter the data :");
            scanf("%d", & p - > data);
            p - > next = NULL;
            last - > next = p;
            last = last - > next;
        }
        count++;
    }

    void display() {
        if (head == NULL)
            printf("\nno data");
        else {
            struct node * temp;
            temp = head;
            while (temp != NULL) {
                printf("%d\n", temp - > data);
                temp = temp - > next;
            }
        }
    }

    void add() {
        struct node * temp;
        temp = head;
        while (temp != NULL) {
            while (temp - > data != 0) {
                sum = sum + temp - > data;
                temp = temp - > next;
            }
            temp = temp - > next;
            void linksum();
            sum = 0;
        }
    }
    void linksum() {
        struct node * temp1;
        struct node * head1;
        struct node * last1;
        temp1 = malloc(sizeof(struct node));
        if (k == 0) {
            temp1 - > data = sum;
            temp1 - > next = NULL;
            head1 = temp1;
            last1 = temp1;
        } else {
            temp1 - > data = sum;
            temp1 - > next = NULL;
            last1 - > next = temp1;
            last1 = last1 - > next;
        }
        k++;
        printf("\n%d\n", temp1 - > data);
    }
    int j;
    do {
        printf("\n1.create\n2.display\n3.sum\n4.linksum\n5.stop\n");
        printf("enter your choice : ");
        scanf("%d", & j);
        switch (j) {
            case 1:
                create();
                break;
            case 2:
                display();
                break;
            case 3:
                add();
                break;
            case 4:
                linksum();
                break;
            case 5:
                break;
        }
    } while (j != 5);
}
