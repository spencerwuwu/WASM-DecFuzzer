/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1403.c
 * Seed:      54561503
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile uint32_t g_6 = 4294967295U;/* VOLATILE GLOBAL g_6 */
static uint8_t g_7 = 0U;
static int8_t g_10 = 0x71;
/* --- FORWARD DECLARATIONS --- */

static int set_var(uint32_t g_6_l, uint8_t g_7_l, int8_t g_10_l){
    g_6 = g_6_l;g_7 = g_7_l;g_10 = g_10_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_6 g_7
 * writes: g_10
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
uint32_t g_6_l = 4294967295U;
uint8_t g_7_l = 0U;
int8_t g_10_l = 0x71;
 /* block id: 0 */
    int8_t l_3 = 0x8E;
    int16_t l_8 = 0;
    int32_t l_9 = (-1);
    g_10_l = ((!l_3) >= (l_9 = ((int16_t)(g_6_l < ((g_7_l | (-1)) >= l_8)) >> (int16_t)l_8)));
    transparent_crc(g_6_l, "g_6", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_7_l, "g_7", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_10_l, "g_10", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
