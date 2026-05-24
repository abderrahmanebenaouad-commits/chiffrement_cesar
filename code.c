#include<stdio.h>
#include<string.h>
void chiffrer (char mot[100],int k){ 
    char a =' ';
    printf("mot chiffre :");
    for(int i=0 ;i<strlen(mot);i++ ) {
        if (mot[i]>= 'A' && mot[i]<='Z'){
            
        mot[i]= ((mot[i]- 'A' +k)%26)+'A' ;
        printf("%c",mot[i]);
        } else if(mot[i]>='a' && mot[i]<='z')  {
            
            mot[i]=(( mot[i]-'a' +k)%26)+'a' ;
            printf("%c",mot[i]);
        }else if (mot[i] == a){
            printf("%c",mot[i]);
        }
    } 
}
void dechiffrer (char mot[100],int k){ 
    char a=' ';
    printf("mot dechiffre :");
    for(int i=0 ;i<strlen(mot);i++ ) {
         if (mot[i]>= 'A' && mot[i]<='Z'){
       
        mot[i]= ((mot[i]-'A'-k)%26)+'A';
        printf("%c",mot[i]) ; 
         } else if(mot[i]>='a' && mot[i]<='z')  {
            
            mot[i]=(( mot[i]-'a'-k)%26)+'a' ;
            printf("%c",mot[i]);
        }else if (mot[i] == a){
            printf("%c",mot[i]);
        }
    } 
}
int main () {
    char mot[100];
    int len ,n , k ;
    printf("selectionner une option :\n") ;
    printf("1 :chiffrer un mot \n");
    printf("2 :dechiffrer un mot \n");
    printf("votre option :") ; scanf("%d",&n) ; 
    printf("saisir le mot :\n") ;  getchar(); gets(mot) ;
    printf("saisir le cle :\n") ; scanf("%d",&k);
    switch (n) {
        case 1 :chiffrer(mot ,k) ; break;
        case 2 : dechiffrer(mot,k) ; break ;
        default: printf("option invalide !") ; break;
    }

}
