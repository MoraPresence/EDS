//
// Created by od341 on 11/18/2020.
//

#ifndef EDS_STRUCTS_H
#define EDS_STRUCTS_H
#include <stdint.h>
#define bool char
#define BLOCK_SIZE      64
#define BLOCK_BIT_SIZE  (BLOCK_SIZE * 8)

#define OUTPUT_SIZE_512 64
#define OUTPUT_SIZE_256 32

#define HASH256         0
#define HASH512         1
union uint128 {
    uint64_t qw[2];
    uint8_t b[16];
    uint32_t dw[4];
    uint16_t w[8];
} typedef uint128;

union uint256{
    uint128 ow[2];
    uint64_t qw[4];
    uint32_t dw[8];
    uint16_t w[16];
    uint8_t b[32];
} typedef uint256;

union uint512{
    uint128 ow[4];
    uint64_t qw[8];
    uint16_t w[32];
    uint32_t dw[16];
    uint8_t b[64];
} typedef uint512;

struct EDS_context{
    uint512 h;
    uint512 m;
    uint512 N;
    uint512 sum;
    char* M;
    uint512 p_512;
    uint64_t size;
    bool type;
} typedef EDS_context;
#endif //EDS_STRUCTS_H
