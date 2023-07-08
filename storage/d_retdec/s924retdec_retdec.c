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
int32_t set_var(int32_t g_11_l, int16_t g_46_l, int16_t g_47_l, char g_51_l, int32_t g_59_l, char g_63_l, int32_t g_65_l, int16_t g_88_l, char g_90_l, int16_t g_92_l, char g_114_l, int32_t g_121_l, int16_t g_194_l, char g_209_l, int32_t g_211_l, int16_t g_226_l, char g_228_l, char g_304_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0x38ada4fa; // 0x5020
int32_t g3 = 0xdfc752; // 0x5022
int32_t g4 = 223; // 0x5024
int32_t g5 = -0x372df630; // 0x5028
int32_t g6 = 25; // 0x502c
int32_t g7 = -0x99cab6e; // 0x5030
int32_t g8 = 0xff07c1; // 0x5034
int32_t g9 = 0x700ff; // 0x5036
int32_t g10 = 7; // 0x5038
int32_t g11 = 1; // 0x503c
int32_t g12 = 0x1059b; // 0x5040
int32_t g13 = 0x6b110001; // 0x5042
int32_t g14 = 0x7f26b11; // 0x5044
int32_t g15 = 0x5af8e90a; // 0x5048
int64_t g16; // 0x504a
int64_t g17; // 0x504b
int32_t g18 = -1; // 0x504c
int64_t g19 = 0; // 0x5050
int32_t g20 = 0; // 0x5060
int32_t g21 = 0; // 0x5064
int32_t * g22 = NULL; // 0x5070
int16_t g23 = 0; // 0x59b
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s924retdec.c
// Address range: 0x1150 - 0x1358
// Line range:    258 - 284
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
    transparent_crc(g20, "g_11", v1);
    transparent_crc((int32_t)*(int16_t *)&g2, "g_46", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_47", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_51", v1);
    transparent_crc(g5, "g_59", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_63", v1);
    transparent_crc(g7, "g_65", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_88", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_90", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_92", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_114", v1);
    transparent_crc(g11, "g_121", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_194", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_209", v1);
    transparent_crc(g14, "g_211", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_226", v1);
    transparent_crc((int32_t)*(char *)0x504a, "g_228", v1);
    transparent_crc((int32_t)*(char *)0x504b, "g_304", v1);
    platform_main_end(-1 - *(int32_t *)0x504c, v1);
    return (int32_t)&g24 ^ (int32_t)&g24;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1360 - 0x1366
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1360
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1370 - 0x1405
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13d9
        int32_t v2 = i; // 0x1370
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13a6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13e4
        *(int32_t *)(4 * i + (int64_t)&g22) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s924retdec.c
// Address range: 0x1410 - 0x2bcd
// Line range:    59 - 251
int32_t func_1(void) {
    // 0x1410
    set_var(0, 0, 0x2000, 0, -0x372df630, 25, -0x99cab6e, 1985, -1, 7, 0, 1914, (int16_t)&g23, 1, 0x7f26b11, -0x16f6, -8, 90);
    return 90;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2bd0 - 0x2c15
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2bd0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2bf4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g18);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2c20 - 0x2c45
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2c20
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s924retdec.c
// Address range: 0x2c50 - 0x2d52
// Line range:    49 - 51
int32_t set_var(int32_t g_11_l, int16_t g_46_l, int16_t g_47_l, char g_51_l, int32_t g_59_l, char g_63_l, int32_t g_65_l, int16_t g_88_l, char g_90_l, int16_t g_92_l, char g_114_l, int32_t g_121_l, int16_t g_194_l, char g_209_l, int32_t g_211_l, int16_t g_226_l, char g_228_l, char g_304_l) {
    // 0x2c50
    g20 = g_11_l;
    *(int16_t *)&g2 = g_46_l;
    *(int16_t *)&g3 = g_47_l;
    *(char *)&g4 = g_51_l;
    g5 = g_59_l;
    *(char *)&g6 = g_63_l;
    g7 = g_65_l;
    *(int16_t *)&g8 = g_88_l;
    *(char *)&g9 = g_90_l;
    *(int16_t *)&g10 = g_92_l;
    *(char *)&g21 = g_114_l;
    g11 = g_121_l;
    *(int16_t *)&g12 = g_194_l;
    *(char *)&g13 = g_209_l;
    g14 = g_211_l;
    *(int16_t *)&g15 = g_226_l;
    *(char *)&g16 = g_228_l;
    *(char *)&g17 = g_304_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2d60 - 0x2dbd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2d60
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2dc0 - 0x2e00
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g18;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g22); // 0x2df5
    g18 = v1 / 256 ^ v2;
}

// Address range: 0x2e00 - 0x2e0d
int64_t _fini(void) {
    // 0x2e00
    int64_t result; // 0x2e00
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

