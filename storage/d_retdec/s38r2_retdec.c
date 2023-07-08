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
int32_t set_var(int16_t g_2_l, char g_8_l, int16_t g_30_l, int32_t g_57_l, int32_t g_58_l, int16_t g_65_l, int32_t g_79_l, int32_t g_82_l, int32_t g_103_l, char g_104_l, int32_t g_121_l, int32_t g_134_l, char g_150_l, int16_t g_153_l, int16_t g_154_l, int16_t g_164_l, int32_t g_167_l, char g_168_l, int16_t g_171_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x4fe0
int32_t g2 = 0x88a1f; // 0x5020
int32_t g3 = 0x6450008; // 0x5022
int32_t g4 = -0x6b1bf9bb; // 0x5024
int32_t g5 = 0xcb45; // 0x5028
int32_t g6 = -1; // 0x502c
int32_t g7 = -0x73aa35f3; // 0x5030
int32_t g8 = 0x119cd2c7; // 0x5034
int32_t g9 = -1; // 0x5038
int32_t g10 = 6; // 0x503c
char g11 = 19; // 0x5040
int32_t g12 = 0x146bfff7; // 0x5042
int32_t g13 = 0x45c3146b; // 0x5044
int32_t g14 = -0x1eecba3d; // 0x5046
int32_t g15 = -0x745d1eed; // 0x5048
int32_t g16 = 669; // 0x504c
int32_t g17 = -1; // 0x5050
char g18 = 0; // 0x5060
int32_t g19 = 0; // 0x5070
int32_t g20 = 0; // 0x5074
int32_t g21 = 0; // 0x5078
char g22 = 0; // 0x5079
int32_t * g23 = NULL; // 0x5080
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
    if (g18 != 0) {
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
    g18 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s38r2.c
// Address range: 0x1150 - 0x136d
// Line range:    193 - 220
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
    transparent_crc((int32_t)*(char *)&g3, "g_8", v1);
    transparent_crc((int32_t)*(int16_t *)&g19, "g_30", v1);
    transparent_crc(g4, "g_57", v1);
    transparent_crc(g20, "g_58", v1);
    transparent_crc((int32_t)*(int16_t *)&g5, "g_65", v1);
    transparent_crc(g6, "g_79", v1);
    transparent_crc(g7, "g_82", v1);
    transparent_crc(g8, "g_103", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_104", v1);
    transparent_crc(g9, "g_121", v1);
    transparent_crc(g10, "g_134", v1);
    transparent_crc((int32_t)g11, "g_150", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_153", v1);
    transparent_crc((int32_t)*(int16_t *)&g13, "g_154", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_164", v1);
    transparent_crc(g15, "g_167", v1);
    transparent_crc((int32_t)g22, "g_168", v1);
    transparent_crc((int32_t)*(int16_t *)&g16, "g_171", v1);
    platform_main_end(-1 - *(int32_t *)0x5050, v1);
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

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s38r2.c
// Address range: 0x1420 - 0x2146
// Line range:    56 - 186
int32_t func_1(void) {
    // 0x1420
    set_var(-0x75e1, 34, 0, -0xde81, 125, -0x34bb, -1, -0x73aa35f3, 0x119cd2c7, 0, -1, 6, 19, -9, 0x146b, 0x45c3, -0x745d1eed, 0, 669);
    return 8;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2150 - 0x2195
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x2150
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x2174
        printf("...checksum after hashing %s : %X\n", vname, -1 - g17);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x21a0 - 0x21c5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x21a0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s38r2.c
// Address range: 0x21d0 - 0x22e4
// Line range:    46 - 48
int32_t set_var(int16_t g_2_l, char g_8_l, int16_t g_30_l, int32_t g_57_l, int32_t g_58_l, int16_t g_65_l, int32_t g_79_l, int32_t g_82_l, int32_t g_103_l, char g_104_l, int32_t g_121_l, int32_t g_134_l, char g_150_l, int16_t g_153_l, int16_t g_154_l, int16_t g_164_l, int32_t g_167_l, char g_168_l, int16_t g_171_l) {
    // 0x21d0
    *(int16_t *)&g2 = g_2_l;
    *(char *)&g3 = g_8_l;
    *(int16_t *)&g19 = g_30_l;
    g4 = g_57_l;
    g20 = g_58_l;
    *(int16_t *)&g5 = g_65_l;
    g6 = g_79_l;
    g7 = g_82_l;
    g8 = g_103_l;
    *(char *)&g21 = g_104_l;
    g9 = g_121_l;
    g10 = g_134_l;
    g11 = g_150_l;
    *(int16_t *)&g12 = g_153_l;
    *(int16_t *)&g13 = g_154_l;
    *(int16_t *)&g14 = g_164_l;
    g15 = g_167_l;
    g22 = g_168_l;
    *(int16_t *)&g16 = g_171_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x22f0 - 0x234d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x22f0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2350 - 0x2390
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g17;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g23); // 0x2385
    g17 = v1 / 256 ^ v2;
}

// Address range: 0x2390 - 0x239d
int64_t _fini(void) {
    // 0x2390
    int64_t result; // 0x2390
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

