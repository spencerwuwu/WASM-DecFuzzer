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
int32_t set_var(int32_t g_15_l, int32_t g_21_l, int16_t g_28_l, int32_t g_50_l, int16_t g_56_l, char g_74_l, int16_t g_75_l, int16_t g_77_l, char g_84_l, char g_85_l, int32_t g_88_l, char g_90_l, int32_t g_98_l, int32_t g_127_l, int32_t g_143_l, char g_172_l, int32_t g_173_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 1; // 0x5020
int32_t g3 = -0x628f3523; // 0x5024
int32_t g4 = 0x43d54759; // 0x5028
int32_t g5 = 0xffffff; // 0x502c
int32_t g6 = -0x9ff01; // 0x502e
int32_t g7 = 0x15fff6; // 0x5030
char g8 = 21; // 0x5032
int32_t g9 = -1; // 0x5034
int32_t g10 = 160; // 0x5038
int32_t g11 = 2; // 0x503c
int32_t g12 = -5; // 0x5040
int32_t g13 = -7; // 0x5044
int32_t g14 = 108; // 0x5048
int32_t g15 = -8; // 0x504c
int32_t g16 = -1; // 0x5050
char g17 = 0; // 0x5060
int32_t g18 = 0; // 0x5070
int32_t g19 = 0; // 0x5072
int32_t g20 = 0; // 0x5074
int32_t * g21 = NULL; // 0x5080
int32_t g22;

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
        result = &g22;
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
    if (g17 != 0) {
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
    g17 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s617r2.c
// Address range: 0x1150 - 0x133f
// Line range:    136 - 161
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
    transparent_crc(g3, "g_21", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_28", v1);
    transparent_crc(g4, "g_50", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_56", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_74", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_75", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_77", v1);
    transparent_crc((int32_t)g8, "g_84", v1);
    transparent_crc((int32_t)*(char *)&g20, "g_85", v1);
    transparent_crc(g9, "g_88", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_90", v1);
    transparent_crc(g11, "g_98", v1);
    transparent_crc(g12, "g_127", v1);
    transparent_crc(g13, "g_143", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_172", v1);
    transparent_crc(g15, "g_173", v1);
    platform_main_end(-1 - *(int32_t *)0x5050, v1);
    return (int32_t)&g22 ^ (int32_t)&g22;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1340 - 0x1346
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1340
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1350 - 0x13e5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x13b9
        int32_t v2 = i; // 0x1350
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1386
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x13c4
        *(int32_t *)(4 * i + (int64_t)&g21) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s617r2.c
// Address range: 0x13f0 - 0x1f1e
// Line range:    54 - 129
int32_t func_1(void) {
    // 0x13f0
    set_var(1, 8, 0x298c, 1, -1, -1, -10, 0, 21, 0, -1, -96, 2, -5, -7, 108, -8);
    return 0xffff;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f20 - 0x1f65
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1f20
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1f44
        printf("...checksum after hashing %s : %X\n", vname, -1 - g16);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1f70 - 0x1f95
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1f70
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s617r2.c
// Address range: 0x1fa0 - 0x20b1
// Line range:    44 - 46
int32_t set_var(int32_t g_15_l, int32_t g_21_l, int16_t g_28_l, int32_t g_50_l, int16_t g_56_l, char g_74_l, int16_t g_75_l, int16_t g_77_l, char g_84_l, char g_85_l, int32_t g_88_l, char g_90_l, int32_t g_98_l, int32_t g_127_l, int32_t g_143_l, char g_172_l, int32_t g_173_l) {
    // 0x1fa0
    g2 = g_15_l;
    g3 = g_21_l;
    *(int16_t *)&g18 = g_28_l;
    g4 = g_50_l;
    *(int16_t *)&g5 = g_56_l;
    *(char *)&g6 = g_74_l;
    *(int16_t *)&g7 = g_75_l;
    *(int16_t *)&g19 = g_77_l;
    g8 = g_84_l;
    *(char *)&g20 = g_85_l;
    g9 = g_88_l;
    *(char *)&g10 = g_90_l;
    g11 = g_98_l;
    g12 = g_127_l;
    g13 = g_143_l;
    *(char *)&g14 = g_172_l;
    g15 = g_173_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20c0 - 0x211d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x20c0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2120 - 0x2160
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g16;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g21); // 0x2155
    g16 = v1 / 256 ^ v2;
}

// Address range: 0x2160 - 0x216d
int64_t _fini(void) {
    // 0x2160
    int64_t result; // 0x2160
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

