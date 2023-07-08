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
int32_t set_var(int32_t g_2_l, char g_16_l, int16_t g_43_l, int32_t g_49_l, int32_t g_56_l, char g_70_l, int16_t g_72_l, int32_t g_90_l, int16_t g_92_l, char g_124_l, int16_t g_125_l, int32_t g_148_l, int16_t g_164_l, int32_t g_185_l, int32_t g_186_l, char g_187_l, int32_t g_188_l, char g_207_l, char g_315_l, int32_t g_316_l, int16_t g_317_l, int16_t g_346_l, int32_t g_349_l, int32_t g_365_l, int16_t g_388_l, int32_t g_689_l, int16_t g_690_l, int16_t g_691_l, char g_715_l, int32_t g_716_l, int16_t g_794_l, int16_t g_871_l, int16_t g_897_l, int16_t g_980_l, int32_t g_988_l, int32_t g_999_l, char g_1030_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int16_t g1 = 0; // 0x56e
int64_t g2 = 0; // 0xafe0
int32_t g3 = -0xffd2; // 0xb020
int32_t g4 = 0x1ffff; // 0xb022
int32_t g5 = 1; // 0xb024
int32_t g6 = -1; // 0xb028
int32_t g7 = 220; // 0xb02c
int32_t g8 = -0x4f4d53bb; // 0xb030
int16_t g9 = -0x7ae9; // 0xb034
char g10 = 5; // 0xb036
int32_t g11 = -7; // 0xb038
int32_t g12 = 8; // 0xb03c
int32_t g13 = -0x5cb02f22; // 0xb040
int32_t g14 = 5; // 0xb044
int32_t g15 = 70; // 0xb048
int32_t g16 = 0x6a0a4b55; // 0xb04c
int32_t g17 = 1795; // 0xb050
char g18 = 7; // 0xb051
int32_t g19 = -10; // 0xb054
int32_t g20 = -0x50005; // 0xb058
int32_t g21 = 0x3069fffa; // 0xb05a
int32_t g22 = 0x5cd83069; // 0xb05c
int32_t g23 = 0x1a0a5ba7; // 0xb060
int32_t g24 = 0x8b04; // 0xb064
int32_t g25 = 8; // 0xb068
int32_t g26 = 0x13613; // 0xb06c
int32_t g27 = 0x50001; // 0xb06e
int32_t g28 = 5; // 0xb070
int32_t g29 = -0x2799cb8c; // 0xb074
int32_t g30 = -0xe3ffff; // 0xb078
int32_t g31 = 0x69d4ff1c; // 0xb07a
int16_t g32 = 0x69d4; // 0xb07c
int32_t g33 = -0x4fa92; // 0xb07e
int32_t g34 = -5; // 0xb080
int32_t g35 = 1; // 0xb084
int32_t g36 = 247; // 0xb088
int32_t g37 = -1; // 0xb08c
int64_t g38 = 0; // 0xb090
int32_t g39 = 0; // 0xb0a0
int16_t g40 = 0; // 0xb0a4
int16_t g41 = 0; // 0xb0a6
int32_t * g42 = NULL; // 0xb0b0
int32_t g43;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0xafd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g43;
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
    return &g38;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g38 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g2 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0xb018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g38 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s694r2.c
// Address range: 0x1150 - 0x14fe
// Line range:    666 - 711
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
    transparent_crc(g39, "g_2", v1);
    transparent_crc((int32_t)*(char *)&g3, "g_16", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_43", v1);
    transparent_crc(g5, "g_49", v1);
    transparent_crc(g6, "g_56", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_70", v1);
    transparent_crc((int32_t)g40, "g_72", v1);
    transparent_crc(g8, "g_90", v1);
    transparent_crc((int32_t)g9, "g_92", v1);
    transparent_crc((int32_t)g10, "g_124", v1);
    transparent_crc((int32_t)g41, "g_125", v1);
    transparent_crc(g11, "g_148", v1);
    transparent_crc((int32_t)*(int16_t *)&g12, "g_164", v1);
    transparent_crc(g13, "g_185", v1);
    transparent_crc(g14, "g_186", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_187", v1);
    transparent_crc(g16, "g_188", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_207", v1);
    transparent_crc((int32_t)g18, "g_315", v1);
    transparent_crc(g19, "g_316", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_317", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_346", v1);
    transparent_crc(g22, "g_349", v1);
    transparent_crc(g23, "g_365", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_388", v1);
    transparent_crc(g25, "g_689", v1);
    transparent_crc((int32_t)*(int16_t *)&g26, "g_690", v1);
    transparent_crc((int32_t)*(int16_t *)&g27, "g_691", v1);
    transparent_crc((int32_t)*(char *)&g28, "g_715", v1);
    transparent_crc(g29, "g_716", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_794", v1);
    transparent_crc((int32_t)*(int16_t *)&g31, "g_871", v1);
    transparent_crc((int32_t)g32, "g_897", v1);
    transparent_crc((int32_t)*(int16_t *)&g33, "g_980", v1);
    transparent_crc(g34, "g_988", v1);
    transparent_crc(g35, "g_999", v1);
    transparent_crc((int32_t)*(char *)&g36, "g_1030", v1);
    platform_main_end(-1 - *(int32_t *)0xb08c, v1);
    return (int32_t)&g43 ^ (int32_t)&g43;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1500 - 0x1506
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1500
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1510 - 0x15a5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1579
        int32_t v2 = i; // 0x1510
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1546
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1584
        *(int32_t *)(4 * i + (int64_t)&g42) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s694r2.c
// Address range: 0x15b0 - 0x82a9
// Line range:    74 - 659
int32_t func_1(void) {
    // 0x15b0
    set_var(0, 1, -1, 1, -1, -36, 0, -0x4f4d53bb, -0x7ae9, 5, 0, -7, 8, -0x5cb02f22, 5, 70, 0x6a0a4b55, 3, 7, -10, -5, -6, 0x5cd83069, 0x1a0a5ba7, -0x74fc, 8, 0x3613, 1, 5, -0x2799cb8c, 1, -228, 0x69d4, (int16_t)&g1, -5, 1, -9);
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x82b0 - 0x82f5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x82b0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x82d4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g37);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x8300 - 0x8325
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x8300
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s694r2.c
// Address range: 0x8330 - 0x85a8
// Line range:    64 - 66
int32_t set_var(int32_t g_2_l, char g_16_l, int16_t g_43_l, int32_t g_49_l, int32_t g_56_l, char g_70_l, int16_t g_72_l, int32_t g_90_l, int16_t g_92_l, char g_124_l, int16_t g_125_l, int32_t g_148_l, int16_t g_164_l, int32_t g_185_l, int32_t g_186_l, char g_187_l, int32_t g_188_l, char g_207_l, char g_315_l, int32_t g_316_l, int16_t g_317_l, int16_t g_346_l, int32_t g_349_l, int32_t g_365_l, int16_t g_388_l, int32_t g_689_l, int16_t g_690_l, int16_t g_691_l, char g_715_l, int32_t g_716_l, int16_t g_794_l, int16_t g_871_l, int16_t g_897_l, int16_t g_980_l, int32_t g_988_l, int32_t g_999_l, char g_1030_l) {
    // 0x8330
    g39 = g_2_l;
    *(char *)&g3 = g_16_l;
    *(int16_t *)&g4 = g_43_l;
    g5 = g_49_l;
    g6 = g_56_l;
    *(char *)&g7 = g_70_l;
    g40 = g_72_l;
    g8 = g_90_l;
    g9 = g_92_l;
    g10 = g_124_l;
    g41 = g_125_l;
    g11 = g_148_l;
    *(int16_t *)&g12 = g_164_l;
    g13 = g_185_l;
    g14 = g_186_l;
    *(char *)&g15 = g_187_l;
    g16 = g_188_l;
    *(char *)&g17 = g_207_l;
    g18 = g_315_l;
    g19 = g_316_l;
    *(int16_t *)&g20 = g_317_l;
    *(int16_t *)&g21 = g_346_l;
    g22 = g_349_l;
    g23 = g_365_l;
    *(int16_t *)&g24 = g_388_l;
    g25 = g_689_l;
    *(int16_t *)&g26 = g_690_l;
    *(int16_t *)&g27 = g_691_l;
    *(char *)&g28 = g_715_l;
    g29 = g_716_l;
    *(int16_t *)&g30 = g_794_l;
    *(int16_t *)&g31 = g_871_l;
    g32 = g_897_l;
    *(int16_t *)&g33 = g_980_l;
    g34 = g_988_l;
    g35 = g_999_l;
    *(char *)&g36 = g_1030_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x85b0 - 0x860d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x85b0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x8610 - 0x8650
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g37;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g42); // 0x8645
    g37 = v1 / 256 ^ v2;
}

// Address range: 0x8650 - 0x865d
int64_t _fini(void) {
    // 0x8650
    int64_t result; // 0x8650
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

