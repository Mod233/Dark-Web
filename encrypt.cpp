#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <cstring>
using namespace std;
char password[20];
char plain[100];
int encrypttext[100];
void _init(){
    memset(password,0,sizeof(password));
    memset(plain,0,sizeof(plain));
    memset(encrypttext,0,sizeof(encrypttext));
}
int main(int argc,const char*argv[]){
    _init();
    printf("Please input the Code:\n");
    cin>>password;
    printf("Input the model: 0(encrypt) 1(decrypt)\n");
    int t;
    while(scanf("%d",&t)!=EOF){
        printf("Please input your test:\n");
        memset(plain,0,sizeof(plain));
        if(!t){
            scanf("%s",plain);
            for(int i=0;i<16;i++)
                plain[i]=plain[i]^password[i%strlen(password)];
            printf("According your password,the encrypttext is\n");
            for(int i=0;i<16;i++){
                printf("%d ",plain[i]-'a'+97);
            }
            printf("\n");
            printf("Input the model: 0(encrypt) 1(decrypt)\n");
        }
        else{
            int len;
            for(int i=0;i<16;i++){
                scanf("%d",&encrypttext[i]);
                plain[i]=encrypttext[i];
                plain[i]=plain[i]^password[i%strlen(password)];
            }
            printf("According your password, the onion domain is\n%s\n",plain);
            printf("Input the model: 0(encrypt) 1(decrypt)\n");
        }
    }
    return 0;
}
