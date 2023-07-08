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
char func_1(void);
int32_t function_1030(char * format, ...);
int32_t function_1040(char * s1, char * s2);
int64_t function_1080(void);
int64_t function_10b0(void);
int64_t function_10f0(void);
int64_t function_1140(void);
void platform_main_begin(void);
void platform_main_end(int32_t crc, int32_t flag);
int32_t set_var(int16_t g_4_l, int16_t g_7_l, int32_t g_30_l, char g_32_l, char g_45_l, char g_64_l, int32_t g_76_l, char g_77_l, char g_90_l, int16_t g_97_l, int32_t g_139_l, int32_t g_172_l, char g_257_l, int32_t g_258_l, int32_t g_279_l, char g_416_l, int32_t g_436_l, char g_437_l, char g_460_l, int32_t g_605_l, int32_t g_606_l, int16_t g_683_l, char g_684_l, int32_t g_685_l, int32_t g_714_l, int32_t g_729_l, int32_t g_730_l, int32_t g_789_l, char g_950_l, char g_951_l, int32_t g_953_l, char g_954_l, int32_t g_956_l, char g_986_l, char g_1008_l, int32_t g_1073_l, int16_t g_1110_l, int32_t g_1111_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0xafe0
int32_t g2 = -10; // 0xb020
int32_t g3 = 0x4978ffff; // 0xb022
int32_t g4 = 0x707f4978; // 0xb024
int32_t g5 = 0x1c707f49; // 0xb025
int32_t g6 = 0x1b1c707f; // 0xb026
int32_t g7 = 0x1b1c70; // 0xb027
int32_t g8 = 0x1b1c; // 0xb028
int32_t g9 = -1; // 0xb02c
int32_t g10 = 0x162082; // 0xb030
int32_t g11 = 255; // 0xb034
int32_t g12 = -1; // 0xb038
int32_t g13 = 0x3e45e3b4; // 0xb03c
int32_t g14 = 253; // 0xb040
int32_t g15 = -1; // 0xb044
char g16 = -105; // 0xb048
int32_t g17 = 0x4f0000fe; // 0xb049
int32_t g18 = -0x3b089ab1; // 0xb04c
int32_t g19 = 0x5c710d65; // 0xb050
int16_t g20 = 4; // 0xb054
int32_t g21 = 0x100d0; // 0xb056
int32_t g22 = 1; // 0xb058
int32_t g23 = -1; // 0xb05c
int32_t g24 = 0x5fdd7afa; // 0xb060
int32_t g25 = -1; // 0xb064
int32_t g26 = 0x349aab86; // 0xb068
char g27 = -1; // 0xb06c
char g28 = 5; // 0xb06d
int32_t g29 = -1; // 0xb070
int32_t g30 = 0x4e23f; // 0xb074
int32_t g31 = -0x6fffb1e; // 0xb075
int32_t g32 = -0x6fffc; // 0xb076
int32_t g33 = -7; // 0xb078
int32_t g34 = 0xffff; // 0xb07c
int32_t g35 = -9; // 0xb080
int32_t g36 = -1; // 0xb084
char g37 = 0; // 0xb090
int32_t g38 = 0; // 0xb0a0
int32_t g39 = 0; // 0xb0a4
int32_t g40 = 0; // 0xb0a8
int32_t g41 = 0; // 0xb0ac
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
    return 0xb088;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (g37 != 0) {
        // 0x1130
        int64_t result; // 0x10f0
        return result;
    }
    // 0x10fd
    if (g1 != 0) {
        // 0x110b
        __cxa_finalize((int64_t *)*(int64_t *)0xb018);
    }
    int64_t result2 = function_1080(); // 0x1118
    g37 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s931r2.c
// Address range: 0x1150 - 0x150a
// Line range:    668 - 714
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
    transparent_crc((int32_t)*(int16_t *)&g2, "g_4", v1);
    transparent_crc((int32_t)*(int16_t *)&g3, "g_7", v1);
    transparent_crc(g38, "g_30", v1);
    transparent_crc((int32_t)*(char *)&g4, "g_32", v1);
    transparent_crc((int32_t)*(char *)&g5, "g_45", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_64", v1);
    transparent_crc(g39, "g_76", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_77", v1);
    transparent_crc((int32_t)*(char *)&g40, "g_90", v1);
    transparent_crc((int32_t)*(int16_t *)&g8, "g_97", v1);
    transparent_crc(g9, "g_139", v1);
    transparent_crc(g10, "g_172", v1);
    transparent_crc((int32_t)*(char *)&g11, "g_257", v1);
    transparent_crc(g12, "g_258", v1);
    transparent_crc(g13, "g_279", v1);
    transparent_crc((int32_t)*(char *)&g14, "g_416", v1);
    transparent_crc(g15, "g_436", v1);
    transparent_crc((int32_t)g16, "g_437", v1);
    transparent_crc((int32_t)*(char *)&g17, "g_460", v1);
    transparent_crc(g18, "g_605", v1);
    transparent_crc(g19, "g_606", v1);
    transparent_crc((int32_t)g20, "g_683", v1);
    transparent_crc((int32_t)*(char *)&g21, "g_684", v1);
    transparent_crc(g22, "g_685", v1);
    transparent_crc(g23, "g_714", v1);
    transparent_crc(g24, "g_729", v1);
    transparent_crc(g25, "g_730", v1);
    transparent_crc(g26, "g_789", v1);
    transparent_crc((int32_t)g27, "g_950", v1);
    transparent_crc((int32_t)g28, "g_951", v1);
    transparent_crc(g29, "g_953", v1);
    transparent_crc((int32_t)*(char *)&g30, "g_954", v1);
    transparent_crc(g41, "g_956", v1);
    transparent_crc((int32_t)*(char *)&g31, "g_986", v1);
    transparent_crc((int32_t)*(char *)&g32, "g_1008", v1);
    transparent_crc(g33, "g_1073", v1);
    transparent_crc((int32_t)*(int16_t *)&g34, "g_1110", v1);
    transparent_crc(g35, "g_1111", v1);
    platform_main_end(-1 - *(int32_t *)0xb084, v1);
    return (int32_t)&g43 ^ (int32_t)&g43;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x1510 - 0x1516
// Line range:    43 - 46
void platform_main_begin(void) {
    // 0x1510
    return;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x1520 - 0x15b5
// Line range:    57 - 74
void crc32_gentab(void) {
    for (int64_t i = 0; i < 256; i++) {
        int32_t v1 = 8; // 0x1589
        int32_t v2 = i; // 0x1520
        uint32_t v3 = v2 / 2;
        int32_t v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
        v1--;
        v2 = v4;
        while (v1 != 0) {
            // 0x1556
            v3 = v2 / 2;
            v4 = v2 % 2 == 0 ? v3 : v3 ^ -0x12477ce0;
            v1--;
            v2 = v4;
        }
        // 0x1594
        *(int32_t *)(4 * i + (int64_t)&g42) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s931r2.c
// Address range: 0x15c0 - 0x7e90
// Line range:    79 - 661
char func_1(void) {
    // 0x7e7a
    set_var(-10, -10, -0x6cb073aa, 1, 2, 127, 0, 112, 0, 0x1b1c, -1, 0, 95, -1, 0x3e45e3b4, -3, -1, -105, -2, -0x3b089ab1, 0x5c710d65, 4, -48, 1, -0x139de, 0x5fdd7afa, -1, 0, -1, 5, -1, 63, 0, -30, 4, -7, -1, -8);
    return 8;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x7e90 - 0x7ed5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x7e90
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x7eb4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g36);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x7ee0 - 0x7f05
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x7ee0
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s931r2.c
// Address range: 0x7f10 - 0x81a1
// Line range:    69 - 71
int32_t set_var(int16_t g_4_l, int16_t g_7_l, int32_t g_30_l, char g_32_l, char g_45_l, char g_64_l, int32_t g_76_l, char g_77_l, char g_90_l, int16_t g_97_l, int32_t g_139_l, int32_t g_172_l, char g_257_l, int32_t g_258_l, int32_t g_279_l, char g_416_l, int32_t g_436_l, char g_437_l, char g_460_l, int32_t g_605_l, int32_t g_606_l, int16_t g_683_l, char g_684_l, int32_t g_685_l, int32_t g_714_l, int32_t g_729_l, int32_t g_730_l, int32_t g_789_l, char g_950_l, char g_951_l, int32_t g_953_l, char g_954_l, int32_t g_956_l, char g_986_l, char g_1008_l, int32_t g_1073_l, int16_t g_1110_l, int32_t g_1111_l) {
    // 0x7f10
    *(int16_t *)&g2 = g_4_l;
    *(int16_t *)&g3 = g_7_l;
    g38 = g_30_l;
    *(char *)&g4 = g_32_l;
    *(char *)&g5 = g_45_l;
    *(char *)&g6 = g_64_l;
    g39 = g_76_l;
    *(char *)&g7 = g_77_l;
    *(char *)&g40 = g_90_l;
    *(int16_t *)&g8 = g_97_l;
    g9 = g_139_l;
    g10 = g_172_l;
    *(char *)&g11 = g_257_l;
    g12 = g_258_l;
    g13 = g_279_l;
    *(char *)&g14 = g_416_l;
    g15 = g_436_l;
    g16 = g_437_l;
    *(char *)&g17 = g_460_l;
    g18 = g_605_l;
    g19 = g_606_l;
    g20 = g_683_l;
    *(char *)&g21 = g_684_l;
    g22 = g_685_l;
    g23 = g_714_l;
    g24 = g_729_l;
    g25 = g_730_l;
    g26 = g_789_l;
    g27 = g_950_l;
    g28 = g_951_l;
    g29 = g_953_l;
    *(char *)&g30 = g_954_l;
    g41 = g_956_l;
    *(char *)&g31 = g_986_l;
    *(char *)&g32 = g_1008_l;
    g33 = g_1073_l;
    *(int16_t *)&g34 = g_1110_l;
    g35 = g_1111_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x81b0 - 0x820d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x81b0
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x8210 - 0x8250
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g36;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g42); // 0x8245
    g36 = v1 / 256 ^ v2;
}

// Address range: 0x8250 - 0x825d
int64_t _fini(void) {
    // 0x8250
    int64_t result; // 0x8250
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

