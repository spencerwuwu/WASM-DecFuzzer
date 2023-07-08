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
int32_t set_var(int32_t g_2_l, int32_t g_17_l, int16_t g_18_l, int32_t g_19_l, int16_t g_35_l, char g_72_l, char g_73_l, char g_105_l, char g_114_l, int32_t g_115_l, int32_t g_153_l, int32_t g_214_l, int32_t g_258_l, int16_t g_267_l, char g_348_l, int32_t g_363_l, int32_t g_369_l, char g_384_l, char g_385_l, char g_401_l, int16_t g_441_l, char g_542_l, int32_t g_555_l, int16_t g_560_l, int32_t g_569_l, int32_t g_635_l, int16_t g_636_l, int16_t g_651_l, int32_t g_652_l, int32_t g_655_l, int16_t g_658_l, int16_t g_699_l, int16_t g_709_l, int16_t g_752_l, int16_t g_757_l, int16_t g_769_l, char g_811_l, char g_856_l, int32_t g_932_l, char g_933_l, int32_t g_935_l, int16_t g_994_l);
void transparent_crc(int32_t val, char * vname, int32_t flag);

// --------------------- Global Variables ---------------------

int64_t g1 = 0; // 0x8fe0
int32_t g2 = -0x315a2940; // 0x9020
int32_t g3 = -1; // 0x9024
int32_t g4 = 0xb42b; // 0x9028
int32_t g5 = -0x3eb549ad; // 0x902c
int32_t g6 = 0x69282f6; // 0x9030
int32_t g7 = -0x5f96d7e; // 0x9031
int32_t g8 = -0x5f96e; // 0x9032
int32_t g9 = -1530; // 0x9033
int32_t g10 = -6; // 0x9034
int32_t g11 = 5; // 0x9038
int32_t g12 = -1; // 0x903c
int32_t g13 = -0x25b36b08; // 0x9040
int32_t g14 = 0x9fffff; // 0x9044
char g15 = -97; // 0x9046
int32_t g16 = -0x2782a027; // 0x9048
int32_t g17 = 0x69a2af9d; // 0x904c
int32_t g18 = 0xff3479; // 0x9050
int32_t g19 = 0x1600ff34; // 0x9051
char g20 = -1; // 0x9052
int32_t g21 = 0xfff916; // 0x9054
int32_t g22 = -0xff01; // 0x9056
int32_t g23 = -1; // 0x9058
int32_t g24 = 0x9893; // 0x905c
int32_t g25 = -0x622d74e4; // 0x9060
int32_t g26 = -0x725e4d11; // 0x9064
int16_t g27 = 6; // 0x9068
int16_t g28 = -6; // 0x906a
int32_t g29 = -0x14c92712; // 0x906c
int32_t g30 = -0x398f2dd6; // 0x9070
int16_t g31 = -0x3990; // 0x9072
int16_t g32 = -1; // 0x9074
int16_t g33 = -8; // 0x9076
int32_t g34 = -0x7fe41e4; // 0x9078
int32_t g35 = 0x7feef801; // 0x907a
int32_t g36 = 0x227feef8; // 0x907b
int32_t g37 = -0x3add8012; // 0x907c
int32_t g38 = -0x62cfe113; // 0x9080
int32_t g39 = 2398; // 0x9084
int32_t g40 = -1; // 0x9088
int64_t g41 = 0; // 0x9090
int16_t g42 = 0; // 0x90a0
int32_t g43 = 0; // 0x90a4
int32_t g44 = 0; // 0x90a8
char g45 = 0; // 0x90aa
int32_t * g46 = NULL; // 0x90b0
int32_t g47;

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
        result = &g47;
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
    return &g41;
}

// Address range: 0x10b0 - 0x10e9
int64_t function_10b0(void) {
    // 0x10b0
    return 0;
}

// Address range: 0x10f0 - 0x1131
int64_t function_10f0(void) {
    // 0x10f0
    if (*(char *)&g41 != 0) {
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
    *(char *)&g41 = 1;
    return result2;
}

// Address range: 0x1140 - 0x1149
int64_t function_1140(void) {
    // 0x1140
    return function_10b0();
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s540retdec.c
// Address range: 0x1150 - 0x1573
// Line range:    661 - 711
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
    transparent_crc(g3, "g_17", v1);
    transparent_crc((int32_t)*(int16_t *)&g4, "g_18", v1);
    transparent_crc(g5, "g_19", v1);
    transparent_crc((int32_t)g42, "g_35", v1);
    transparent_crc((int32_t)*(char *)&g6, "g_72", v1);
    transparent_crc((int32_t)*(char *)&g7, "g_73", v1);
    transparent_crc((int32_t)*(char *)&g8, "g_105", v1);
    transparent_crc((int32_t)*(char *)&g9, "g_114", v1);
    transparent_crc(g10, "g_115", v1);
    transparent_crc(g11, "g_153", v1);
    transparent_crc(g12, "g_214", v1);
    transparent_crc(g13, "g_258", v1);
    transparent_crc((int32_t)*(int16_t *)&g14, "g_267", v1);
    transparent_crc((int32_t)g15, "g_348", v1);
    transparent_crc(g16, "g_363", v1);
    transparent_crc(g17, "g_369", v1);
    transparent_crc((int32_t)*(char *)&g18, "g_384", v1);
    transparent_crc((int32_t)*(char *)&g19, "g_385", v1);
    transparent_crc((int32_t)g20, "g_401", v1);
    transparent_crc((int32_t)*(int16_t *)&g21, "g_441", v1);
    transparent_crc((int32_t)*(char *)&g22, "g_542", v1);
    transparent_crc(g23, "g_555", v1);
    transparent_crc((int32_t)*(int16_t *)&g24, "g_560", v1);
    transparent_crc(g25, "g_569", v1);
    transparent_crc(g26, "g_635", v1);
    transparent_crc((int32_t)g27, "g_636", v1);
    transparent_crc((int32_t)g28, "g_651", v1);
    transparent_crc(g43, "g_652", v1);
    transparent_crc(g29, "g_655", v1);
    transparent_crc((int32_t)*(int16_t *)&g30, "g_658", v1);
    transparent_crc((int32_t)g31, "g_699", v1);
    transparent_crc((int32_t)*(int16_t *)&g44, "g_709", v1);
    transparent_crc((int32_t)g32, "g_752", v1);
    transparent_crc((int32_t)g33, "g_757", v1);
    transparent_crc((int32_t)*(int16_t *)&g34, "g_769", v1);
    transparent_crc((int32_t)*(char *)&g35, "g_811", v1);
    transparent_crc((int32_t)*(char *)&g36, "g_856", v1);
    transparent_crc(g37, "g_932", v1);
    transparent_crc((int32_t)g45, "g_933", v1);
    transparent_crc(g38, "g_935", v1);
    transparent_crc((int32_t)*(int16_t *)&g39, "g_994", v1);
    platform_main_end(-1 - *(int32_t *)0x9088, v1);
    return (int32_t)&g47 ^ (int32_t)&g47;
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
        *(int32_t *)(4 * i + (int64_t)&g46) = v4;
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s540retdec.c
// Address range: 0x1630 - 0x6aa8
// Line range:    79 - 654
int32_t func_1(void) {
    // 0x1630
    set_var(-27, -0x7ffffce3, -0x4bd5, -0x3eb549ae, -1, -10, -126, -110, 6, -6, 5, -1, -0x25b36b08, -1, -97, -0x2782a027, 0x69a2af9d, 121, 52, -1, -1770, -1, -1, -0x676d, -0x622d74e4, -0x725e4d11, 6, -6, 0, -0x14c92712, -0x2dd6, -0x3990, 0, -1, -8, -0x41e4, 1, -8, -0x3add8012, 0, -0x62cfe113, 2398);
    return 45;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6ab0 - 0x6af5
// Line range:    94 - 100
void transparent_crc(int32_t val, char * vname, int32_t flag) {
    // 0x6ab0
    crc32_8bytes(val);
    if (flag != 0) {
        // 0x6ad4
        printf("...checksum after hashing %s : %X\n", vname, -1 - g40);
    }
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-intn.h
// Address range: 0x6b00 - 0x6b25
// Line range:    49 - 120
void platform_main_end(int32_t crc, int32_t flag) {
    // 0x6b00
    printf("checksum = %X\n", crc);
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/seed_all/s540retdec.c
// Address range: 0x6b30 - 0x6e28
// Line range:    69 - 71
int32_t set_var(int32_t g_2_l, int32_t g_17_l, int16_t g_18_l, int32_t g_19_l, int16_t g_35_l, char g_72_l, char g_73_l, char g_105_l, char g_114_l, int32_t g_115_l, int32_t g_153_l, int32_t g_214_l, int32_t g_258_l, int16_t g_267_l, char g_348_l, int32_t g_363_l, int32_t g_369_l, char g_384_l, char g_385_l, char g_401_l, int16_t g_441_l, char g_542_l, int32_t g_555_l, int16_t g_560_l, int32_t g_569_l, int32_t g_635_l, int16_t g_636_l, int16_t g_651_l, int32_t g_652_l, int32_t g_655_l, int16_t g_658_l, int16_t g_699_l, int16_t g_709_l, int16_t g_752_l, int16_t g_757_l, int16_t g_769_l, char g_811_l, char g_856_l, int32_t g_932_l, char g_933_l, int32_t g_935_l, int16_t g_994_l) {
    // 0x6b30
    g2 = g_2_l;
    g3 = g_17_l;
    *(int16_t *)&g4 = g_18_l;
    g5 = g_19_l;
    g42 = g_35_l;
    *(char *)&g6 = g_72_l;
    *(char *)&g7 = g_73_l;
    *(char *)&g8 = g_105_l;
    *(char *)&g9 = g_114_l;
    g10 = g_115_l;
    g11 = g_153_l;
    g12 = g_214_l;
    g13 = g_258_l;
    *(int16_t *)&g14 = g_267_l;
    g15 = g_348_l;
    g16 = g_363_l;
    g17 = g_369_l;
    *(char *)&g18 = g_384_l;
    *(char *)&g19 = g_385_l;
    g20 = g_401_l;
    *(int16_t *)&g21 = g_441_l;
    *(char *)&g22 = g_542_l;
    g23 = g_555_l;
    *(int16_t *)&g24 = g_560_l;
    g25 = g_569_l;
    g26 = g_635_l;
    g27 = g_636_l;
    g28 = g_651_l;
    g43 = g_652_l;
    g29 = g_655_l;
    *(int16_t *)&g30 = g_658_l;
    g31 = g_699_l;
    *(int16_t *)&g44 = g_709_l;
    g32 = g_752_l;
    g33 = g_757_l;
    *(int16_t *)&g34 = g_769_l;
    *(char *)&g35 = g_811_l;
    *(char *)&g36 = g_856_l;
    g37 = g_932_l;
    g45 = g_933_l;
    g38 = g_935_l;
    *(int16_t *)&g39 = g_994_l;
    return 0;
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6e30 - 0x6e8d
// Line range:    85 - 91
void crc32_8bytes(uint32_t val) {
    // 0x6e30
    crc32_byte((char)val);
    crc32_byte((char)(val / 256));
    crc32_byte((char)(val / 0x10000));
    crc32_byte((char)(val / 0x1000000));
}

// From module:   /home/weicheng/Documents/CS699_WASM/DecFuzzer/./seed_all/stdint-uintn.h
// Address range: 0x6e90 - 0x6ed0
// Line range:    77 - 81
void crc32_byte(unsigned char b) {
    uint32_t v1 = g40;
    int32_t v2 = *(int32_t *)((int64_t)(4 * (v1 % 256 ^ (int32_t)b)) + (int64_t)&g46); // 0x6ec5
    g40 = v1 / 256 ^ v2;
}

// Address range: 0x6ed0 - 0x6edd
int64_t _fini(void) {
    // 0x6ed0
    int64_t result; // 0x6ed0
    return result;
}

// --------------------- Meta-Information ---------------------

// Detected compiler/packer: llvm (15.0.7)
// Detected functions: 18

