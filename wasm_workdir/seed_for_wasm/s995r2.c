/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_195.c
 * Seed:      1012708576
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */

static uint32_t set_var(uint8_t g_2_l, uint16_t g_7_l, uint32_t *crc32_context, uint32_t *crc32_tab){
volatile uint8_t g_2 = 0U;/* VOLATILE GLOBAL g_2 */
uint16_t g_7 = 0xA527;
    transparent_crc(g_2, "g_2", 0, crc32_context, crc32_tab);
    transparent_crc(g_7, "g_7", 0, crc32_context, crc32_tab);
    return *crc32_context ^ 0xFFFFFFFFUL;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2
 * writes: g_2 g_7
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         
uint8_t g_2_l = 0U;
uint16_t g_7_l = 0xA527;
 /* block id: 0 */
    uint8_t l_3 = 253U;
    uint16_t l_6 = 0x5950;
    g_2_l = 0;
    g_7_l = ((l_3 != ((uint8_t)(((l_6 < l_6) >= l_6) < (-8)) * (uint8_t)g_2_l)) >= l_3);
    return set_var(g_2_l, g_7_l, &crc32_context, crc32_tab);
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
