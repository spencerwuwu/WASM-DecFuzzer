/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1383.c
 * Seed:      2551097741
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static uint16_t g_2 = 65526U;
static uint32_t g_21 = 4U;
static volatile uint16_t g_22 = 65535U;/* VOLATILE GLOBAL g_22 */
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint16_t g_2_l, uint32_t g_21_l, uint16_t g_22_l){
    g_2 = g_2_l;g_21 = g_21_l;g_22 = g_22_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_21 g_22
 * writes: g_2 g_21 g_22
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    uint16_t g_2_l = 65526U;
    uint32_t g_21_l = 4U;
    uint16_t g_22_l = 65535U;
 /* block id: 0 */
    int16_t l_5 = 0x50BF;
    int32_t l_6 = 0x0E60F951;
    uint32_t l_16 = 0U;
    --g_2_l;
    l_6 ^= l_5;
    l_6 |= ((int8_t)((uint16_t)((uint8_t)(((uint8_t)(~l_16) >> (uint8_t)3) >= (0xD947 & ((int32_t)((0x8648 != (g_21_l = ((int32_t)(l_5 && l_5) - (int32_t)g_2_l))) , g_21_l) % (int32_t)g_2_l))) >> (uint8_t)4) * (uint16_t)g_2_l) / (int8_t)0x58);
    g_22_l--;
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_21_l, "g_21", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_22_l, "g_22", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
