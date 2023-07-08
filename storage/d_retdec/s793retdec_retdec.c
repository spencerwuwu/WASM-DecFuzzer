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
int32_t set_var(int32_t g_12_l, int32_t g_14_l, int16_t g_23_l, int32_t g_47_l, int32_t g_49_l, int32_t g_50_l, int32_t g_53_l, int16_t g_68_l, char g_69_l, char g_70_l, char g_94_l, int16_t g_95_l, int32_t g_97_l, int32_t g_98_l, int16_t g_99_l, char g_100_l, int32_t g_105_l, int32_t g_128_l, char g_206_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x3fe0
int32_t g2 = -0x15912527; // 0x4020
int32_t g3 = 0xd33d; // 0x4024
int32_t g4 = -5; // 0x4028
int32_t g5 = 0xf6bb026; // 0x402c
int32_t g6 = -1; // 0x4030
int32_t g7 = 0x1e1a6c6; // 0x4034
int32_t g8 = 0x101e1; // 0x4036
int32_t g9 = 257; // 0x4037
int32_t g10 = 1; // 0x4038
int32_t g11 = 0x1cd86053; // 0x403c
int32_t g12 = 0x584dd3ea; // 0x4040
int32_t g13 = 0x15390a; // 0x4044
char g14 = 21; // 0x4046
int32_t g15 = 4; // 0x4048
char g16 = -75; // 0x404c
int32_t g17 = -1; // 0x4050
char g18 = 0; // 0x4060
int32_t g19 = 0; // 0x4070
int32_t g20 = 0; // 0x4074
int32_t g21 = 0; // 0x4078
int32_t g22 = 0; // 0x407c
int32_t * g23 = NULL; // 0x4080
int32_t g24;

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
    return 0x4058;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g18 != 0) {
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
    g18 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s793retdec.c
// Address range: 0x1150 - 0x136b
// Line range:    240 - 267
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
    transparent_crc(g2, "g_12", v1);
    transparent_crc(g19, "g_14", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_23", v1);
    transparent_crc(g4, "g_47", v1);
    transparent_crc(g5, "g_49", v1);
    transparent_crc(g6, "g_50", v1);
    transparent_crc(g20, "g_53", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_68", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_69", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_70", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_94", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_95", v1);
    transparent_crc(g11, "g_97", v1);
    transparent_crc(g12, "g_98", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_99", v1);
    transparent_crc((int32_t)g14, "g_100", v1);
    transparent_crc(g15, "g_105", v1);
    transparent_crc(g22, "g_128", v1);
    transparent_crc((int32_t)g16, "g_206", v1);
    platform_main_end(-1 - *(int32_t *)0x4050, v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s793retdec.c
// Address range: 0x1420 - 0x1d08
// Line range:    56 - 232
int16_t func_1(void) {
    // 0x1420
    set_var(-0x15912527, 0, -0x2cc3, -5, 0xf6bb026, -1, 0, -0x593a, -31, 1, 0, 1, 0x1cd86053, 0x584dd3ea, 0x390a, 21, 4, 0, -75);
    return 4;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1d10 - 0x1d55
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x1d10
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x1d34
        printf("...checksum after hashing %s : %X\n", vname, -1 - g17);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1d60 - 0x1d85
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x1d60
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s793retdec.c
// Address range: 0x1d90 - 0x1e8d
// Line range:    46 - 48
int32_t set_var(int32_t g_12_l, int32_t g_14_l, int16_t g_23_l, int32_t g_47_l, int32_t g_49_l, int32_t g_50_l, int32_t g_53_l, int16_t g_68_l, char g_69_l, char g_70_l, char g_94_l, int16_t g_95_l, int32_t g_97_l, int32_t g_98_l, int16_t g_99_l, char g_100_l, int32_t g_105_l, int32_t g_128_l, char g_206_l) {
    // 0x1d90
    g2 = g_12_l;
    g19 = g_14_l;
    *(int16_t *)&g3 = g_23_l;
    g4 = g_47_l;
    g5 = g_49_l;
    g6 = g_50_l;
    g20 = g_53_l;
    *(int16_t *)&g7 = g_68_l;
    *(char *)&g8 = g_69_l;
    *(char *)&g9 = g_70_l;
    *(char *)&g21 = g_94_l;
    *(int16_t *)&g10 = g_95_l;
    g11 = g_97_l;
    g12 = g_98_l;
    *(int16_t *)&g13 = g_99_l;
    g14 = g_100_l;
    g15 = g_105_l;
    g22 = g_128_l;
    g16 = g_206_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1e90 - 0x1eed
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x1e90
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1ef0 - 0x1f30
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g17;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g23); // 0x1f25
    g17 = v1 / 256 ^ v2;
}

// Address range: 0x1f30 - 0x1f3d
int64_t _fini(void) {
    // 0x1f30
    int64_t result; // 0x1f30
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

