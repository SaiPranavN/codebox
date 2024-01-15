#include<stdio.h>
#include<stdlib.h>

#define max 5

int top = -1;
int stack[max];

void push(int arr[max], int a);
void pop(int arr[]);
void isfull(int arr[]);
void isempty(int arr[]);
void display(int arr[]);

int main() {
    int data;
    int ch;
    int z;

    printf("Enter the initial value of z: ");
    scanf("%d", &z);

    while (z != 0) {
        printf("Enter your choice\n");
        printf("1. push\n");
        printf("2. pop\n");
        printf("3. display\n");
        printf("4. check full\n");
        printf("5. check empty\n");
        printf("6. exit\n");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data: \n");
                scanf("%d", &data);

                if (top == max - 1) {
                    printf("Stack overflow\n");
                } else {
                    push(stack, data);
                }
                break;

            case 2:
            if(top == -1){
                printf("Stack underflow\n");
            }
            else{
                 pop(stack);
            }
               
                break;

            case 3:
                display(stack);
                break;

            case 4:
                isfull(stack);
                break;

            case 5:
                isempty(stack);
                break;

            case 6:
                printf("Exiting the program\n");
                z = 0; 
                break;

            default:
                printf("Invalid input\n");
                break;
        }
    }

    return 0;
}
void push(int arr[], int data) {
    if (top == max - 1) {
        printf("Stack overflow\n");
    } else {
        top++;
        arr[top] = data;
        printf("Pushed %d onto the stack\n", data);
    }
}
void pop(int arr[]) {
    if (top == -1) {
        printf("Stack underflow\n");
    } else {
        printf("Popped %d from the stack\n", arr[top]);
        top--;
    }
}
void isfull(int arr[]) {
    if (top == max - 1) {
        printf("Stack is full\n");
    } else {
        printf("Stack is not full\n");
    }
}
void isempty(int arr[]) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack is not empty\n");
    }
}
void display(int arr[]) {
    if (top == -1) {
        printf("Stack is empty\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
}
