/* arcfour.h */

#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <errno.h>

#define export              __attribute__((visibility("default")))
#define rc4decrypt(x,y,z)   rc4encrypt(x,y,z)
#define rc4uninit(x)        free(x)

typedef unsigned char int8;
typedef unsigned short int int16;
typedef unsigned int int32;

struct s_arcfour {
    int16 i,j,k;
    int8 s[256];
};

typedef struct s_arcfour Arcfour; 

export Arcfour *rc4init(int8*, int16);
int8 rc4byte(void);
export int8 *rc4encrypt(int8*, int16);