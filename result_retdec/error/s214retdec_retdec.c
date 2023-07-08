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
int32_t func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_15_l, int32_t g_21_l, int32_t g_40_l, int16_t g_65_l, int32_t g_72_l, int16_t g_82_l, int16_t g_107_l, int32_t g_142_l, int32_t g_155_l, int16_t g_191_l, int32_t g_210_l, int32_t g_215_l, int32_t g_216_l, char g_242_l, int16_t g_248_l, char g_260_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0x4302; // 0x31cd
int64_t g2 = 0; // 0x4fe0
int32_t g3 = 2; // 0x5020
int32_t g4 = -1; // 0x5024
int32_t g5 = -0x4a71b966; // 0x5028
int32_t g6 = -0x4e4f3521; // 0x502c
int32_t g7 = -5; // 0x5030
int32_t g8 = -0x72d3571f; // 0x5034
int32_t g9 = 0x1750; // 0x5038
int32_t g10 = -1; // 0x503c
int32_t g11 = 0xfff8; // 0x5040
int32_t g12 = 1; // 0x5044
int32_t g13 = 8; // 0x5048
int32_t g14 = 2916; // 0x504c
int32_t g15 = -0x57d04a5d; // 0x5050
int32_t g16 = 0x396d215d; // 0x5054
int32_t g17 = 0x7b760047; // 0x5058
int32_t g18 = 0xb7b76; // 0x505a
int32_t g19 = 11; // 0x505c
int32_t g20 = -1; // 0x5060
char g21 = 0; // 0x5070
int32_t g22 = 0; // 0x5080
int32_t g23 = 0; // 0x5084
int32_t * g24 = NULL; // 0x5090
int32_t g25;

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
        result = &g25;
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
    return 0x5068;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g21 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g2 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x5018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g21 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s214retdec.c
// Address range: 0x1150 - 0x1365
// Line range:    223 - 250
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
    transparent_crc(g3, "g_2", v1);
    transparent_crc(g4, "g_3", v1);
    transparent_crc(g5, "g_4", v1);
    transparent_crc(g6, "g_15", v1);
    transparent_crc(g7, "g_21", v1);
    transparent_crc(g8, "g_40", v1);
    transparent_crc((int32_t)*(int16_t *)&g9, "g_65", v1);
    transparent_crc(g10, "g_72", v1);
    transparent_crc((int32_t)*(int16_t *)&g22, "g_82", v1);
    transparent_crc((int32_t)*(int16_t *)&g11, "g_107", v1);
    transparent_crc(g12, "g_142", v1);
    transparent_crc(g13, "g_155", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_191", v1);
    transparent_crc(g23, "g_210", v1);
    transparent_crc(g15, "g_215", v1);
    transparent_crc(g16, "g_216", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_242", v1);
    transparent_crc((int32_t)*(int16_t *)&g18, "g_248", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_260", v1);
    platform_main_end(-1 - *(int32_t *)0x5060, v1);
    return (int32_t)&g25 ^ (int32_t)&g25;
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
        *(int32_t *)(4 * i + (int64_t)&g24) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s214retdec.c
// Address range: 0x1420 - 0x25af
// Line range:    56 - 216
int32_t func_1(void) {
    // 0x259a
    set_var(2, -1, (uint32_t)(int32_t)(bool)((uint32_t)(int32_t)(uint16_t)(int16_t)&g1 / 4 >= 0x7d7c541b) / 2, -0x4e4f3521, -5, (uint32_t)(int32_t)(uint16_t)(int16_t)&g1 / 4, 0x1750, -1, 0, -8, 1, 8, 2916, 0, -0x57d04a5d, 0x396d215d, 71, 0x7b76, (char)((uint32_t)(int32_t)(bool)((uint32_t)(int32_t)(uint16_t)(int16_t)&g1 / 4 >= 0x7d7c541b) / 2));
    return 0x396d215d;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x25b0 - 0x25f5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x25b0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x25d4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g20);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x2600 - 0x2625
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x2600
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s214retdec.c
// Address range: 0x2630 - 0x272d
// Line range:    46 - 48
int32_t set_var(int32_t g_2_l, int32_t g_3_l, int32_t g_4_l, int32_t g_15_l, int32_t g_21_l, int32_t g_40_l, int16_t g_65_l, int32_t g_72_l, int16_t g_82_l, int16_t g_107_l, int32_t g_142_l, int32_t g_155_l, int16_t g_191_l, int32_t g_210_l, int32_t g_215_l, int32_t g_216_l, char g_242_l, int16_t g_248_l, char g_260_l) {
    // 0x2630
    g3 = g_2_l;
    g4 = g_3_l;
    g5 = g_4_l;
    g6 = g_15_l;
    g7 = g_21_l;
    g8 = g_40_l;
    *(int16_t *)&g9 = g_65_l;
    g10 = g_72_l;
    *(int16_t *)&g22 = g_82_l;
    *(int16_t *)&g11 = g_107_l;
    g12 = g_142_l;
    g13 = g_155_l;
    *(int16_t *)&g14 = g_191_l;
    g23 = g_210_l;
    g15 = g_215_l;
    g16 = g_216_l;
    *(char *)&g17 = g_242_l;
    *(int16_t *)&g18 = g_248_l;
    *(char *)&g19 = g_260_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2730 - 0x278d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x2730
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x2790 - 0x27d0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g20;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g24); // 0x27c5
    g20 = v1 / 256 ^ v2;
}

// Address range: 0x27d0 - 0x27dd
int64_t _fini(void) {
    // 0x27d0
    int64_t result; // 0x27d0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

