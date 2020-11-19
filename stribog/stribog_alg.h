//
// Created by od341 on 11/18/2020.
//

#ifndef EDS_STRIBOG_ALG_H
#define EDS_STRIBOG_ALG_H
#include "structs.h"

//----------------------------------------------------------------------------------------------------------------
void X(const void *a, const void *b, void *c);

void S(uint512 *a);

void L(unsigned char *a);

void P(unsigned char *a);

void KeyTable(unsigned char *K, int i);

void E(unsigned char *K, const unsigned char *m, unsigned char *result);

void g_N(const unsigned char *N, unsigned char *h, const unsigned char *m);

void add512(const unsigned char *a, const unsigned char *b, unsigned char *c);

void hash_XXX(unsigned char *IV, const unsigned char *message, unsigned long long length, unsigned char *out);

void hash_512(const unsigned char *message, unsigned long long length, unsigned char *out);

void hash_256(const unsigned char *message, unsigned long long length, unsigned char *out);
//----------------------------------------------------------------------------------------------------------------
#endif //EDS_STRIBOG_ALG_H
