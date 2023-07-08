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
int32_t set_var(int16_t g_6_l, char g_18_l, int32_t g_35_l, char g_41_l, int32_t g_60_l, int32_t g_74_l, int16_t g_90_l, int16_t g_145_l, char g_181_l, char g_200_l, char g_230_l, int32_t g_247_l, int32_t g_273_l, int16_t g_320_l, int16_t g_328_l, int16_t g_329_l, int32_t g_333_l, int16_t g_393_l, int32_t g_400_l, int32_t g_401_l, int32_t g_436_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = 0x72ffb8; // 0x6020
int32_t g3 = -0x5410ff8e; // 0x6022
int32_t g4 = 0x4f63abef; // 0x6024
int32_t g5 = 1; // 0x6028
int32_t g6 = -8; // 0x602c
int32_t g7 = 0x82691; // 0x6030
int32_t g8 = 0x55270008; // 0x6032
int32_t g9 = 0x5527; // 0x6034
char g10 = 85; // 0x6035
int32_t g11 = 6; // 0x6038
int32_t g12 = 0xae0fff7; // 0x603c
int16_t g13 = 2784; // 0x603e
int32_t g14 = 0x57c9; // 0x6040
int32_t g15 = -0x4f3a22a; // 0x6044
int16_t g16 = -4; // 0x6048
int32_t g17 = -8; // 0x604c
int32_t g18 = -0x1e6fb836; // 0x6050
int32_t g19 = 6; // 0x6054
int32_t g20 = -1; // 0x6058
int64_t g21 = 0; // 0x6060
int32_t g22 = 0; // 0x6070
int32_t g23 = 0; // 0x6074
int32_t g24 = 0; // 0x6078
int32_t * g25 = NULL; // 0x6080
int32_t g26;

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
        result = &g26;
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
    return &g21;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g21 != 0) {
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
    *(char *)&g21 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s522retdec.c
// Address range: 0x1150 - 0x139c
// Line range:    308 - 337
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_6", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_18", v1);
    transparent_crc(g4, "g_35", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_41", v1);
    transparent_crc(g6, "g_60", v1);
    transparent_crc(g22, "g_74", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_90", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_145", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_181", v1);
    transparent_crc((int32_t)*(char *)&g23, "g_200", v1);
    transparent_crc((int32_t)g10, "g_230", v1);
    transparent_crc(g11, "g_247", v1);
    transparent_crc(g24, "g_273", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_320", v1);
    transparent_crc((int32_t)g13, "g_328", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_329", v1);
    transparent_crc(g15, "g_333", v1);
    transparent_crc((int32_t)g16, "g_393", v1);
    transparent_crc(g17, "g_400", v1);
    transparent_crc(g18, "g_401", v1);
    transparent_crc(g19, "g_436", v1);
    platform_main_end(-1 - *(int32_t *)0x6058, v1);
    return (int32_t)&g26 ^ (int32_t)&g26;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13a0 - 0x13a6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13a0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13b0 - 0x1445
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1419
        int32_t v2 = i; // 0x13b0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x13e6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1424
        *(int32_t *)(4 * i + (int64_t)&g25) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s522retdec.c
// Address range: 0x1450 - 0x2e01
// Line range:    58 - 301
int32_t func_1(void) {
    // 0x1450
    set_var(-72, 0, 0, 1, 0xffb8, 0, 0x2691, 8, 39, 0, 85, 6, 0, -9, 2784, 0x57c9, -0x4f3a22a, -4, -8, -0x1e6fb836, 7);
    return 0x64d41390;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2e10 - 0x2e55
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2e10
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2e34
        printf("...checksum after hashing %s : %X\n", vname, -1 - g20);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2e60 - 0x2e85
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2e60
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s522retdec.c
// Address range: 0x2e90 - 0x2fbc
// Line range:    48 - 50
int32_t set_var(int16_t g_6_l, char g_18_l, int32_t g_35_l, char g_41_l, int32_t g_60_l, int32_t g_74_l, int16_t g_90_l, int16_t g_145_l, char g_181_l, char g_200_l, char g_230_l, int32_t g_247_l, int32_t g_273_l, int16_t g_320_l, int16_t g_328_l, int16_t g_329_l, int32_t g_333_l, int16_t g_393_l, int32_t g_400_l, int32_t g_401_l, int32_t g_436_l) {
    // 0x2e90
    *(int16_t *)&g2 = g_6_l;
    *(char *)&g3 = g_18_l;
    g4 = g_35_l;
    *(char *)&g5 = g_41_l;
    g6 = g_60_l;
    g22 = g_74_l;
    *(int16_t *)&g7 = g_90_l;
    *(int16_t *)&g8 = g_145_l;
    *(char *)&g9 = g_181_l;
    *(char *)&g23 = g_200_l;
    g10 = g_230_l;
    g11 = g_247_l;
    g24 = g_273_l;
    *(int16_t *)&g12 = g_320_l;
    g13 = g_328_l;
    *(int16_t *)&g14 = g_329_l;
    g15 = g_333_l;
    g16 = g_393_l;
    g17 = g_400_l;
    g18 = g_401_l;
    g19 = g_436_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2fc0 - 0x301d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2fc0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3020 - 0x3060
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g20;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g25); // 0x3055
    g20 = v1 / 256 ^ v2;
}

// Address range: 0x3060 - 0x306d
int64_t _fini(void) {
    // 0x3060
    int64_t result; // 0x3060
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

