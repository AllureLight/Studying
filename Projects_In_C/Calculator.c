#include <stdio.h>
#include <stdlib.h>

typedef struct historyList{
    struct historyList *next;
    double num1, num2, answer;
    char operator;
}HistoryList;

HistoryList* CreateList();
void AddToHistory(HistoryList **h, double num1, double num2, char operator, double answer);
double Operation(double num1, double num2, char operator);
void Calculator(HistoryList **h);
void History(HistoryList **h);

int main(){
    int Choice;
    HistoryList *head = NULL;
    do{
        printf("1 - Calculator\n");
        printf("2 - History\n");
        printf("3 - Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &Choice);
        switch(Choice){
            case 1:
                Calculator(&head);
                break;
            case 2:
                printf("\nHistory:\n");
                History(&head);
                break;
            case 3:
                printf("Exiting...\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    }while(Choice != 3);
    return 0;
}

double Operation(double num1, double num2, char operator){
    double answer;
    switch(operator){
        case '+':
            answer = num1 + num2;
            break;
        case '-':
            answer = num1 - num2;
            break;
        case '*':
            answer = num1 * num2;
            break;
        case '/':
            if(num2 != 0){
                answer = num1 / num2;
            }else{
                printf("\nError: Division by zero is not allowed.\n");
                return 0;
            }
            break;
        default:
            printf("\nError: Invalid operator.\n");
            return 0;
    }
    return answer;
}

void Calculator(HistoryList **h){
    double num1, num2, answer;
    char operator;
    printf("\nEnter first number: ");
    scanf("%lf", &num1);
    printf("Enter operator (+, -, *, /): ");
    scanf(" %c", &operator);
    printf("Enter second number: ");
    scanf("%lf", &num2);
    answer = Operation(num1, num2, operator);
    printf("Answer: %.2lf\n\n", answer);
    AddToHistory(h, num1, num2, operator, answer);
}

void AddToHistory(HistoryList **h, double num1, double num2, char operator, double answer){
    HistoryList *newHistory = (HistoryList *)malloc(sizeof(HistoryList));
    newHistory->num1 = num1;
    newHistory->num2 = num2;
    newHistory->operator = operator;
    newHistory->answer = answer;
    newHistory->next = *h;
    *h = newHistory;
}

void History(HistoryList **h){
    for(HistoryList *aux = *h; aux != NULL; aux = aux->next){
        printf(" %.2lf %c %.2lf = %.2lf\n\n", aux->num1, aux->operator, aux->num2, aux->answer);
    }
}