#include<stdio.h>
#include<stdlib.h>
#define max 505
#define SWAP(x,y){int t=x;x=y;y=t;} 
int count(char *a,char *b,char t);
void reverse(char *a,char *copy);
int judge(char *a,char *b);
void big_number_plus(char *a,char *b,char *c);
void big_number_minus(char *a,char *b,char *c);
void big_number_multiply(char *a,char *b,char *c);
void big_number_divide(char *a,char *b,char *c);
int main(){
    char a[max+1]={},b[max+1]={},t=0;
    while(~scanf("%s %c %s",a,&t,b)){
        char c[max+1]={};
        int x,y,i;
        switch(t){
            case '+':
                big_number_plus(a,b,c);break;
            case '-':
                printf("%s",judge(a,b)==0?"":"-");
                big_number_minus(a,b,c);
                break;
            case '*':
                big_number_multiply(a,b,c);break;
            case '/':
                big_number_divide(a,b,c);break;
            }printf("%s\n",c); 
        }
    return 0;
    }
int count(char *a,char *b,char t){
    int i=0,j=0;
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++);
    if(t=='+'){return (i>j?i+1:j+1);}
    else if(t=='-'){return (i>j?i:j);}
    else if(t=='/'){return (i>j?i-j:j-i);}
    }
void reverse(char *a,char *copy){
    int i=0,j=0,x=0;
    if(a==copy){
        for(i=0;a[i]!='\0';i++);
        for(j=0;j<i/2;j++){
            SWAP(a[j],a[i-j-1]); 
            } 
        } 
    else{
        for(i=0;a[i]!='\0';i++);
        for(j=0;j<i;j++){
            copy[j]=a[i-j-1];
            }
        } 
    }
int judge(char *a,char *b){
    int i=0,j=0,x=0;
    for(i=0;a[i]!='\0';i++);
    for(j=0;b[j]!='\0';j++);
    if(i>j){return 0;}
    else if(i<j){return 1;}
    else{
        for(x=0;a[x]!='\0';x++){
            if(a[x]>b[x]){return 0;}
            else if(a[x]<b[x]){return 1;}
            }
        }
    return 0;
    }
void big_number_plus(char *a,char *b,char *c){
    int i=0,j=0,x=count(a,b,'+');
    char x1[max]={},x2[max]={}; 
    reverse(a,x1);reverse(b,x2);
    for(i=0;i<=x;i++){c[i]+=(x1[i]+x2[i])%48;} 
    for(i=0;i<=x;i++){    
        if(c[i]>9){
            c[i+1]+=c[i]/10;
            c[i]%=10;
            }
        }  
    for(;c[i]==0;i--){c[i]=0;}   
    for(;i>=0;i--){c[i]+=48;}
    reverse(c,c); 
    }
void big_number_minus(char *a,char *b,char *c){
    int i=0,j=0,x=count(a,b,'-');
    char x1[max]={},x2[max]={}; 
    if(judge(a,b)){reverse(a,x2);reverse(b,x1);}
    else{reverse(a,x1);reverse(b,x2);}
    for(i=0;i<=x;i++){c[i]=(x1[i]-x2[i])%48;}
    for(i=0;i<=x;i++){    
         if(c[i]<0){
            c[i]+=10;
            c[i+1]-=1; }
        }
    for(;c[i]==0;i--);
    for(;i>=0;i--){c[i]+=48;}
    reverse(c,c); 
    }
void big_number_multiply(char *a,char *b,char *c){
    int i=0,j=0,x=0;
    char x1[max]={},x2[max]={}; 
    reverse(a,x1);reverse(b,x2);
    for(i=0;x1[i]!='\0';i++){
        for(j=0;x2[j]!='\0';j++){
            c[i+j]+=(x1[i]%48)*(x2[j]%48);
            if(c[i+j]>9){
                c[i+j+1]+=c[i+j]/10;
                c[i+j]%=10;
                }
            }
        }x=i+j+1;
    for(;c[x]==0;x--){c[x]=0;}
    for(;x>=0;x--){c[x]+=48;}
    reverse(c,c);
    }
void big_number_divide(char *a,char *b,char *c){
    if(b[0]=='0'&&b[1]=='\0'){sprintf(c,"無意義");}
    else if(judge(a,b)){sprintf(c,"0");} 
 else{
        int i=0,j=0,x=0,y=0,thu=0; 
        char x1[max]={},x2[max]={}; 
        for(x=0;x<count(a,b,'/');x++){c[x]=48;}
     for(x=0;a[x]!='\0';x++){x1[x]=a[x];}
     for(y=0;b[y]!='\0';y++){x2[y]=b[y];}
     for(j=0;j<x-y;j++){x2[y+j]=48;}x=y+j; 
     for(i=0;;i++){
            if(judge(a,b)){break;}
         if(judge(x1,x2)){x2[--x]=0;}
         for(thu=0;;thu++){
                if(judge(x1,x2)){break;}
                big_number_minus(x1,x2,x1);
                }c[i]=thu+48;
            sprintf(a,"%s",x1); 
            }
        }
    } 