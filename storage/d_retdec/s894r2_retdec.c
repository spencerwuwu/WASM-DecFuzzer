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
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, char g_14_l, char g_38_l, char g_39_l, int32_t g_66_l, char g_104_l, char g_135_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = -0x5a293fa5; // 0x4020
int32_t g3 = 9; // 0x4024
int32_t g4 = -0x31ac2726; // 0x4028
int32_t g5 = 0xfbd556; // 0x402c
int32_t g6 = 0x100fbd5; // 0x402d
int32_t g7 = 0x100fb; // 0x402e
int32_t g8 = 1; // 0x4030
int32_t g9 = 2042; // 0x4034
int64_t g10; // 0x4035
int32_t g11 = -1; // 0x4038
int64_t g12 = 0; // 0x4040
int32_t * g13 = NULL; // 0x4050
int32_t g14;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x3fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g14;
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
    return &g12;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g12 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x4018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g12 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s894r2.c
// Address range: 0x1150 - 0x1291
// Line range:    114 - 131
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
    transparent_crc(g3, "g_3", v1);
    transparent_crc(g4, "g_4", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_14", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_38", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_39", v1);
    transparent_crc(g8, "g_66", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_104", v1);
    transparent_crc((int32_t)*(char *)0x4035, "g_135", v1);
    platform_main_end(-1 - *(int32_t *)0x4038, v1);
    return (int32_t)&g14 ^ (int32_t)&g14;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x12a0 - 0x12a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x12a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x12b0 - 0x1345
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1319
        int32_t v2 = i; // 0x12b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x12e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1324
        *(int32_t *)(4 * i + (int64_t)&g13) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s894r2.c
// Address range: 0x1350 - 0x194f
// Line range:    50 - 106
int32_t func_1(void) {
    // 0x1350
    set_var(-0x5a293fa5, 9, -1, -15, -1, -1, 1, -6, 8);
    return 1;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1950 - 0x1995
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1950
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1974
        printf("...checksum after hashing %s : %X\n", vname, -1 - g11);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x19a0 - 0x19c5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x19a0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s894r2.c
// Address range: 0x19d0 - 0x1a6d
// Line range:    40 - 42
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, char g_14_l, char g_38_l, char g_39_l, int32_t g_66_l, char g_104_l, char g_135_l) {
    // 0x19d0
    g2 = g_2_l;
    g3 = g_3_l;
    g4 = g_4_l;
    *(char *)&g5 = g_14_l;
    *(char *)&g6 = g_38_l;
    *(char *)&g7 = g_39_l;
    g8 = g_66_l;
    *(char *)&g9 = g_104_l;
    *(char *)&g10 = g_135_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1a70 - 0x1acd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1a70
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1ad0 - 0x1b10
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g11;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g13); // 0x1b05
    g11 = v1 / 256 ^ v2;
}

// Address range: 0x1b10 - 0x1b1d
int64_t _fini(void) {
    // 0x1b10
    int64_t result; // 0x1b10
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

