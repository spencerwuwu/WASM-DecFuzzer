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
int32_t set_var(int16_t g_2_l, int16_t g_10_l, int32_t g_11_l, char g_27_l, int16_t g_42_l, int32_t g_47_l, int16_t g_48_l, char g_56_l, char g_72_l, char g_82_l, int32_t g_85_l, int16_t g_86_l, int32_t g_102_l, char g_110_l, int16_t g_129_l, int16_t g_136_l, int32_t g_165_l, int32_t g_181_l, int32_t g_212_l, int32_t g_226_l, int16_t g_327_l, int32_t g_328_l, int16_t g_329_l, int16_t g_335_l, int32_t g_336_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0x848f6; // 0x6020
int32_t g3 = 0x10008; // 0x6022
int32_t g4 = 1; // 0x6024
int32_t g5 = -0x8ff01; // 0x6028
int32_t g6 = 0x20ebfff7; // 0x602a
int32_t g7 = -0x33f3df15; // 0x602c
int32_t g8 = 0x60e65a1; // 0x6030
int32_t g9 = 0x1060e; // 0x6032
int32_t g10 = 262; // 0x6033
int32_t g11 = 1; // 0x6034
int32_t g12 = 0x5684; // 0x6038
int32_t g13 = 1; // 0x603c
int32_t g14 = 0x1ffff; // 0x6040
int32_t g15 = -0x8ffff; // 0x6042
int32_t g16 = -9; // 0x6044
int32_t g17 = -0x52ef034b; // 0x6048
int32_t g18 = 0x71b24f34; // 0x604c
int32_t g19 = 1; // 0x6050
int32_t g20 = 5; // 0x6054
int16_t g21 = -10; // 0x6058
int32_t g22 = -0x44160001; // 0x605a
int32_t g23 = -0x5a854417; // 0x605c
int32_t g24 = -1; // 0x6060
char g25 = 0; // 0x6070
int32_t g26 = 0; // 0x6080
char g27 = 0; // 0x6081
int32_t g28 = 0; // 0x6082
int32_t * g29 = NULL; // 0x6090
int32_t g30;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x5fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g30;
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
    return 0x6068;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g25 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x6018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g25 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s110r2.c
// Address range: 0x1150 - 0x13f0
// Line range:    269 - 302
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
    transparent_crc((int32_t)*(int16_t *)&g3, "g_10", v1);
    transparent_crc(g4, "g_11", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_27", v1);
    transparent_crc((int32_t)*(int16_t *)&g6, "g_42", v1);
    transparent_crc(g7, "g_47", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_48", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_56", v1);
    transparent_crc((int32_t)*(char *)&g26, "g_72", v1);
    transparent_crc((int32_t)*(char *)&g10, "g_82", v1);
    transparent_crc(g11, "g_85", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_86", v1);
    transparent_crc(g13, "g_102", v1);
    transparent_crc((int32_t)g27, "g_110", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_129", v1);
    transparent_crc((int32_t)*(int16_t *)&g15, "g_136", v1);
    transparent_crc(g16, "g_165", v1);
    transparent_crc(g17, "g_181", v1);
    transparent_crc(g18, "g_212", v1);
    transparent_crc(g19, "g_226", v1);
    transparent_crc((int32_t)*(int16_t *)&g28, "g_327", v1);
    transparent_crc(g20, "g_328", v1);
    transparent_crc((int32_t)g21, "g_329", v1);
    transparent_crc((int32_t)*(int16_t *)&g22, "g_335", v1);
    transparent_crc(g23, "g_336", v1);
    platform_main_end(-1 - *(int32_t *)0x6060, v1);
    return (int32_t)&g30 ^ (int32_t)&g30;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13f0 - 0x13f6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13f0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1400 - 0x1495
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1469
        int32_t v2 = i; // 0x1400
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1436
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1474
        *(int32_t *)(4 * i + (int64_t)&g29) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s110r2.c
// Address range: 0x14a0 - 0x2f99
// Line range:    62 - 262
int16_t func_1(void) {
    // 0x2f83
    set_var(0, -0x33b6, -0x33b6, -1, 0, -1, -25, 1, 58, 58, 0, 1, 1, 0, -1, 1, -9, 0, 0x71b24f34, 1, 0, 5, -10, -1, -0x5a854417);
    return 5;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fa0 - 0x2fe5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2fa0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2fc4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g24);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2ff0 - 0x3015
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2ff0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s110r2.c
// Address range: 0x3020 - 0x31a8
// Line range:    52 - 54
int32_t set_var(int16_t g_2_l, int16_t g_10_l, int32_t g_11_l, char g_27_l, int16_t g_42_l, int32_t g_47_l, int16_t g_48_l, char g_56_l, char g_72_l, char g_82_l, int32_t g_85_l, int16_t g_86_l, int32_t g_102_l, char g_110_l, int16_t g_129_l, int16_t g_136_l, int32_t g_165_l, int32_t g_181_l, int32_t g_212_l, int32_t g_226_l, int16_t g_327_l, int32_t g_328_l, int16_t g_329_l, int16_t g_335_l, int32_t g_336_l) {
    // 0x3020
    *(int16_t *)&g2 = g_2_l;
    *(int16_t *)&g3 = g_10_l;
    g4 = g_11_l;
    *(char *)&g5 = g_27_l;
    *(int16_t *)&g6 = g_42_l;
    g7 = g_47_l;
    *(int16_t *)&g8 = g_48_l;
    *(char *)&g9 = g_56_l;
    *(char *)&g26 = g_72_l;
    *(char *)&g10 = g_82_l;
    g11 = g_85_l;
    *(int16_t *)&g12 = g_86_l;
    g13 = g_102_l;
    g27 = g_110_l;
    *(int16_t *)&g14 = g_129_l;
    *(int16_t *)&g15 = g_136_l;
    g16 = g_165_l;
    g17 = g_181_l;
    g18 = g_212_l;
    g19 = g_226_l;
    *(int16_t *)&g28 = g_327_l;
    g20 = g_328_l;
    g21 = g_329_l;
    *(int16_t *)&g22 = g_335_l;
    g23 = g_336_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x31b0 - 0x320d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x31b0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3210 - 0x3250
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g24;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g29); // 0x3245
    g24 = v1 / 256 ^ v2;
}

// Address range: 0x3250 - 0x325d
int64_t _fini(void) {
    // 0x3250
    int64_t result; // 0x3250
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

