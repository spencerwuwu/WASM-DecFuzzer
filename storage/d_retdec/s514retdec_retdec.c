//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ------------------- Function Prototypes --------------------

int64_t _fini(void);
int64_t _init(void);
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6);
void crc32_8bytes(uint32_t val);
void crc32_byte(unsigned char b);
void crc32_gentab(void);
int32_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_15_l, int16_t g_41_l, int32_t g_42_l, int32_t g_45_l, int32_t g_78_l, char g_79_l, int32_t g_117_l, int32_t g_118_l, int32_t g_120_l, int32_t g_124_l, int32_t g_167_l, char g_192_l, char g_230_l, int32_t g_267_l, int16_t g_309_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0x55919081; // 0x5020
int32_t g3 = 0x9c4b; // 0x5024
int32_t g4 = 8; // 0x5028
int32_t g5 = -1; // 0x502c
int32_t g6 = 2; // 0x5030
int32_t g7 = 5; // 0x5034
int32_t g8 = -0x2a354a4e; // 0x5038
int32_t g9 = -1; // 0x503c
int32_t g10 = -0x2aa750a2; // 0x5040
int32_t g11 = 0xff51; // 0x5044
char g12 = -1; // 0x5045
int32_t g13 = 0x16b02dda; // 0x5048
int32_t g14 = 6; // 0x504c
int32_t g15 = -1; // 0x5050
char g16 = 0; // 0x5060
int32_t g17 = 0; // 0x5070
int32_t g18 = 0; // 0x5074
int32_t * g19 = NULL; // 0x5080
int32_t g20;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x4fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g20;
    }
    // 0x1016
    return result;
}

// Address range: 0x1030 - 0x1036
int32_t function_1030(char * format, ...) {
    // 0x1030
    return printf(format);
}

// Address range: 0x1040 - 0x1046
int32_t function_1040(char * s1, char * s2) {
    // 0x1040
    return strcmp(s1, s2);
}

// Address range: 0x1050 - 0x1076
int64_t _start(int64_t a1, int64_t a2, int64_t a3, int64_t a4, int64_t a5, int64_t a6) {
    // 0x1050
    int64_t v1; // 0x1050
    __libc_start_main(0x1150, (int32_t)a6, (char **)&v1, NULL, NULL, (void (*)())a3);
    __asm_hlt();
    // UNREACHABLE
}

// Address range: 0x1080 - 0x10a9
int64_t function_1080(void) {
    // 0x1080
    return 0x5058;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g16 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x5018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g16 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s514retdec.c
// Address range: 0x1150 - 0x1311
// Line range:    254 - 277
int main(int argc, char ** argv) {
    int32_t v1 = 0; // 0x1171
    if (argc == 2) {
        int64_t str = *(int64_t *)((int64_t)argv + 8); // 0x117b
        v1 = strcmp((char *)str, "1") == 0;
    }
    // 0x119b
    platform_main_begin();
    crc32_gentab();
    func_1();
    transparent_crc(g2, "g_15", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_41", v1);
    transparent_crc(g4, "g_42", v1);
    transparent_crc(g5, "g_45", v1);
    transparent_crc(g6, "g_78", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_79", v1);
    transparent_crc(g8, "g_117", v1);
    transparent_crc(g17, "g_118", v1);
    transparent_crc(g18, "g_120", v1);
    transparent_crc(g9, "g_124", v1);
    transparent_crc(g10, "g_167", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_192", v1);
    transparent_crc((int32_t)g12, "g_230", v1);
    transparent_crc(g13, "g_267", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_309", v1);
    platform_main_end(-1 - *(int32_t *)0x5050, v1);
    return (int32_t)&g20 ^ (int32_t)&g20;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1320 - 0x1326
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1320
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1330 - 0x13c5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1399
        int32_t v2 = i; // 0x1330
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1366
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13a4
        *(int32_t *)(4 * i + (int64_t)&g19) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s514retdec.c
// Address range: 0x13d0 - 0x2674
// Line range:    52 - 247
int32_t func_1(void) {
    // 0x13d0
    set_var(-0x55919081, -0x63b5, 8, -1, 2, 5, -0x2a354a4e, 0, 0, -1, -0x2aa750a2, 81, -1, 0x16b02dda, 6);
    return 0x16b02dda;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2680 - 0x26c5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2680
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x26a4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g15);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x26d0 - 0x26f5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x26d0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s514retdec.c
// Address range: 0x2700 - 0x27cf
// Line range:    42 - 44
int32_t set_var(int32_t g_15_l, int16_t g_41_l, int32_t g_42_l, int32_t g_45_l, int32_t g_78_l, char g_79_l, int32_t g_117_l, int32_t g_118_l, int32_t g_120_l, int32_t g_124_l, int32_t g_167_l, char g_192_l, char g_230_l, int32_t g_267_l, int16_t g_309_l) {
    // 0x2700
    g2 = g_15_l;
    *(int16_t *)&g3 = g_41_l;
    g4 = g_42_l;
    g5 = g_45_l;
    g6 = g_78_l;
    *(char *)&g7 = g_79_l;
    g8 = g_117_l;
    g17 = g_118_l;
    g18 = g_120_l;
    g9 = g_124_l;
    g10 = g_167_l;
    *(char *)&g11 = g_192_l;
    g12 = g_230_l;
    g13 = g_267_l;
    *(int16_t *)&g14 = g_309_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x27d0 - 0x282d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x27d0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2830 - 0x2870
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g15;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g19); // 0x2865
    g15 = v1 / 256 ^ v2;
}

// Address range: 0x2870 - 0x287d
int64_t _fini(void) {
    // 0x2870
    int64_t result; // 0x2870
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

