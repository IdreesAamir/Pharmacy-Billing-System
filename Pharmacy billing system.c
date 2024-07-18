#include <stdio.h>
int pharmacy(){
    int quantity=0;
    int charges=0;
    int option=0;
pharm:
    printf("Welcome to Pharmacy\n");
    printf("Select from the following available medicines:\n(1)Panadol\n(2)Brufen\n(3)Rigix\n(4)Paracetamol\n(5)Flagyl\n(6)Febrol\n(7)Baydal\n(8)Softin\n(9)Go back\n");
    scanf("%d",&option);
    if(option==1){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*20;
        goto pharm;
    }
    if(option==2){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*10;
        goto pharm;
    }
    if(option==3){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*15;
        goto pharm;
    }
    if(option==4){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*25;
        goto pharm;
    }
    if(option==5){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*30;
        goto pharm;
    }
    if(option==6){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*10;
        goto pharm;
    }
    if(option==7){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*20;
        goto pharm;
    }
    if(option==8){
        printf("Enter quantity:");
        scanf("%d",&quantity);
        charges=quantity*15;
        goto pharm;
    }
    if(option==9){
        goto pharm;
    }
    return 1;
}
int main() {
    pharmacy();
    return 0;
}
