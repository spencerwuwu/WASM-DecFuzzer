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
int32_t set_var(int32_t g_9_l, int32_t g_17_l, int16_t g_30_l, int32_t g_35_l, int16_t g_36_l, char g_50_l, int16_t g_60_l, int32_t g_121_l, char g_126_l, int16_t g_139_l, int32_t g_158_l, int32_t g_164_l, char g_192_l, int32_t g_214_l, int32_t g_243_l, char g_393_l, char g_412_l, char g_454_l, int32_t g_455_l, int16_t g_458_l, int32_t g_461_l, int32_t g_464_l, int32_t g_522_l, int16_t g_525_l, char g_526_l, int16_t g_527_l, int32_t g_530_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x5fe0
int32_t g2 = -1; // 0x6020
int32_t g3 = -5; // 0x6024
int32_t g4 = 0xafbe; // 0x6028
int32_t g5 = 0x165f5c9b; // 0x602c
int32_t g6 = -0x268ffff; // 0x6030
int32_t g7 = -0x722f0269; // 0x6032
int32_t g8 = 0x57498dd0; // 0x6034
int32_t g9 = -0x6eeeff49; // 0x6038
int32_t g10 = -0x66eef; // 0x603a
int32_t g11 = -7; // 0x603c
int32_t g12 = -6; // 0x6040
int32_t g13 = 255; // 0x6044
int32_t g14 = -7; // 0x6048
int32_t g15 = -0x77699af7; // 0x604c
int32_t g16 = 0xc9c6dc; // 0x6050
int32_t g17 = -0x6dff363a; // 0x6051
int32_t g18 = -0x516dff37; // 0x6052
int32_t g19 = -0x58a3516e; // 0x6054
int16_t g20 = -0x4f11; // 0x6058
int32_t g21 = 0x412eb722; // 0x605c
int32_t g22 = -0x7d6c79ee; // 0x6060
int32_t g23 = 0x54f97ce6; // 0x6064
int32_t g24 = 0xc8b29b; // 0x6068
char g25 = -56; // 0x606a
int32_t g26 = 1; // 0x606c
int32_t g27 = 4; // 0x6070
int32_t g28 = -1; // 0x6074
char g29 = 0; // 0x6080
int32_t g30 = 0; // 0x6090
int32_t * g31 = NULL; // 0x60a0
int32_t g32;

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
        result = &g32;
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
    return 0x6078;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g29 != 0) {
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
    g29 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s927r2.c
// Address range: 0x1150 - 0x1419
// Line range:    400 - 435
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
    transparent_crc(g2, "g_9", v1);
    transparent_crc(g3, "g_17", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_30", v1);
    transparent_crc(g5, "g_35", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_36", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_50", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_60", v1);
    transparent_crc(g8, "g_121", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_126", v1);
    transparent_crc((int32_t)*(int16_t *)&g10, "g_139", v1);
    transparent_crc(g11, "g_158", v1);
    transparent_crc(g12, "g_164", v1);
    transparent_crc((int32_t)*(char *)&g13, "g_192", v1);
    transparent_crc(g14, "g_214", v1);
    transparent_crc(g15, "g_243", v1);
    transparent_crc((int32_t)*(char *)&g16, "g_393", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_412", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_454", v1);
    transparent_crc(g19, "g_455", v1);
    transparent_crc((int32_t)g20, "g_458", v1);
    transparent_crc(g21, "g_461", v1);
    transparent_crc(g22, "g_464", v1);
    transparent_crc(g23, "g_522", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_525", v1);
    transparent_crc((int32_t)g25, "g_526", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_527", v1);
    transparent_crc(g27, "g_530", v1);
    platform_main_end(-1 - *(int32_t *)0x6074, v1);
    return (int32_t)&g32 ^ (int32_t)&g32;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1420 - 0x1426
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1420
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1430 - 0x14c5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1499
        int32_t v2 = i; // 0x1430
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1466
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x14a4
        *(int32_t *)(4 * i + (int64_t)&g31) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s927r2.c
// Address range: 0x14d0 - 0x3772
// Line range:    68 - 393
int32_t func_1(void) {
    // 0x14d0
    set_var(-1, 7, -0x5042, 0x165f5c9b, 0, 1, -617, 0x57498dd0, -102, -0x6eef, 0, -6, -1, -7, 0, -36, -58, -55, -0x58a3516e, -0x4f11, 0x412eb722, -0x7d6c79ee, 0x54f97ce6, -0x4d65, -56, 1, 4);
    return -0x7d6c79ee;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3780 - 0x37c5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x3780
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x37a4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g28);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x37d0 - 0x37f5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x37d0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s927r2.c
// Address range: 0x3800 - 0x39c6
// Line range:    58 - 60
int32_t set_var(int32_t g_9_l, int32_t g_17_l, int16_t g_30_l, int32_t g_35_l, int16_t g_36_l, char g_50_l, int16_t g_60_l, int32_t g_121_l, char g_126_l, int16_t g_139_l, int32_t g_158_l, int32_t g_164_l, char g_192_l, int32_t g_214_l, int32_t g_243_l, char g_393_l, char g_412_l, char g_454_l, int32_t g_455_l, int16_t g_458_l, int32_t g_461_l, int32_t g_464_l, int32_t g_522_l, int16_t g_525_l, char g_526_l, int16_t g_527_l, int32_t g_530_l) {
    // 0x3800
    g2 = g_9_l;
    g3 = g_17_l;
    *(int16_t *)&g4 = g_30_l;
    g5 = g_35_l;
    *(int16_t *)&g30 = g_36_l;
    *(char *)&g6 = g_50_l;
    *(int16_t *)&g7 = g_60_l;
    g8 = g_121_l;
    *(char *)&g9 = g_126_l;
    *(int16_t *)&g10 = g_139_l;
    g11 = g_158_l;
    g12 = g_164_l;
    *(char *)&g13 = g_192_l;
    g14 = g_214_l;
    g15 = g_243_l;
    *(char *)&g16 = g_393_l;
    *(char *)&g17 = g_412_l;
    *(char *)&g18 = g_454_l;
    g19 = g_455_l;
    g20 = g_458_l;
    g21 = g_461_l;
    g22 = g_464_l;
    g23 = g_522_l;
    *(int16_t *)&g24 = g_525_l;
    g25 = g_526_l;
    *(int16_t *)&g26 = g_527_l;
    g27 = g_530_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x39d0 - 0x3a2d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x39d0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x3a30 - 0x3a70
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g28;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g31); // 0x3a65
    g28 = v1 / 256 ^ v2;
}

// Address range: 0x3a70 - 0x3a7d
int64_t _fini(void) {
    // 0x3a70
    int64_t result; // 0x3a70
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

