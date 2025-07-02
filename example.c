/* example.c */

#include "arcfour.h"

#define F fflush(stdout)

int main (void);

int main(){
    Arcfour *rc4;
    int16 skey, stext;
    char *key, *from, *to, *encrypted, *decrypted;

    key = "tomatoes"; // change to RSA 2048 keygen later
    skey = strlen(key);

    from = "Shall I compare thee to a summer's day?";
    stext = strlen(from);

    printf("Intializing encryption..."); F;
    rc4 = rc4init(key, skey); // check if it returns 0 in prod, cause of malloc checking
    printf("done\n");

    printf("'%s'\n ->", from);
}