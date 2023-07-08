//
// This file was generated by the Retargetable Decompiler
// Website: https://retdec.com
//

#include <stdbool.h>
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
char func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_6_l, int32_t g_12_l, int32_t g_22_l, int16_t g_39_l, char g_40_l, int16_t g_45_l, char g_46_l, int16_t g_57_l, char g_58_l, int32_t g_62_l, int16_t g_93_l, int32_t g_113_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, int32_t g_182_l, int16_t g_183_l, int16_t g_192_l, int16_t g_218_l, int16_t g_219_l, int32_t g_236_l, int16_t g_253_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = -8; // 0x5020
int32_t g3 = -0x6c1fa996; // 0x5024
int32_t g4 = -6; // 0x5028
int32_t g5 = 0x49e3523e; // 0x502c
int32_t g6 = 0x293349e3; // 0x502e
int32_t g7 = 0xe22933; // 0x5030
int32_t g8 = 0x406400e2; // 0x5032
int32_t g9 = 0x194e4064; // 0x5034
int32_t g10 = 0xffff; // 0x5038
int32_t g11 = -0x5d23388f; // 0x503c
int32_t g12 = 0x7bb6f393; // 0x5040
int32_t g13 = 0x8804; // 0x5044
int32_t g14 = 1; // 0x5048
int32_t g15 = -0x32aa0004; // 0x504c
int32_t g16 = 0x121ecd55; // 0x504e
int16_t g17 = 0x121e; // 0x5050
int32_t g18 = -0x1a3ff388; // 0x5054
int32_t g19 = -1; // 0x5058
int64_t g20 = 0; // 0x5060
int32_t g21 = 0; // 0x5070
int32_t g22 = 0; // 0x5071
int32_t g23 = 0; // 0x5074
int16_t g24 = 0; // 0x5078
int32_t g25 = 0; // 0x507a
int32_t * g26 = NULL; // 0x5080
int16_t g27 = 0; // 0x523e
int32_t g28;

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
        result = &g28;
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
    return &g20;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g20 != 0) {
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
    *(char *)&g20 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s588retdec.c
// Address range: 0x1150 - 0x13b0
// Line range:    252 - 282
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
    transparent_crc(g2, "g_6", v1);
    transparent_crc(g3, "g_12", v1);
    transparent_crc(g4, "g_22", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_39", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_40", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_45", v1);
    transparent_crc((int32_t)*(char *)&g22, "g_46", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_57", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_58", v1);
    transparent_crc(g9, "g_62", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_93", v1);
    transparent_crc(g23, "g_113", v1);
    transparent_crc(g11, "g_179", v1);
    transparent_crc(g12, "g_180", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_181", v1);
    transparent_crc(g14, "g_182", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_183", v1);
    transparent_crc((int32_t)g24, "g_192", v1);
    transparent_crc((int32_t)*(int16_t *)&g16, "g_218", v1);
    transparent_crc((int32_t)g17, "g_219", v1);
    transparent_crc(g18, "g_236", v1);
    transparent_crc((int32_t)*(int16_t *)&g25, "g_253", v1);
    platform_main_end(-1 - *(int32_t *)0x5058, v1);
    return (int32_t)&g28 ^ (int32_t)&g28;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13b0 - 0x13b6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13b0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13c0 - 0x1455
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1429
        int32_t v2 = i; // 0x13c0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13f6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1434
        *(int32_t *)(4 * i + (int64_t)&g26) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s588retdec.c
// Address range: 0x1460 - 0x28e0
// Line range:    59 - 245
char func_1(void) {
    // 0x23ee
    set_var(-8, 0, -6, (int16_t)&g27, 0, 0x49e3, 0, 0x2933, -30, 0x389b8a59, -1, 0, (int32_t)(bool)((int32_t)(int16_t)&g27 >= 1 ^ (((int32_t)(int16_t)&g27 - 1 ^ -0x80000000) & (int32_t)(int16_t)&g27) >= 0 ^ (int32_t)(int16_t)&g27 != 1) ^ 0x389b8a59, 0, -0x77fc, 1, -4, 0, -0x32ab, 0x121e, (int32_t)(bool)((int32_t)(int16_t)&g27 >= 1 ^ (((int32_t)(int16_t)&g27 - 1 ^ -0x80000000) & (int32_t)(int16_t)&g27) >= 0 ^ (int32_t)(int16_t)&g27 != 1) ^ 0x389b8a59 | -0x1a3ff388, 0);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x28e0 - 0x2925
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x28e0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2904
        printf("...checksum after hashing %s : %X\n", vname, -1 - g19);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2930 - 0x2955
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2930
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s588retdec.c
// Address range: 0x2960 - 0x2ad1
// Line range:    49 - 51
int32_t set_var(int32_t g_6_l, int32_t g_12_l, int32_t g_22_l, int16_t g_39_l, char g_40_l, int16_t g_45_l, char g_46_l, int16_t g_57_l, char g_58_l, int32_t g_62_l, int16_t g_93_l, int32_t g_113_l, int32_t g_179_l, int32_t g_180_l, int16_t g_181_l, int32_t g_182_l, int16_t g_183_l, int16_t g_192_l, int16_t g_218_l, int16_t g_219_l, int32_t g_236_l, int16_t g_253_l) {
    // 0x2960
    g2 = g_6_l;
    g3 = g_12_l;
    g4 = g_22_l;
    *(int16_t *)&g5 = g_39_l;
    *(char *)&g21 = g_40_l;
    *(int16_t *)&g6 = g_45_l;
    *(char *)&g22 = g_46_l;
    *(int16_t *)&g7 = g_57_l;
    *(char *)&g8 = g_58_l;
    g9 = g_62_l;
    *(int16_t *)&g10 = g_93_l;
    g23 = g_113_l;
    g11 = g_179_l;
    g12 = g_180_l;
    *(int16_t *)&g13 = g_181_l;
    g14 = g_182_l;
    *(int16_t *)&g15 = g_183_l;
    g24 = g_192_l;
    *(int16_t *)&g16 = g_218_l;
    g17 = g_219_l;
    g18 = g_236_l;
    *(int16_t *)&g25 = g_253_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2ae0 - 0x2b3d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2ae0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2b40 - 0x2b80
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g19;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g26); // 0x2b75
    g19 = v1 / 256 ^ v2;
}

// Address range: 0x2b80 - 0x2b8d
int64_t _fini(void) {
    // 0x2b80
    int64_t result; // 0x2b80
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

