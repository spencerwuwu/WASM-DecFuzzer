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
int16_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_2_l, int32_t g_29_l, int16_t g_45_l, char g_50_l, int32_t g_54_l, char g_62_l, int32_t g_74_l, char g_121_l, int32_t g_128_l, int16_t g_159_l, int32_t g_162_l, int16_t g_163_l, int32_t g_198_l, int32_t g_213_l, int32_t g_217_l, int32_t g_260_l, char g_261_l, int32_t g_266_l, int32_t g_278_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x4fd3df75; // 0x5020
int32_t g3 = 0x72625aa9; // 0x5024
int32_t g4 = 0x1bb91; // 0x5028
char g5 = 1; // 0x502a
int32_t g6 = -0x1cf1a211; // 0x502c
int32_t g7 = -6; // 0x5030
int32_t g8 = 9; // 0x5034
int32_t g9 = 1; // 0x5038
int32_t g10 = 8; // 0x503c
int32_t g11 = 0xfffc; // 0x5040
int32_t g12 = -1; // 0x5044
int32_t g13 = 1; // 0x5048
int32_t g14 = 0x64da32a0; // 0x504c
int32_t g15 = -0x6f86e1a4; // 0x5050
int32_t g16 = 164; // 0x5054
int32_t g17 = -0x3047b0a9; // 0x5058
int32_t g18 = -1; // 0x505c
int64_t g19 = 0; // 0x5060
int32_t g20 = 0; // 0x5070
int32_t g21 = 0; // 0x5072
int32_t g22 = 0; // 0x5074
int32_t * g23 = NULL; // 0x5080
int32_t g24;

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
        result = &g24;
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
    return &g19;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g19 != 0) {
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
    *(char *)&g19 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s530r2.c
// Address range: 0x1150 - 0x1367
// Line range:    235 - 262
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
    transparent_crc(g2, "g_2", v1);
    transparent_crc(g3, "g_29", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_45", v1);
    transparent_crc((int32_t)g5, "g_50", v1);
    transparent_crc(g6, "g_54", v1);
    transparent_crc((int32_t)*(char *)&g20, "g_62", v1);
    transparent_crc(g7, "g_74", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_121", v1);
    transparent_crc(g9, "g_128", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_159", v1);
    transparent_crc(g10, "g_162", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_163", v1);
    transparent_crc(g12, "g_198", v1);
    transparent_crc(g13, "g_213", v1);
    transparent_crc(g14, "g_217", v1);
    transparent_crc(g15, "g_260", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_261", v1);
    transparent_crc(g22, "g_266", v1);
    transparent_crc(g17, "g_278", v1);
    platform_main_end(-1 - *(int32_t *)0x505c, v1);
    return (int32_t)&g24 ^ (int32_t)&g24;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1370 - 0x1376
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1370
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1380 - 0x1415
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13e9
        int32_t v2 = i; // 0x1380
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13b6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13f4
        *(int32_t *)(4 * i + (int64_t)&g23) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s530r2.c
// Address range: 0x1420 - 0x256d
// Line range:    56 - 228
int16_t func_1(void) {
    // 0x1420
    set_var(-10, 0x72625aa9, -0x446f, 1, -0x1cf1a211, 0, -6, 9, 1, 0, 8, -4, -1, 1, 0x64da32a0, -0x6f86e1a4, -92, 0, -0x3047b0a9);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2570 - 0x25b5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2570
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2594
        printf("...checksum after hashing %s : %X\n", vname, -1 - g18);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x25c0 - 0x25e5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x25c0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s530r2.c
// Address range: 0x25f0 - 0x26f6
// Line range:    46 - 48
int32_t set_var(int32_t g_2_l, int32_t g_29_l, int16_t g_45_l, char g_50_l, int32_t g_54_l, char g_62_l, int32_t g_74_l, char g_121_l, int32_t g_128_l, int16_t g_159_l, int32_t g_162_l, int16_t g_163_l, int32_t g_198_l, int32_t g_213_l, int32_t g_217_l, int32_t g_260_l, char g_261_l, int32_t g_266_l, int32_t g_278_l) {
    // 0x25f0
    g2 = g_2_l;
    g3 = g_29_l;
    *(int16_t *)&g4 = g_45_l;
    g5 = g_50_l;
    g6 = g_54_l;
    *(char *)&g20 = g_62_l;
    g7 = g_74_l;
    *(char *)&g8 = g_121_l;
    g9 = g_128_l;
    *(int16_t *)&g21 = g_159_l;
    g10 = g_162_l;
    *(int16_t *)&g11 = g_163_l;
    g12 = g_198_l;
    g13 = g_213_l;
    g14 = g_217_l;
    g15 = g_260_l;
    *(char *)&g16 = g_261_l;
    g22 = g_266_l;
    g17 = g_278_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2700 - 0x275d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2700
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2760 - 0x27a0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g18;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g23); // 0x2795
    g18 = v1 / 256 ^ v2;
}

// Address range: 0x27a0 - 0x27ad
int64_t _fini(void) {
    // 0x27a0
    int64_t result; // 0x27a0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

