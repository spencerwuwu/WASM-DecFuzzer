/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_1290.c
 * Seed:      4024268519
 */
#define NO_LONGLONG
#include "csmith_wasm.h"
static long __undefined;
/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static volatile int16_t g_2 = 0;/* VOLATILE GLOBAL g_2 */
static int32_t g_3 = 0;
/* --- FORWARD DECLARATIONS --- */

static int set_var(int16_t g_2_l, int32_t g_3_l){
    g_2 = g_2_l;g_3 = g_3_l;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_3
 * writes:
 */
uint32_t func_1(void)
{
 
         uint32_t crc32_tab[256];
         uint32_t crc32_context = 0xFFFFFFFFUL;
         crc32_gentab(crc32_tab);
         int print_hash_value = 0;
         
    int16_t g_2_l = 0;
    int32_t g_3_l = 0;
 /* block id: 0 */
    uint32_t l_6 = 6U;
    int32_t l_7 = 0x74C38B6B;
    int32_t l_8 = 1;
    l_8 &= (((0x4081 <= ((g_2_l & g_3_l) , ((uint32_t)(((l_6 , 0xE8F21009) , l_7) > l_7) - (uint32_t)g_3_l))) && g_3_l) , g_3_l);
    transparent_crc(g_2_l, "g_2", print_hash_value, &crc32_context, crc32_tab);
    transparent_crc(g_3_l, "g_3", print_hash_value, &crc32_context, crc32_tab);
    return crc32_context ^ 0xFFFFFFFFUL;
}
/* ---------------------------------------- */

    void call_cb(void (*cb) (const char* str)) {
      cb("Dummy for indirect function table");
    }
    
