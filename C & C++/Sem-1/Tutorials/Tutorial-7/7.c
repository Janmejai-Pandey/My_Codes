#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter a string ( Max 100 characters ) - ");
    fgets(str, sizeof(str), stdin);
    int n = strlen(str);
    str[n - 1] = str[n - 1] == '\n' ? str[n - 1] = '\0' : str[n - 1];
    n--;

    int sum = (str[0]-'0')%2 != 0 ? (str[0]-'0') : 0;
    sum += (str[1]-'0')%2 != 0 ? (str[1]-'0') : 0;
    sum += (str[5]-'0')%2 != 0 ? (str[5]-'0') : 0;
    sum += (str[6]-'0')%2 != 0 ? (str[6]-'0') : 0;
    sum += (str[7]-'0')%2 != 0 ? (str[7]-'0') : 0;
    sum += (str[8]-'0')%2 != 0 ? (str[8]-'0') : 0;

    //Finding number of constonants
    int consonants = 0;
    for (int i = 0; i < n; i++){
        if ((str[i]<='Z'&&str[i]>='A')||(str[i]<='z'&&str[i]>='a')){
            if (str[i]!='A'&&str[i]!='E'&&str[i]!='I'&&str[i]!='O'&&str[i]!='U'&&str[i]!='a'&&str[i]!='e'&&str[i]!='i'&&str[i]!='o'&&str[i]!='u'){
                consonants++;
            }
        }
    }

    int score = sum + consonants;

    printf("Enter a number - ");
    int num;
    scanf("%d", &num);
    if (score%2 == num%2){
        printf("WINNER\n");
    }
    else{
        printf("LOSER\n");
    }

    printf("\n");
    return 0;
}