#include <stdio.h>
#include <string.h>

void strip(char *s){
    while(*s=='0' && *(s+1)) s++;
    memmove(s, s, strlen(s)+1);
}
void add(char *a, char *b){
    int i=strlen(a)-1, j=strlen(b)-1, c=0;
    char r[60]; int k=0;

    while(i>=0 || j>=0 || c){
        int s=c;
        if(i>=0) s+=a[i--]-'0';
        if(j>=0) s+=b[j--]-'0';
        r[k++]=s%10+'0';
        c=s/10;
    }
    while(k--) putchar(r[k]);
    putchar('\n');
}
void sub(char *a, char *b){
    int i=strlen(a)-1, j=strlen(b)-1, br=0;
    char r[60]; int k=0;

    while(i>=0){
        int d=(a[i]-'0')-br-(j>=0?b[j]-'0':0);
        if(d<0){ d+=10; br=1;} else br=0;
        r[k++]=d+'0';
        i--; j--;
    }
    while(k>1 && r[k-1]=='0') k--;
    while(k--) putchar(r[k]);
    putchar('\n');
}
void mul(char *a, char *b){
    int la=strlen(a), lb=strlen(b);
    int r[110]={0};

    for(int i=la-1;i>=0;i--)
        for(int j=lb-1;j>=0;j--)
            r[i+j+1]+=(a[i]-'0')*(b[j]-'0');

    for(int i=la+lb;i>0;i--){
        r[i-1]+=r[i]/10;
        r[i]%=10;
    }
    int i=0;
    while(i<la+lb-1 && r[i]==0) i++;
    for(;i<la+lb;i++) printf("%d",r[i]);
    putchar('\n');
}
void divi(char *a, char *b){
    char r[60]="0", q[60]="";
    int qi=0;

    for(int i=0;i<strlen(a);i++){
        int l=strlen(r);
        r[l]=a[i];
        r[l+1]='\0';
        while(*r=='0' && *(r+1)) memmove(r,r+1,strlen(r));

        int cnt=0;
        while(strlen(r)>strlen(b) ||
             (strlen(r)==strlen(b) && strcmp(r,b)>=0)){
            sub_inplace(r,b);
            cnt++;
        }
        q[qi++]=cnt+'0';
    }
    q[qi]='\0';
    while(*q=='0' && *(q+1)) memmove(q,q+1,strlen(q));
    printf("Quotient: %s\nRemainder: %s\n",q,r);
}
void sub_inplace(char *a, char *b){
    int i=strlen(a)-1, j=strlen(b)-1, br=0;
    while(i>=0){
        int d=(a[i]-'0')-br-(j>=0?b[j]-'0':0);
        if(d<0){ d+=10; br=1; }
        else br=0;
        a[i]=d+'0';
        i--; j--;
    }
    while(*a=='0' && *(a+1)) memmove(a,a+1,strlen(a));
}
int main(){
    char a[60], b[60], op[3];

    while(1){
        printf("Calc> ");
        scanf("%s", a);
        if(strcmp(a,"Exit")==0) break;
        scanf("%s %s", op, b);

        if(op[0]=='+') add(a,b);
        else if(op[0]=='-') sub(a,b);
        else if(op[0]=='*') mul(a,b);
        else if(op[0]=='/') divi(a,b);
    }
}
