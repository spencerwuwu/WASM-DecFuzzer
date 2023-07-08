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
int32_t set_var(int16_t g_2_l, int16_t g_16_l, char g_17_l, int32_t g_19_l, int32_t g_23_l, int16_t g_30_l, int32_t g_48_l, int16_t g_49_l, int32_t g_50_l, int32_t g_51_l, char g_104_l, char g_126_l, int16_t g_141_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -0x70001; // 0x5020
int32_t g3 = 0xfffff8; // 0x5022
int32_t g4 = 255; // 0x5024
int32_t g5 = 0xf4f2301; // 0x5028
int32_t g6 = 2; // 0x502c
int32_t g7 = 0xbebf; // 0x5030
int32_t g8 = 0x7ff51885; // 0x5034
int32_t g9 = 2619; // 0x5038
int32_t g10 = 0x54c5f6b4; // 0x503c
int32_t g11 = 0x42fafece; // 0x5040
int32_t g12 = -0x5511e; // 0x5044
int64_t g13; // 0x5045
int64_t g14; // 0x5046
int32_t g15 = -1; // 0x5048
int64_t g16 = 0; // 0x5050
int32_t * g17 = NULL; // 0x5060
int32_t g18;

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
        result = &g18;
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
    return &g16;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g16 != 0) {
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
    *(char *)&g16 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s412r2.c
// Address range: 0x1150 - 0x12e8
// Line range:    184 - 205
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_2", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_16", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_17", v1);
    transparent_crc(g5, "g_19", v1);
    transparent_crc(g6, "g_23", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_30", v1);
    transparent_crc(g8, "g_48", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_49", v1);
    transparent_crc(g10, "g_50", v1);
    transparent_crc(g11, "g_51", v1);
    transparent_crc((int32_t)*(char *)&g12, "g_104", v1);
    transparent_crc((int32_t)*(char *)0x5045, "g_126", v1);
    transparent_crc((int32_t)*(int16_t *)0x5046, "g_141", v1);
    platform_main_end(-1 - *(int32_t *)0x5048, v1);
    return (int32_t)&g18 ^ (int32_t)&g18;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12f0 - 0x12f6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1300 - 0x1395
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1369
        int32_t v2 = i; // 0x1300
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1336
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1374
        *(int32_t *)(4 * i + (int64_t)&g17) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s412r2.c
// Address range: 0x13a0 - 0x1f56
// Line range:    50 - 177
int32_t func_1(void) {
    // 0x13a0
    set_var(-1, -8, 1, 0xf4f2302, 1, -0x4141, 0x7ff51885, 2619, 0x54c5f6b4, 0x42fafece, -30, -82, -6);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1f60 - 0x1fa5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1f60
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1f84
        printf("...checksum after hashing %s : %X\n", vname, -1 - g15);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1fb0 - 0x1fd5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1fb0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s412r2.c
// Address range: 0x1fe0 - 0x209f
// Line range:    40 - 42
int32_t set_var(int16_t g_2_l, int16_t g_16_l, char g_17_l, int32_t g_19_l, int32_t g_23_l, int16_t g_30_l, int32_t g_48_l, int16_t g_49_l, int32_t g_50_l, int32_t g_51_l, char g_104_l, char g_126_l, int16_t g_141_l) {
    // 0x1fe0
    *(int16_t *)&g2 = g_2_l;
    *(int16_t *)&g3 = g_16_l;
    *(char *)&g4 = g_17_l;
    g5 = g_19_l;
    g6 = g_23_l;
    *(int16_t *)&g7 = g_30_l;
    g8 = g_48_l;
    *(int16_t *)&g9 = g_49_l;
    g10 = g_50_l;
    g11 = g_51_l;
    *(char *)&g12 = g_104_l;
    *(char *)&g13 = g_126_l;
    *(int16_t *)&g14 = g_141_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x20a0 - 0x20fd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x20a0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2100 - 0x2140
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g15;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g17); // 0x2135
    g15 = v1 / 256 ^ v2;
}

// Address range: 0x2140 - 0x214d
int64_t _fini(void) {
    // 0x2140
    int64_t result; // 0x2140
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

