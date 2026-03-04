#include<stdio.h>
#include<string.h>
struct exp{
    char catagory[100];
    float amount;
};
struct exp expe[100];
int count =0;
void addexp(){
    printf("\nEnter catagory (Food/Trasport/Shopping/Other):");
    scanf("%s",expe[count].catagory);
    printf("Enter Amount:");
    scanf("%f",&expe[count].amount);
    count++;
    printf("Expense added successfully!!\n");
}
void showexp(){
    printf("\n......Expense List......\n");
    for(int i=0;i<count;i++){
        printf("%d. Catagory:%s | Amount:%.2f\n",i+1,expe[i].catagory,expe[i].amount);
    }
}
void total(){
     float total=0;
     for(int i=0;i<count;i++){
        total+=expe[i].amount;
     }
     printf("\nTotal expense : %.2f",total);
}

int main(){
    int choice;
    for(;;){
        printf("\n...Personal Expense Tracker...\n");
        printf("1.Add Expense\n2.Show Expense\n3.Total Expense\4.exit\n");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            addexp();
            break;
        case 2:
           showexp();
           break;
        case 3:
         total();
        break;
        case 4:
        printf("Exiting....\n");
        return 0;
        default:
            printf("\nInvalid Input");
        }
    }
    return 0;
}