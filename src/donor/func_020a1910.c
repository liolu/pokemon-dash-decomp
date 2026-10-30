/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205e3d4 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0205/func_0205e3d4.c (license: MIT), reused
 * by tools/donor_match.py */
typedef struct {
    unsigned int w[4];
} T4;
typedef struct {
    unsigned int Intermediate_Hash[5];
    unsigned int Length_Low;
    unsigned int Length_High;
    unsigned int Message_Block_Index;
    unsigned char Message_Block[64];
} SHA1Context;
extern int data_020da3a4;
extern unsigned int data_020d45b4[4];
void func_020a1910(void *ctx) {
    SHA1Context *context = (SHA1Context *) ctx;
    unsigned int K[4];
    int t;
    unsigned int temp;
    unsigned int W[80];
    unsigned int A, B, C, D, E;
    unsigned int save[2];
    unsigned char *blk;

    *(T4 *) K = *(T4 *) data_020d45b4;
    blk       = context->Message_Block;
    if (data_020da3a4 != 0) {
        save[0]                        = *(unsigned int *) (blk + 0x18);
        save[1]                        = *(unsigned int *) (blk + 0x38);
        *(unsigned int *) (blk + 0x18) = 0;
        *(unsigned int *) (blk + 0x38) = 0;
    }

    for (t = 0; t < 16; t++) {
        W[t] = (unsigned int) context->Message_Block[t * 4] << 24;
        W[t] |= (unsigned int) context->Message_Block[t * 4 + 1] << 16;
        W[t] |= (unsigned int) context->Message_Block[t * 4 + 2] << 8;
        W[t] |= (unsigned int) context->Message_Block[t * 4 + 3];
    }

    for (t = 16; t < 80; t++) {
        W[t] = (((W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]) << (1)) |
                ((W[t - 3] ^ W[t - 8] ^ W[t - 14] ^ W[t - 16]) >> (32 - (1))));
    }

    A = context->Intermediate_Hash[0];
    B = context->Intermediate_Hash[1];
    C = context->Intermediate_Hash[2];
    D = context->Intermediate_Hash[3];
    E = context->Intermediate_Hash[4];

    for (t = 0; t < 20; t++) {
        temp = (((A) << (5)) | ((A) >> (32 - (5)))) + ((B & C) | ((~B) & D)) + E + W[t] + ((volatile unsigned int *) K)[0];
        E    = D;
        D    = C;
        C    = (((B) << (30)) | ((B) >> (32 - (30))));
        B    = A;
        A    = temp;
    }

    for (t = 20; t < 40; t++) {
        temp = (((A) << (5)) | ((A) >> (32 - (5)))) + (B ^ C ^ D) + E + W[t] + K[1];
        E    = D;
        D    = C;
        C    = (((B) << (30)) | ((B) >> (32 - (30))));
        B    = A;
        A    = temp;
    }

    for (t = 40; t < 60; t++) {
        temp = (((A) << (5)) | ((A) >> (32 - (5)))) + ((B & C) | (B & D) | (C & D)) + E + W[t] + K[2];
        E    = D;
        D    = C;
        C    = (((B) << (30)) | ((B) >> (32 - (30))));
        B    = A;
        A    = temp;
    }

    for (t = 60; t < 80; t++) {
        temp = (((A) << (5)) | ((A) >> (32 - (5)))) + (B ^ C ^ D) + E + W[t] + K[3];
        E    = D;
        D    = C;
        C    = (((B) << (30)) | ((B) >> (32 - (30))));
        B    = A;
        A    = temp;
    }

    context->Intermediate_Hash[0] += A;
    *(unsigned int *) (((int) &context->Intermediate_Hash[1]) & ~0ULL) += B;
    *(unsigned int *) (((int) &context->Intermediate_Hash[2]) & ~0ULL) += C;
    *(unsigned int *) (((int) &context->Intermediate_Hash[3]) & ~0ULL) += D;
    *(unsigned int *) (((int) &context->Intermediate_Hash[4]) & ~0ULL) += E;
    context->Message_Block_Index = 0;

    if (data_020da3a4 != 0) {
        *(unsigned int *) (blk + 0x18) = save[0];
        *(unsigned int *) (blk + 0x38) = save[1];
    }
}
