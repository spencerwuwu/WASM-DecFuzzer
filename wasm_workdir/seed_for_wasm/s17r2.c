/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1213.c
 * Seed:      438787124
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(int8_t g_2_l, uint32_t g_3_l, int32_t g_13_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile int8_t g_2 = 0;/* VOLATILE GLOBAL g_2 */
volatile uint32_t g_3 = 0U;/* VOLATILE GLOBAL g_3 */
int32_t g_13 = (-1);
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_3, "g_3", 0, crc32_context, crc32_tab);
    transparent_crc(g_13, "g_13", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3 g_13
 * writes: g_3
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
int8_t g_2_l = 0;
uint32_t g_3_l = 0U;
int32_t g_13_l = (-1);
 /* block id: 0 */
    uint16_t l_6 = 6U;
    int32_t l_12 = 5;
    int32_t l_14 = 5;
    g_3_l = g_2_l;
    l_14 = ((int32_t)(l_6 , (g_2_l || (-(uint8_t)g_3_l))) + (int32_t)((int8_t)((((l_12 = l_6) ^ g_13_l) < 0) & g_13_l) - (int8_t)g_13_l));
    l_14 = g_13_l;
    return set_var(g_2_l, g_3_l, g_13_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
