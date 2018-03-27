#include <iostream>
#include <cstdio>
#include <cmath>
#include <string>
#include <map>
#include <cstring>
using namespace std;
int main(int argc,const char*argv[]){
    char password[20];
    char plain[100];
    int encrypttext[100];
    cout<<"Please input the Code:"<<endl;
    cin>>password;
    printf("Input the model: 0(encrypt) 1(decrypt)\n");
    int t;
    while(scanf("%d",&t)!=EOF){
        printf("Please input your test:\n");
        if(!t){
            scanf("%s",plain);
            for(int i=0;i<strlen(plain);i++)
                plain[i]=plain[i]^password[i%strlen(password)];
            printf("According your password,the encrypttext is\n");
            for(int i=0;i<strlen(plain);i++)
                printf("%d ",plain[i]-'a'+97);
            printf("-%d\n",strlen(plain));
            printf("Input the model: 0(encrypt) 1(decrypt)\n");
        }
        else{
            int len;
            scanf("%d",&len);
            for(int i=0;i<len;i++){
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
