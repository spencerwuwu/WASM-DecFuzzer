#include "w2c2_base.h"

#include "s879r2.w2c2.h"

void f0(s879r2Instance*i) {
L0:;
}

void f1(s879r2Instance*i) {
L0:;
}

U32 f2(s879r2Instance*i) {
U32 l0=0;
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 l45=0;
U32 l46=0;
U32 l47=0;
U32 l48=0;
U32 l49=0;
U32 l50=0;
U32 l51=0;
U32 l52=0;
U32 l53=0;
U32 l54=0;
U32 l55=0;
U32 l56=0;
U32 l57=0;
U32 l58=0;
U32 l59=0;
U32 l60=0;
U32 l61=0;
U32 l62=0;
U32 si0,si1,si2,si3;
si0=(*i->env_____stack_pointer);
l0=si0;
si0=1056U;
l1=si0;
si0=l0;
si1=l1;
si0-=si1;
l2=si0;
si0=l2;
(*i->env_____stack_pointer)=si0;
si0=-1U;
l3=si0;
si0=l2;
si1=l3;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=32U;
l4=si0;
si0=l2;
si1=l4;
si0+=si1;
l5=si0;
si0=l5;
f3(i,si0);
si0=0U;
l6=si0;
si0=l2;
si1=l6;
i32_store8(i->env__memory,(U64)si0+27U,si1);
si0=-1935722864U;
l7=si0;
si0=l2;
si1=l7;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=9U;
l8=si0;
si0=l2;
si1=l8;
i32_store16(i->env__memory,(U64)si0+18U,si1);
si0=-1576284107U;
l9=si0;
si0=l2;
si1=l9;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=-430812730U;
l10=si0;
si0=l2;
si1=l10;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=36U;
l11=si0;
si0=l2;
si1=l11;
i32_store8(i->env__memory,(U64)si0+7U,si1);
si0=103644099U;
l12=si0;
si0=l2;
si1=l12;
i32_store(i->env__memory,(U64)si0,si1);
si0=l2;
si0=i32_load8_s(i->env__memory,(U64)si0+27U);
l13=si0;
si0=l2;
si0=i32_load(i->env__memory,(U64)si0+12U);
l14=si0;
si0=1U;
l15=si0;
si0=l14;
si1=l15;
si0&=si1;
si0=1U;
l16=si0;
si0=l16;
l17=si0;
si0=l18;
if(si0){
goto L1;
}
si0=1U;
l19=si0;
si0=l19;
l17=si0;
L1:;
si0=l17;
l20=si0;
si0=1U;
l21=si0;
si0=l20;
si1=l21;
si0&=si1;
l22=si0;
si0=-1935722864U;
l23=si0;
si0=l22;
l24=si0;
si0=l23;
l25=si0;
si0=l24;
si1=l25;
si0=(U32)((I32)si0<(I32)si1);
l26=si0;
si0=1U;
l27=si0;
si0=l26;
si1=l27;
si0&=si1;
l28=si0;
si0=l2;
si1=l28;
i32_store16(i->env__memory,(U64)si0+18U,si1);
si0=16U;
l29=si0;
si0=l28;
si1=l29;
si0<<=(si1&31);
l30=si0;
si0=l30;
si1=l29;
si0=(U32)((I32)si0>>(si1&31));
l31=si0;
si0=l14;
si1=l31;
si0&=si1;
l32=si0;
si0=-1935722864U;
l33=si0;
si0=l33;
l34=si0;
si0=l32;
l35=si0;
si0=l34;
si1=l35;
si0=si0 == si1;
l36=si0;
si0=1U;
l37=si0;
si0=l36;
si1=l37;
si0&=si1;
l38=si0;
si0=255U;
l39=si0;
si0=l38;
si1=l39;
si0&=si1;
l40=si0;
si0=l2;
si0=i32_load(i->env__memory,(U64)si0+8U);
l41=si0;
si0=255U;
l42=si0;
si0=l41;
si1=l42;
si0&=si1;
l43=si0;
si0=l40;
si1=l43;
si0*=si1;
l44=si0;
si0=l13;
si1=l44;
si0=DIV_U(si0,si1);
l45=si0;
si0=l2;
si1=l45;
i32_store8(i->env__memory,(U64)si0+7U,si1);
si0=l2;
si0=i32_load8_u(i->env__memory,(U64)si0+27U);
l46=si0;
si0=l2;
si0=i32_load16_u(i->env__memory,(U64)si0+18U);
l47=si0;
si0=32U;
l48=si0;
si0=l2;
si1=l48;
si0+=si1;
l49=si0;
si0=l49;
l50=si0;
si0=28U;
l51=si0;
si0=l2;
si1=l51;
si0+=si1;
l52=si0;
si0=l52;
l53=si0;
si0=24U;
l54=si0;
si0=l46;
si1=l54;
si0<<=(si1&31);
l55=si0;
si0=l55;
si1=l54;
si0=(U32)((I32)si0>>(si1&31));
l56=si0;
si0=16U;
l57=si0;
si0=l47;
si1=l57;
si0<<=(si1&31);
l58=si0;
si0=l58;
si1=l57;
si0=(U32)((I32)si0>>(si1&31));
l59=si0;
si0=l56;
si1=l59;
si2=l53;
si3=l50;
si0=f4(i,si0,si1,si2,si3);
l60=si0;
si0=1056U;
l61=si0;
si0=l2;
si1=l61;
si0+=si1;
l62=si0;
si0=l62;
(*i->env_____stack_pointer)=si0;
si0=l60;
goto L0;
L0:;
return si0;
}

void f3(s879r2Instance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 l44=0;
U32 si0,si1;
si0=(*i->env_____stack_pointer);
l1=si0;
si0=32U;
l2=si0;
si0=l1;
si1=l2;
si0-=si1;
l3=si0;
si0=l3;
si1=l0;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=-306674912U;
l4=si0;
si0=l3;
si1=l4;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=0U;
l5=si0;
si0=l3;
si1=l5;
i32_store(i->env__memory,(U64)si0+16U,si1);
L2:;
{
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l6=si0;
si0=256U;
l7=si0;
si0=l6;
l8=si0;
si0=l7;
l9=si0;
si0=l8;
si1=l9;
si0=(U32)((I32)si0<(I32)si1);
l10=si0;
si0=1U;
l11=si0;
si0=l10;
si1=l11;
si0&=si1;
l12=si0;
si0=l12;
si0=!(si0);
if(si0){
goto L1;
}
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l13=si0;
si0=l3;
si1=l13;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=8U;
l14=si0;
si0=l3;
si1=l14;
i32_store(i->env__memory,(U64)si0+12U,si1);
L4:;
{
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+12U);
l15=si0;
si0=0U;
l16=si0;
si0=l15;
l17=si0;
si0=l16;
l18=si0;
si0=l17;
si1=l18;
si0=(U32)((I32)si0>(I32)si1);
l19=si0;
si0=1U;
l20=si0;
si0=l19;
si1=l20;
si0&=si1;
l21=si0;
si0=l21;
si0=!(si0);
if(si0){
goto L3;
}
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l22=si0;
si0=1U;
l23=si0;
si0=l22;
si1=l23;
si0&=si1;
l24=si0;
si0=l24;
si0=!(si0);
if(si0){
goto L6;
}
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l25=si0;
si0=1U;
l26=si0;
si0=l25;
si1=l26;
si0>>=(si1&31);
l27=si0;
si0=-306674912U;
l28=si0;
si0=l27;
si1=l28;
si0^=si1;
l29=si0;
si0=l3;
si1=l29;
i32_store(i->env__memory,(U64)si0+24U,si1);
goto L5;
L6:;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l30=si0;
si0=1U;
l31=si0;
si0=l30;
si1=l31;
si0>>=(si1&31);
l32=si0;
si0=l3;
si1=l32;
i32_store(i->env__memory,(U64)si0+24U,si1);
L5:;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+12U);
l33=si0;
si0=-1U;
l34=si0;
si0=l33;
si1=l34;
si0+=si1;
l35=si0;
si0=l3;
si1=l35;
i32_store(i->env__memory,(U64)si0+12U,si1);
goto L4;
}
UNREACHABLE;
L3:;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+24U);
l36=si0;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+28U);
l37=si0;
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l38=si0;
si0=2U;
l39=si0;
si0=l38;
si1=l39;
si0<<=(si1&31);
l40=si0;
si0=l37;
si1=l40;
si0+=si1;
l41=si0;
si0=l41;
si1=l36;
i32_store(i->env__memory,(U64)si0,si1);
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+16U);
l42=si0;
si0=1U;
l43=si0;
si0=l42;
si1=l43;
si0+=si1;
l44=si0;
si0=l3;
si1=l44;
i32_store(i->env__memory,(U64)si0+16U,si1);
goto L2;
}
UNREACHABLE;
L1:;
goto L0;
L0:;
}

U32 f4(s879r2Instance*i,U32 l0,U32 l1,U32 l2,U32 l3) {
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 si0,si1,si2,si3,si4;
si0=(*i->env_____stack_pointer);
l4=si0;
si0=32U;
l5=si0;
si0=l4;
si1=l5;
si0-=si1;
l6=si0;
si0=l6;
(*i->env_____stack_pointer)=si0;
si0=l6;
si1=l0;
i32_store8(i->env__memory,(U64)si0+31U,si1);
si0=l6;
si1=l1;
i32_store16(i->env__memory,(U64)si0+28U,si1);
si0=l6;
si1=l2;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l6;
si1=l3;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=0U;
l7=si0;
si0=l6;
si1=l7;
i32_store8(i->env__memory,(U64)si0+19U,si1);
si0=-1935722864U;
l8=si0;
si0=l6;
si1=l8;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=9U;
l9=si0;
si0=l6;
si1=l9;
i32_store16(i->env__memory,(U64)si0+10U,si1);
si0=l6;
si0=i32_load8_u(i->env__memory,(U64)si0+19U);
l10=si0;
si0=24U;
l11=si0;
si0=l10;
si1=l11;
si0<<=(si1&31);
l12=si0;
si0=l12;
si1=l11;
si0=(U32)((I32)si0>>(si1&31));
l13=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+24U);
l14=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+20U);
l15=si0;
si0=38U;
l16=si0;
si0=(*i->env_____memory_base);
l17=si0;
si0=l17;
si1=l16;
si0+=si1;
l18=si0;
si0=0U;
l19=si0;
si0=l13;
si1=l18;
si2=l19;
si3=l14;
si4=l15;
f5(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+24U);
l20=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+20U);
l21=si0;
si0=-1935722864U;
si0=34U;
l22=si0;
si0=(*i->env_____memory_base);
l23=si0;
si0=l23;
si1=l22;
si0+=si1;
l24=si0;
si0=0U;
l25=si0;
si0=-1935722864U;
l26=si0;
si0=l26;
si1=l24;
si2=l25;
si3=l20;
si4=l21;
f5(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load16_u(i->env__memory,(U64)si0+10U);
l27=si0;
si0=16U;
l28=si0;
si0=l27;
si1=l28;
si0<<=(si1&31);
l29=si0;
si0=l29;
si1=l28;
si0=(U32)((I32)si0>>(si1&31));
l30=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+24U);
l31=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+20U);
l32=si0;
si0=42U;
l33=si0;
si0=(*i->env_____memory_base);
l34=si0;
si0=l34;
si1=l33;
si0+=si1;
l35=si0;
si0=0U;
l36=si0;
si0=l30;
si1=l35;
si2=l36;
si3=l31;
si4=l32;
f5(i,si0,si1,si2,si3,si4);
si0=l6;
si0=i32_load(i->env__memory,(U64)si0+24U);
l37=si0;
si0=l37;
si0=i32_load(i->env__memory,(U64)si0);
l38=si0;
si0=-1U;
l39=si0;
si0=l38;
si1=l39;
si0^=si1;
l40=si0;
si0=32U;
l41=si0;
si0=l6;
si1=l41;
si0+=si1;
l42=si0;
si0=l42;
(*i->env_____stack_pointer)=si0;
si0=l40;
goto L0;
L0:;
return si0;
}

void f5(s879r2Instance*i,U32 l0,U32 l1,U32 l2,U32 l3,U32 l4) {
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 si0,si1,si2;
si0=(*i->env_____stack_pointer);
l5=si0;
si0=32U;
l6=si0;
si0=l5;
si1=l6;
si0-=si1;
l7=si0;
si0=l7;
(*i->env_____stack_pointer)=si0;
si0=l7;
si1=l0;
i32_store(i->env__memory,(U64)si0+28U,si1);
si0=l7;
si1=l1;
i32_store(i->env__memory,(U64)si0+24U,si1);
si0=l7;
si1=l2;
i32_store(i->env__memory,(U64)si0+20U,si1);
si0=l7;
si1=l3;
i32_store(i->env__memory,(U64)si0+16U,si1);
si0=l7;
si1=l4;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l7;
si0=i32_load(i->env__memory,(U64)si0+28U);
l8=si0;
si0=l7;
si0=i32_load(i->env__memory,(U64)si0+16U);
l9=si0;
si0=l7;
si0=i32_load(i->env__memory,(U64)si0+12U);
l10=si0;
si0=l8;
si1=l9;
si2=l10;
f7(i,si0,si1,si2);
si0=32U;
l11=si0;
si0=l7;
si1=l11;
si0+=si1;
l12=si0;
si0=l12;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

void f6(s879r2Instance*i,U32 l0) {
U32 l1=0;
U32 l2=0;
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 si0,si1;
si0=(*i->env_____stack_pointer);
l1=si0;
si0=16U;
l2=si0;
si0=l1;
si1=l2;
si0-=si1;
l3=si0;
si0=l3;
(*i->env_____stack_pointer)=si0;
si0=l3;
si1=l0;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l3;
si0=i32_load(i->env__memory,(U64)si0+12U);
l4=si0;
si0=0U;
l5=si0;
si0=(*i->env_____memory_base);
l6=si0;
si0=l6;
si1=l5;
si0+=si1;
l7=si0;
si0=l7;
si1=l4;
TF((*i->env_____indirect_function_table),si1,void (*)(s879r2Instance*,U32))(i,si0);
si0=16U;
l8=si0;
si0=l3;
si1=l8;
si0+=si1;
l9=si0;
si0=l9;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

void f7(s879r2Instance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 l27=0;
U32 l28=0;
U32 l29=0;
U32 l30=0;
U32 l31=0;
U32 l32=0;
U32 l33=0;
U32 l34=0;
U32 l35=0;
U32 l36=0;
U32 l37=0;
U32 l38=0;
U32 l39=0;
U32 l40=0;
U32 l41=0;
U32 l42=0;
U32 l43=0;
U32 si0,si1,si2;
si0=(*i->env_____stack_pointer);
l3=si0;
si0=16U;
l4=si0;
si0=l3;
si1=l4;
si0-=si1;
l5=si0;
si0=l5;
(*i->env_____stack_pointer)=si0;
si0=l5;
si1=l0;
i32_store(i->env__memory,(U64)si0+12U,si1);
si0=l5;
si1=l1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l5;
si1=l2;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l6=si0;
si0=0U;
l7=si0;
si0=l6;
si1=l7;
si0>>=(si1&31);
l8=si0;
si0=255U;
l9=si0;
si0=l8;
si1=l9;
si0&=si1;
l10=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l11=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l12=si0;
si0=255U;
l13=si0;
si0=l10;
si1=l13;
si0&=si1;
l14=si0;
si0=l14;
si1=l11;
si2=l12;
f8(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l15=si0;
si0=8U;
l16=si0;
si0=l15;
si1=l16;
si0>>=(si1&31);
l17=si0;
si0=255U;
l18=si0;
si0=l17;
si1=l18;
si0&=si1;
l19=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l20=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l21=si0;
si0=255U;
l22=si0;
si0=l19;
si1=l22;
si0&=si1;
l23=si0;
si0=l23;
si1=l20;
si2=l21;
f8(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l24=si0;
si0=16U;
l25=si0;
si0=l24;
si1=l25;
si0>>=(si1&31);
l26=si0;
si0=255U;
l27=si0;
si0=l26;
si1=l27;
si0&=si1;
l28=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l29=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l30=si0;
si0=255U;
l31=si0;
si0=l28;
si1=l31;
si0&=si1;
l32=si0;
si0=l32;
si1=l29;
si2=l30;
f8(i,si0,si1,si2);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+12U);
l33=si0;
si0=24U;
l34=si0;
si0=l33;
si1=l34;
si0>>=(si1&31);
l35=si0;
si0=255U;
l36=si0;
si0=l35;
si1=l36;
si0&=si1;
l37=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l38=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l39=si0;
si0=255U;
l40=si0;
si0=l37;
si1=l40;
si0&=si1;
l41=si0;
si0=l41;
si1=l38;
si2=l39;
f8(i,si0,si1,si2);
si0=16U;
l42=si0;
si0=l5;
si1=l42;
si0+=si1;
l43=si0;
si0=l43;
(*i->env_____stack_pointer)=si0;
goto L0;
L0:;
}

void f8(s879r2Instance*i,U32 l0,U32 l1,U32 l2) {
U32 l3=0;
U32 l4=0;
U32 l5=0;
U32 l6=0;
U32 l7=0;
U32 l8=0;
U32 l9=0;
U32 l10=0;
U32 l11=0;
U32 l12=0;
U32 l13=0;
U32 l14=0;
U32 l15=0;
U32 l16=0;
U32 l17=0;
U32 l18=0;
U32 l19=0;
U32 l20=0;
U32 l21=0;
U32 l22=0;
U32 l23=0;
U32 l24=0;
U32 l25=0;
U32 l26=0;
U32 si0,si1;
si0=(*i->env_____stack_pointer);
l3=si0;
si0=16U;
l4=si0;
si0=l3;
si1=l4;
si0-=si1;
l5=si0;
si0=l5;
si1=l0;
i32_store8(i->env__memory,(U64)si0+15U,si1);
si0=l5;
si1=l1;
i32_store(i->env__memory,(U64)si0+8U,si1);
si0=l5;
si1=l2;
i32_store(i->env__memory,(U64)si0+4U,si1);
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l6=si0;
si0=l6;
si0=i32_load(i->env__memory,(U64)si0);
l7=si0;
si0=8U;
l8=si0;
si0=l7;
si1=l8;
si0>>=(si1&31);
l9=si0;
si0=16777215U;
l10=si0;
si0=l9;
si1=l10;
si0&=si1;
l11=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+4U);
l12=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l13=si0;
si0=l13;
si0=i32_load(i->env__memory,(U64)si0);
l14=si0;
si0=l5;
si0=i32_load8_u(i->env__memory,(U64)si0+15U);
l15=si0;
si0=255U;
l16=si0;
si0=l15;
si1=l16;
si0&=si1;
l17=si0;
si0=l14;
si1=l17;
si0^=si1;
l18=si0;
si0=255U;
l19=si0;
si0=l18;
si1=l19;
si0&=si1;
l20=si0;
si0=2U;
l21=si0;
si0=l20;
si1=l21;
si0<<=(si1&31);
l22=si0;
si0=l12;
si1=l22;
si0+=si1;
l23=si0;
si0=l23;
si0=i32_load(i->env__memory,(U64)si0);
l24=si0;
si0=l11;
si1=l24;
si0^=si1;
l25=si0;
si0=l5;
si0=i32_load(i->env__memory,(U64)si0+8U);
l26=si0;
si0=l26;
si1=l25;
i32_store(i->env__memory,(U64)si0,si1);
goto L0;
L0:;
}

const U8 d0[]={
0x44,0x75,0x6d,0x6d,0x79,0x20,0x66,0x6f,0x72,0x20,0x69,0x6e,0x64,0x69,0x72,0x65,0x63,0x74,0x20,0x66,0x75,0x6e,0x63,0x74,0x69,0x6f,0x6e,0x20,0x74,0x61,0x62,0x6c,0x65,0x0,0x67,0x5f,0x37,0x0,0x67,0x5f,0x34,0x0,0x67,0x5f,0x31,0x33,0x0,
};

static void s879r2InitImports(s879r2Instance* i, void* resolve(const char* module, const char* name)) {
if (resolve == NULL) { return; }
i->env__memory=(wasmMemory*)resolve("env", "memory");
i->env_____indirect_function_table=(wasmTable*)resolve("env", "__indirect_function_table");
i->env_____stack_pointer=(U32*)resolve("env", "__stack_pointer");
i->env_____memory_base=(U32*)resolve("env", "__memory_base");
i->env_____table_base=(U32*)resolve("env", "__table_base");
}

void s879r2____wasm_call_ctors(s879r2Instance*i){
f0(i);
}

void s879r2____wasm_apply_data_relocs(s879r2Instance*i){
f1(i);
}

U32 s879r2_func_1(s879r2Instance*i){
return f2(i);
}

void s879r2_call_cb(s879r2Instance*i,U32 l0){
f6(i,l0);
}

void s879r2Instantiate(s879r2Instance* i, void* resolve(const char* module, const char* name)) {
s879r2InitImports(i, resolve);
}

void s879r2FreeInstance(s879r2Instance* i) {
}

