#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<windows.h>
struct data{char msg[100],msg1[100],add[100],ch;int key;}en,de; //using  struct
void decrypted(); // decrpyted function
void encrypted(); // encrypted function
void menu(); // menu var
void lan_count(int x); // key making function
void Loading(int j); // timing
void close(void);// closing function

                        // global variable 2d array
char ar[2][100]={"Encrypted","Decrypted"};
                                    // main function
void main(){
        menu();
        return 0;

}

                                                // encrypted the string
  void encrypted(){
        int i,j=0,n,n1,x=0,l1;
        printf("\n\t\t\t\xB2\xB2\xB2 %s \xB2\xB2\xB2\n",ar[0]);
        printf("\nEnter your String:");
        fflush(stdin);
        gets(en.msg);
        for(int i=0;i<5;i++){
            n=rand();
            x=key(n);

        }
        int l=strlen(en.msg);
        n1=n+(10%3);
    if(l>30){
        l1=(n%10);
    }else{
        l1=(n%10)+2;

    }

        for(j=0;j<l1;j++){
            en.ch=en.msg[l-1];
            for(int i=l-1;i>=0;i--){
                if(i==(l-1)){
                    en.msg[i]=en.msg[0];
                }else{
                    en.msg[i+1]=en.msg[i];
                }
            }
                en.msg[0]=en.ch;

            }
        int d=(n/10)%10;
        int test=0;
        printf("\nYour %s String:",ar[0]);
        for(int i=0;i<en.msg[i]!='\0';i++){
            if((en.msg[i]+d)<=130){
                en.msg[i]=en.msg[i]+d;
            }else if((en.msg[i]+d)>130){
                en.msg[i]=130-en.msg[i];
            }
            test++;
            if(test==2){
                for(int k=0;k<5;k++){
                    int a=rand()%9;
                    en.add[k]=a;
                    char b='A'+(rand()%50);
                    en.add[k+2]=b;
                    printf("%d%c%c",en.add[k],en.add[k+2]);
                }
                test=0;

            }
            en.msg1[i]=en.msg[i];
            printf("%c",en.msg[i]);
        }

        printf("\n\nKey:%d\n\n",n1);
        Loading(100000000000);

        menu();


    }


                                        //decrypted the string
    void decrypted(){
        int i,j=0,n,r,d,l1;
        char tt;
        printf("\n\t\t\t\xB2\xB2\xB2 %s \xB2\xB2\xB2\n",ar[1]);
        printf("Enter your String: ");
        fflush(stdin);
        gets(de.msg);
        printf("\nEnter your key:");
        fflush(stdin);
        scanf("%d",&en.key);
         n=en.key-(10%3);
         r=n%10;

        if(key(n)!=5){
            printf("Not valid!");
        }
        int l=strlen(en.msg1);
        if(l>30){
        l1=(r%10);
    }else{
        l1=(r%10)+2;

    }
        for(i=0;i<l1;i++){
            en.ch=en.msg1[1];
            tt=en.msg1[0];
            for(j=0;j<l;j++){
                if(j==(l-1)){
                    en.msg1[0]=en.msg1[j];
                }else{
                    en.msg1[j]=en.msg1[j+1];

                }
            }
            en.msg1[0]=en.ch;
            en.msg1[l-1]=tt;
        }
        d=(n/10)%10;
        printf("\nYour %s String: ",ar[1]);
        for(int i=0;i<l;i++){
            if((en.msg1+d)>=0){
                en.msg1[i]=en.msg1[i]-d;
            }else if(en.msg1<0){
                en.msg1[i]=130+d;
            }
            printf("%c",en.msg1[i]);
        }
        printf("\n");
        Loading(100000000000);
        menu();

    }

                                                // secret key making
    int key(int n){
        int i=0;
        while(n>0){
            n=n/10;
            i++;
        }
        return i;

    }
                                                // closing function
void close(void){
    char a[20]=" Thank You ";
    for(int i=0;i<20;i++){
        Sleep(50);
        printf(":");
    }
    for(int i=0;i<12;i++){
        Sleep(50);
        printf("%c",a[i]);
    }
    for(int i=0;i<20;i++){
        Sleep(50);
        printf(":");
    }
    getch();
}
                                                       //timing function
void Loading(int j){
int i,k;
for(i=0;i<j;i++){
    k=i;
}
}

void menu(){
        printf("\n\t\t\t\xB2\xB2\xB2 MENU \xB2\xB2\xB2\n");
        printf("[1].%s Data\n",ar[0]);
        printf("[2].%s Data\n",ar[1]);
        printf("\nEnter:");
        switch(getch()){
            case '1':
                encrypted();
                break;
            case '2':
                decrypted();
                break;
            default:
                printf("\nNot valid\n");
                Loading(100000000000);
                close();
                system("cls");


        }


}


