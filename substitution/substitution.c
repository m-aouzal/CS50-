#include <cs50.h>
#include <stdio.h>
#include<ctype.h>
#include<string.h>

int main(int argc, string argv[])
{
    if(argc!=2) printf("Usage: ./substitution key\n");
    else if(strlen(argv[1])!=26) printf("Key must contain 26 characters.\n");
    else{
        string plain=get_string("plain test : ");
        for(int i=0;plain[i]!='\0';i++){
            if(islower(plain[i])) plain[i]=tolower(argv[1][plain[i]-'a']);
            else if(isupper(plain[i])) plain[i]=argv[1][plain[i]-'A'];
        }
        printf("cypher text: %s\n",plain);
    }

}