#define eqz(x) ((x) == 0)
/*
 * This is a RANDOMLY GENERATED PROGRAM.
 *
 * Generator: csmith 2.3.0
 * Git version: unknown
 * Options:   --no-arrays --no-structs --no-unions --no-safe-math --no-pointers --no-longlong --max-funcs 1 --max-expr-complexity 5 --output ./tmp/src_code/csmith_test_327.c
 * Seed:      1838977734
 */


#define NO_LONGLONG

#include "csmith.h"


static long __undefined;

/* --- Struct/Union Declarations --- */
/* --- GLOBAL VARIABLES --- */
static int32_t g_2 = 9;
static volatile uint32_t g_6 = 0x2EDC7555;/* VOLATILE GLOBAL g_6 */


/* --- FORWARD DECLARATIONS --- */
 uint32_t  func_1(void);



static int set_var(int32_t g_2_l, uint32_t g_6_l){
    g_2 = g_2_l;g_6 = g_6_l;
    return 0;
}
/* --- FUNCTIONS --- */
/* ------------------------------------------ */
/* 
 * reads : g_2 g_6
 * writes: g_2 g_6
 */
 uint32_t  func_1(void)
{
        int64_t stack[100000];
        for (int i = 0; i < 100000; i++) { stack[i] = 0; }
        int64_t *stack_pointer = stack + 100000;
        
int64_t* a = stack_pointer;
int64_t b = 16;
int64_t* c = a - b;
stack_pointer = c;
int64_t d = 9;
c[3] = d;
int64_t e = 786199893;
c[2] = e;
int64_t f = 35698;
c[3] = f;
int64_t g = 0;
c[3] = g;
while (1) {
int64_t h = (int64_t)c[3];
int64_t i = -4;
int64_t j = h;
int64_t k = i;
int64_t l = j > k;
int64_t m = 1;
int64_t n = l & m;
if (eqz(n)) goto B_a;
int64_t o = (int64_t)c[2];
int64_t p = -1;
int64_t q = o + p;
c[2] = q;
int64_t r = (int64_t)c[3];
int64_t s = -1;
int64_t t = r + s;
c[3] = t;
//continue L_b;
}
//unreachable;
B_a:;
int64_t u = (int64_t)c[3];
int64_t v = (int64_t)c[2];
set_var(u, v);
int64_t w = (int64_t)c[2];
int64_t x = 16;
int64_t* y = c + x;
stack_pointer = y;
return w;
}





/* ---------------------------------------- */
int main (int argc, char* argv[])
{
    int print_hash_value = 0;
    if (argc == 2 && strcmp(argv[1], "1") == 0) print_hash_value = 1;
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g_2, "g_2", print_hash_value);
    transparent_crc(g_6, "g_6", print_hash_value);
    platform_main_end(crc32_context ^ 0xFFFFFFFFUL, print_hash_value);
    return 0;
}

/************************ statistics *************************
XXX max struct depth: 0
breakdown:
   depth: 0, occurrence: 2
XXX total union variables: 0

XXX non-zero bitfields defined in structs: 0
XXX zero bitfields defined in structs: 0
XXX const bitfields defined in structs: 0
XXX volatile bitfields defined in structs: 0
XXX structs with bitfields in the program: 0
breakdown:
XXX full-bitfields structs in the program: 0
breakdown:
XXX times a bitfields struct's address is taken: 0
XXX times a bitfields struct on LHS: 0
XXX times a bitfields struct on RHS: 0
XXX times a single bitfield on LHS: 0
XXX times a single bitfield on RHS: 0

XXX max expression depth: 2
breakdown:
   depth: 1, occurrence: 3
   depth: 2, occurrence: 1

XXX total number of pointers: 0

XXX times a non-volatile is read: 1
XXX times a non-volatile is write: 1
XXX times a volatile is read: 1
XXX    times read thru a pointer: 0
XXX times a volatile is write: 1
XXX    times written thru a pointer: 0
XXX times a volatile is available for access: 1
XXX percentage of non-volatile access: 50

XXX forward jumps: 0
XXX backward jumps: 0

XXX stmts: 3
XXX max block depth: 1
breakdown:
   depth: 0, occurrence: 2
   depth: 1, occurrence: 1

XXX percentage a fresh-made variable is used: 66.7
XXX percentage an existing variable is used: 33.3
********************* end of statistics **********************/

