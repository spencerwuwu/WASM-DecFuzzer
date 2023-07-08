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
int32_t set_var(int16_t g_7_l, int32_t g_13_l, int16_t g_20_l, int16_t g_21_l, int32_t g_22_l, int32_t g_23_l, int32_t g_25_l, int16_t g_46_l, char g_55_l, char g_60_l, int32_t g_77_l, char g_80_l, int32_t g_92_l, int16_t g_95_l, int32_t g_152_l, char g_164_l, char g_174_l, int32_t g_195_l, char g_288_l, int32_t g_289_l, char g_307_l, int16_t g_342_l, int32_t g_347_l, int16_t g_348_l, int32_t g_389_l, char g_421_l, int32_t g_423_l, char g_456_l, int32_t g_457_l, char g_458_l, int32_t g_585_l, int32_t g_644_l, int32_t g_652_l, int32_t g_653_l, char g_655_l, int32_t g_687_l, int32_t g_727_l, char g_765_l, int32_t g_766_l, int32_t g_934_l, int32_t g_951_l, char g_1023_l, char g_1042_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x8fe0
int32_t g2 = 0xfffe; // 0x9020
int32_t g3 = -9; // 0x9024
int16_t g4 = 0x4aee; // 0x9028
int32_t g5 = -1; // 0x902c
int32_t g6 = 0x1d77f172; // 0x9030
int32_t g7 = -0x68bcf0ab; // 0x9034
int32_t g8 = 0x949743; // 0x9036
int32_t g9 = 0x9497; // 0x9037
char g10 = -108; // 0x9038
int32_t g11 = -0x313e2044; // 0x903c
int16_t g12 = -7; // 0x9040
int32_t g13 = -3; // 0x9044
char g14 = -20; // 0x9048
int32_t g15 = 0x1000086; // 0x9049
int32_t g16 = 1; // 0x904c
int32_t g17 = 159; // 0x9050
int32_t g18 = 5; // 0x9054
char g19 = -60; // 0x9058
int32_t g20 = 0x1e1ffff; // 0x905a
int32_t g21 = -0x36b9fe1f; // 0x905c
int16_t g22 = -0x2f1b; // 0x9060
int32_t g23 = -0xc20ff18; // 0x9062
int32_t g24 = -0x23120c21; // 0x9064
int32_t g25 = -2; // 0x9068
int32_t g26 = 64; // 0x906c
int32_t g27 = 0x6916e97d; // 0x9070
int32_t g28 = 7; // 0x9074
int32_t g29 = 1; // 0x9078
int32_t g30 = 1; // 0x907c
char g31 = 75; // 0x9080
int32_t g32 = -1; // 0x9084
char g33 = 4; // 0x9088
int32_t g34 = -1; // 0x908c
int32_t g35 = -4; // 0x9090
char g36 = 38; // 0x9094
int64_t g37; // 0x9095
int32_t g38 = -1; // 0x9098
int64_t g39 = 0; // 0x90a0
int32_t g40 = 0; // 0x90b0
int32_t g41 = 0; // 0x90b4
int32_t g42 = 0; // 0x90b8
int32_t g43 = 0; // 0x90bc
int32_t g44 = 0; // 0x90c0
int32_t g45 = 0; // 0x90c4
int32_t g46 = 0; // 0x90c8
int32_t * g47 = NULL; // 0x90d0
int32_t g48;

// ------- Dynamically Linked Functions Without Header --------

void __cxa_finalize(int64_t * a1);
void __gmon_start__(void);
int32_t __libc_start_main(int64_t a1, int32_t a2, char ** a3, void (*a4)(), void (*a5)(), void (*a6)());

// ------------------------ Functions -------------------------

// Address range: 0x1000 - 0x101b
int64_t _init(void) {
    int64_t result = 0; // 0x1012
    if (*(int64_t *)0x8fd0 != 0) {
        // 0x1014
        __gmon_start__();
        result = &g48;
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
    return &g39;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g39 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0x9018);
    }
    int64_t result2 = function_1080(); // 0x1118
    *(char *)&g39 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s465retdec.c
// Address range: 0x1150 - 0x1580
// Line range:    637 - 688
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_7", v1);
    transparent_crc(g3, "g_13", v1);
    transparent_crc((int32_t)g4, "g_20", v1);
    transparent_crc((int32_t)*(int16_t *)&g40, "g_21", v1);
    transparent_crc(g5, "g_22", v1);
    transparent_crc(g6, "g_23", v1);
    transparent_crc(g41, "g_25", v1);
    transparent_crc((int32_t)*(int16_t *)&g7, "g_46", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_55", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_60", v1);
    transparent_crc(g42, "g_77", v1);
    transparent_crc((int32_t)g10, "g_80", v1);
    transparent_crc(g11, "g_92", v1);
    transparent_crc((int32_t)g12, "g_95", v1);
    transparent_crc(g13, "g_152", v1);
    transparent_crc((int32_t)g14, "g_164", v1);
    transparent_crc((int32_t)*(char *)&g15, "g_174", v1);
    transparent_crc(g16, "g_195", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_288", v1);
    transparent_crc(g18, "g_289", v1);
    transparent_crc((int32_t)g19, "g_307", v1);
    transparent_crc((int32_t)*(int16_t *)&g20, "g_342", v1);
    transparent_crc(g21, "g_347", v1);
    transparent_crc((int32_t)g22, "g_348", v1);
    transparent_crc(g43, "g_389", v1);
    transparent_crc((int32_t)*(char *)&g23, "g_421", v1);
    transparent_crc(g24, "g_423", v1);
    transparent_crc((int32_t)*(char *)&g44, "g_456", v1);
    transparent_crc(g25, "g_457", v1);
    transparent_crc((int32_t)*(char *)&g26, "g_458", v1);
    transparent_crc(g27, "g_585", v1);
    transparent_crc(g28, "g_644", v1);
    transparent_crc(g29, "g_652", v1);
    transparent_crc(g30, "g_653", v1);
    transparent_crc((int32_t)g31, "g_655", v1);
    transparent_crc(g45, "g_687", v1);
    transparent_crc(g32, "g_727", v1);
    transparent_crc((int32_t)g33, "g_765", v1);
    transparent_crc(g34, "g_766", v1);
    transparent_crc(g35, "g_934", v1);
    transparent_crc(g46, "g_951", v1);
    transparent_crc((int32_t)g36, "g_1023", v1);
    transparent_crc((int32_t)*(char *)0x9095, "g_1042", v1);
    platform_main_end(-1 - *(int32_t *)0x9098, v1);
    return (int32_t)&g48 ^ (int32_t)&g48;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1580 - 0x1586
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1580
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1590 - 0x1625
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x15f9
        int32_t v2 = i; // 0x1590
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x15c6
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1604
        *(int32_t *)(4 * i + (int64_t)&g47) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s465retdec.c
// Address range: 0x1630 - 0x6a5f
// Line range:    80 - 630
int32_t func_1(void) {
    // 0x1630
    set_var(-2, -10, 0x4aee, 0, -1, 0x1d77f173, 0, 3925, 67, -105, 0, -108, -0x313e2044, -7, -3, -20, -122, 1, -97, 5, -60, -1, -0x36b9fe1f, -0x2f1b, 0, -24, -0x23120c21, 0, -2, 64, 0x6916e97d, 7, 1, 1, 75, 0, -1, 4, -1, -4, 0, 38, -1);
    return -0xcd55510;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6a60 - 0x6aa5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x6a60
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x6a84
        printf("...checksum after hashing %s : %X\n", vname, -1 - g38);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x6ab0 - 0x6ad5
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x6ab0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s465retdec.c
// Address range: 0x6ae0 - 0x6da4
// Line range:    70 - 72
int32_t set_var(int16_t g_7_l, int32_t g_13_l, int16_t g_20_l, int16_t g_21_l, int32_t g_22_l, int32_t g_23_l, int32_t g_25_l, int16_t g_46_l, char g_55_l, char g_60_l, int32_t g_77_l, char g_80_l, int32_t g_92_l, int16_t g_95_l, int32_t g_152_l, char g_164_l, char g_174_l, int32_t g_195_l, char g_288_l, int32_t g_289_l, char g_307_l, int16_t g_342_l, int32_t g_347_l, int16_t g_348_l, int32_t g_389_l, char g_421_l, int32_t g_423_l, char g_456_l, int32_t g_457_l, char g_458_l, int32_t g_585_l, int32_t g_644_l, int32_t g_652_l, int32_t g_653_l, char g_655_l, int32_t g_687_l, int32_t g_727_l, char g_765_l, int32_t g_766_l, int32_t g_934_l, int32_t g_951_l, char g_1023_l, char g_1042_l) {
    // 0x6ae0
    *(int16_t *)&g2 = g_7_l;
    g3 = g_13_l;
    g4 = g_20_l;
    *(int16_t *)&g40 = g_21_l;
    g5 = g_22_l;
    g6 = g_23_l;
    g41 = g_25_l;
    *(int16_t *)&g7 = g_46_l;
    *(char *)&g8 = g_55_l;
    *(char *)&g9 = g_60_l;
    g42 = g_77_l;
    g10 = g_80_l;
    g11 = g_92_l;
    g12 = g_95_l;
    g13 = g_152_l;
    g14 = g_164_l;
    *(char *)&g15 = g_174_l;
    g16 = g_195_l;
    *(char *)&g17 = g_288_l;
    g18 = g_289_l;
    g19 = g_307_l;
    *(int16_t *)&g20 = g_342_l;
    g21 = g_347_l;
    g22 = g_348_l;
    g43 = g_389_l;
    *(char *)&g23 = g_421_l;
    g24 = g_423_l;
    *(char *)&g44 = g_456_l;
    g25 = g_457_l;
    *(char *)&g26 = g_458_l;
    g27 = g_585_l;
    g28 = g_644_l;
    g29 = g_652_l;
    g30 = g_653_l;
    g31 = g_655_l;
    g45 = g_687_l;
    g32 = g_727_l;
    g33 = g_765_l;
    g34 = g_766_l;
    g35 = g_934_l;
    g46 = g_951_l;
    g36 = g_1023_l;
    *(char *)&g37 = g_1042_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6db0 - 0x6e0d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x6db0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6e10 - 0x6e50
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g38;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g47); // 0x6e45
    g38 = v1 / 256 ^ v2;
}

// Address range: 0x6e50 - 0x6e5d
int64_t _fini(void) {
    // 0x6e50
    int64_t result; // 0x6e50
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

