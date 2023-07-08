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
int32_t set_var(int32_t g_2_l, int32_t g_16_l, int32_t g_25_l, char g_44_l, int16_t g_46_l, int16_t g_48_l, int32_t g_55_l, int32_t g_113_l, int32_t g_114_l, int32_t g_135_l, int32_t g_148_l, int32_t g_245_l, int16_t g_282_l, int16_t g_285_l, int16_t g_287_l, int32_t g_340_l, int16_t g_391_l, int32_t g_405_l, char g_429_l, int16_t g_433_l, int16_t g_445_l, int32_t g_446_l, int32_t g_453_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = -0x5374ec14; // 0x6020
int32_t g3 = 0x31aa08; // 0x6024
int32_t g4 = -0x65b772af; // 0x6028
int32_t g5 = 0xc7df; // 0x602c
int32_t g6 = -0x45666b6d; // 0x6030
int32_t g7 = -0x3beba0b0; // 0x6034
int32_t g8 = -0x3f756e9e; // 0x6038
int32_t g9 = 0x3383fd25; // 0x603c
int32_t g10 = -0x4067d602; // 0x6040
int16_t g11 = -7; // 0x6044
int32_t g12 = -0x3bcc; // 0x6046
int32_t g13 = -1; // 0x6048
int32_t g14 = 1; // 0x604c
int32_t g15 = 0x1a89dace; // 0x6050
int32_t g16 = 0x500bb; // 0x6054
int32_t g17 = 0x19a10005; // 0x6056
int32_t g18 = 0x19a1; // 0x6058
int32_t g19 = -3; // 0x605c
int32_t g20 = 0x6d88ae04; // 0x6060
int32_t g21 = -1; // 0x6064
char g22 = 0; // 0x6070
char g23 = 0; // 0x6080
int32_t g24 = 0; // 0x6082
int32_t g25 = 0; // 0x6084
int32_t g26 = 0; // 0x6088
int32_t * g27 = NULL; // 0x6090
int32_t g28;

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
    if (g22 != 0) {
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
    g22 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s471retdec.c
// Address range: 0x1150 - 0x13c1
// Line range:    408 - 439
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
    transparent_crc(g3, "g_16", v1);
    transparent_crc(g4, "g_25", v1);
    transparent_crc((int32_t)g23, "g_44", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_46", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_48", v1);
    transparent_crc(g6, "g_55", v1);
    transparent_crc(g7, "g_113", v1);
    transparent_crc(g8, "g_114", v1);
    transparent_crc(g9, "g_135", v1);
    transparent_crc(g10, "g_148", v1);
    transparent_crc(g25, "g_245", v1);
    transparent_crc((int32_t)g11, "g_282", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_285", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_287", v1);
    transparent_crc(g13, "g_340", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_391", v1);
    transparent_crc(g15, "g_405", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_429", v1);
    transparent_crc((int32_t)*(int16_t *)&g17, "g_433", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_445", v1);
    transparent_crc(g19, "g_446", v1);
    transparent_crc(g20, "g_453", v1);
    platform_main_end(-1 - *(int32_t *)0x6064, v1);
    return (int32_t)&g28 ^ (int32_t)&g28;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x13d0 - 0x13d6
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x13d0
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x13e0 - 0x1475
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1449
        int32_t v2 = i; // 0x13e0
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1416
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1454
        *(int32_t *)(4 * i + (int64_t)&g27) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s471retdec.c
// Address range: 0x1480 - 0x3452
// Line range:    60 - 401
int16_t func_1(void) {
    // 0x343c
    set_var(1, 0x31aa08, -0x65b772af, 0, 0, -0x3821, 1, -0x3beba0b0, -0x3f756e9e, 0x43bfd272, -0x4067d601, 0, -7, -0x3bcc, 0, -1, 1, 0x1a89dace, -69, 5, 0x19a1, -3, 0x6d88ae04);
    return 0x3758;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3460 - 0x34a5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3460
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x3484
        printf("...checksum after hashing %s : %X\n", vname, -1 - g21);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x34b0 - 0x34d5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x34b0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s471retdec.c
// Address range: 0x34e0 - 0x365e
// Line range:    50 - 52
int32_t set_var(int32_t g_2_l, int32_t g_16_l, int32_t g_25_l, char g_44_l, int16_t g_46_l, int16_t g_48_l, int32_t g_55_l, int32_t g_113_l, int32_t g_114_l, int32_t g_135_l, int32_t g_148_l, int32_t g_245_l, int16_t g_282_l, int16_t g_285_l, int16_t g_287_l, int32_t g_340_l, int16_t g_391_l, int32_t g_405_l, char g_429_l, int16_t g_433_l, int16_t g_445_l, int32_t g_446_l, int32_t g_453_l) {
    // 0x34e0
    g2 = g_2_l;
    g3 = g_16_l;
    g4 = g_25_l;
    g23 = g_44_l;
    *(int16_t *)&g24 = g_46_l;
    *(int16_t *)&g5 = g_48_l;
    g6 = g_55_l;
    g7 = g_113_l;
    g8 = g_114_l;
    g9 = g_135_l;
    g10 = g_148_l;
    g25 = g_245_l;
    g11 = g_282_l;
    *(int16_t *)&g12 = g_285_l;
    *(int16_t *)&g26 = g_287_l;
    g13 = g_340_l;
    *(int16_t *)&g14 = g_391_l;
    g15 = g_405_l;
    *(char *)&g16 = g_429_l;
    *(int16_t *)&g17 = g_433_l;
    *(int16_t *)&g18 = g_445_l;
    g19 = g_446_l;
    g20 = g_453_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3660 - 0x36bd
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x3660
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x36c0 - 0x3700
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g21;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g27); // 0x36f5
    g21 = v1 / 256 ^ v2;
}

// Address range: 0x3700 - 0x370d
int64_t _fini(void) {
    // 0x3700
    int64_t result; // 0x3700
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

