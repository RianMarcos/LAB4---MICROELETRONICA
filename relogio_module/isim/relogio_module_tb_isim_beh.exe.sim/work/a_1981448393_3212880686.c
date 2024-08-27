/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/Rian/Documents/MICROELETRONICA/LAB4/relogio_module/relogio_module.vhd";



static void work_a_1981448393_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    int t9;
    int t10;
    char *t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5480);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t4 = (t0 + 3088U);
    t8 = *((char **)t4);
    t9 = *((int *)t8);
    t10 = (t9 + 1);
    t4 = (t0 + 3088U);
    t11 = *((char **)t4);
    t4 = (t11 + 0);
    *((int *)t4) = t10;
    xsi_set_current_line(48, ng0);
    t2 = (t0 + 3088U);
    t4 = *((char **)t2);
    t9 = *((int *)t4);
    t2 = (t0 + 2968U);
    t5 = *((char **)t2);
    t10 = *((int *)t5);
    t1 = (t9 == t10);
    if (t1 != 0)
        goto LAB8;

LAB10:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 3088U);
    t8 = *((char **)t2);
    t2 = (t8 + 0);
    *((int *)t2) = 0;
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 10356);
    t1 = 1;
    if (4U == 4U)
        goto LAB14;

LAB15:    t1 = 0;

LAB16:    if (t1 != 0)
        goto LAB11;

LAB13:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 10368);
    t1 = 1;
    if (4U == 4U)
        goto LAB22;

LAB23:    t1 = 0;

LAB24:    if (t1 != 0)
        goto LAB20;

LAB21:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 10380);
    t1 = 1;
    if (4U == 4U)
        goto LAB30;

LAB31:    t1 = 0;

LAB32:    if (t1 != 0)
        goto LAB28;

LAB29:    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t2 = (t0 + 10392);
    t1 = 1;
    if (4U == 4U)
        goto LAB38;

LAB39:    t1 = 0;

LAB40:    if (t1 != 0)
        goto LAB36;

LAB37:
LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(51, ng0);
    t13 = (t0 + 10360);
    t15 = (t0 + 5576);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 4U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 10364);
    t5 = (t0 + 5640);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB12;

LAB14:    t12 = 0;

LAB17:    if (t12 < 4U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t8 = (t4 + t12);
    t11 = (t2 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB15;

LAB19:    t12 = (t12 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(54, ng0);
    t13 = (t0 + 10372);
    t15 = (t0 + 5576);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 4U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(55, ng0);
    t2 = (t0 + 10376);
    t5 = (t0 + 5640);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB12;

LAB22:    t12 = 0;

LAB25:    if (t12 < 4U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t8 = (t4 + t12);
    t11 = (t2 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB23;

LAB27:    t12 = (t12 + 1);
    goto LAB25;

LAB28:    xsi_set_current_line(57, ng0);
    t13 = (t0 + 10384);
    t15 = (t0 + 5576);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 4U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 10388);
    t5 = (t0 + 5640);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB12;

LAB30:    t12 = 0;

LAB33:    if (t12 < 4U)
        goto LAB34;
    else
        goto LAB32;

LAB34:    t8 = (t4 + t12);
    t11 = (t2 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB31;

LAB35:    t12 = (t12 + 1);
    goto LAB33;

LAB36:    xsi_set_current_line(60, ng0);
    t13 = (t0 + 10396);
    t15 = (t0 + 5576);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t13, 4U);
    xsi_driver_first_trans_fast_port(t15);
    xsi_set_current_line(61, ng0);
    t2 = (t0 + 10400);
    t5 = (t0 + 5640);
    t8 = (t5 + 56U);
    t11 = *((char **)t8);
    t13 = (t11 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast(t5);
    goto LAB12;

LAB38:    t12 = 0;

LAB41:    if (t12 < 4U)
        goto LAB42;
    else
        goto LAB40;

LAB42:    t8 = (t4 + t12);
    t11 = (t2 + t12);
    if (*((unsigned char *)t8) != *((unsigned char *)t11))
        goto LAB39;

LAB43:    t12 = (t12 + 1);
    goto LAB41;

}

static void work_a_1981448393_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    unsigned char t18;
    int t19;
    int t20;
    int t21;

LAB0:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB38;

LAB39:
LAB3:    xsi_set_current_line(111, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB73;

LAB75:    t1 = (t0 + 1152U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB78;

LAB79:    t3 = (unsigned char)0;

LAB80:    if (t3 != 0)
        goto LAB76;

LAB77:
LAB74:    t1 = (t0 + 5496);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 10404);
    t7 = 1;
    if (4U == 4U)
        goto LAB8;

LAB9:    t7 = 0;

LAB10:    if (t7 != 0)
        goto LAB5;

LAB7:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10408);
    t3 = 1;
    if (4U == 4U)
        goto LAB16;

LAB17:    t3 = 0;

LAB18:    if (t3 != 0)
        goto LAB14;

LAB15:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10412);
    t3 = 1;
    if (4U == 4U)
        goto LAB24;

LAB25:    t3 = 0;

LAB26:    if (t3 != 0)
        goto LAB22;

LAB23:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10416);
    t3 = 1;
    if (4U == 4U)
        goto LAB32;

LAB33:    t3 = 0;

LAB34:    if (t3 != 0)
        goto LAB30;

LAB31:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(90, ng0);
    t11 = (t0 + 3448U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t11 = (t0 + 5704);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t13;
    xsi_driver_first_trans_fast(t11);
    goto LAB6;

LAB8:    t8 = 0;

LAB11:    if (t8 < 4U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t9 = (t5 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB9;

LAB13:    t8 = (t8 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(92, ng0);
    t10 = (t0 + 3568U);
    t11 = *((char **)t10);
    t13 = *((int *)t11);
    t10 = (t0 + 5704);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

LAB16:    t8 = 0;

LAB19:    if (t8 < 4U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB17;

LAB21:    t8 = (t8 + 1);
    goto LAB19;

LAB22:    xsi_set_current_line(94, ng0);
    t10 = (t0 + 3688U);
    t11 = *((char **)t10);
    t13 = *((int *)t11);
    t10 = (t0 + 5704);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

LAB24:    t8 = 0;

LAB27:    if (t8 < 4U)
        goto LAB28;
    else
        goto LAB26;

LAB28:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB25;

LAB29:    t8 = (t8 + 1);
    goto LAB27;

LAB30:    xsi_set_current_line(96, ng0);
    t10 = (t0 + 3808U);
    t11 = *((char **)t10);
    t13 = *((int *)t11);
    t10 = (t0 + 5704);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t10);
    goto LAB6;

LAB32:    t8 = 0;

LAB35:    if (t8 < 4U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB33;

LAB37:    t8 = (t8 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 2312U);
    t5 = *((char **)t1);
    t1 = (t0 + 10420);
    t7 = 1;
    if (4U == 4U)
        goto LAB43;

LAB44:    t7 = 0;

LAB45:    if (t7 != 0)
        goto LAB40;

LAB42:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10424);
    t3 = 1;
    if (4U == 4U)
        goto LAB51;

LAB52:    t3 = 0;

LAB53:    if (t3 != 0)
        goto LAB49;

LAB50:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10428);
    t3 = 1;
    if (4U == 4U)
        goto LAB59;

LAB60:    t3 = 0;

LAB61:    if (t3 != 0)
        goto LAB57;

LAB58:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 10432);
    t3 = 1;
    if (4U == 4U)
        goto LAB67;

LAB68:    t3 = 0;

LAB69:    if (t3 != 0)
        goto LAB65;

LAB66:
LAB41:    goto LAB3;

LAB40:    xsi_set_current_line(101, ng0);
    t11 = (t0 + 3208U);
    t12 = *((char **)t11);
    t13 = *((int *)t12);
    t11 = (t0 + 5704);
    t14 = (t11 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    *((int *)t17) = t13;
    xsi_driver_first_trans_fast(t11);
    goto LAB41;

LAB43:    t8 = 0;

LAB46:    if (t8 < 4U)
        goto LAB47;
    else
        goto LAB45;

LAB47:    t9 = (t5 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB44;

LAB48:    t8 = (t8 + 1);
    goto LAB46;

LAB49:    xsi_set_current_line(103, ng0);
    t10 = (t0 + 3328U);
    t11 = *((char **)t10);
    t13 = *((int *)t11);
    t10 = (t0 + 5704);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t10);
    goto LAB41;

LAB51:    t8 = 0;

LAB54:    if (t8 < 4U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB52;

LAB56:    t8 = (t8 + 1);
    goto LAB54;

LAB57:    xsi_set_current_line(105, ng0);
    t10 = (t0 + 3448U);
    t11 = *((char **)t10);
    t13 = *((int *)t11);
    t10 = (t0 + 5704);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t10);
    goto LAB41;

LAB59:    t8 = 0;

LAB62:    if (t8 < 4U)
        goto LAB63;
    else
        goto LAB61;

LAB63:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB60;

LAB64:    t8 = (t8 + 1);
    goto LAB62;

LAB65:    xsi_set_current_line(107, ng0);
    t10 = (t0 + 3568U);
    t11 = *((char **)t10);
    t13 = *((int *)t11);
    t10 = (t0 + 5704);
    t12 = (t10 + 56U);
    t14 = *((char **)t12);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    *((int *)t16) = t13;
    xsi_driver_first_trans_fast(t10);
    goto LAB41;

LAB67:    t8 = 0;

LAB70:    if (t8 < 4U)
        goto LAB71;
    else
        goto LAB69;

LAB71:    t6 = (t2 + t8);
    t9 = (t1 + t8);
    if (*((unsigned char *)t6) != *((unsigned char *)t9))
        goto LAB68;

LAB72:    t8 = (t8 + 1);
    goto LAB70;

LAB73:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(113, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(114, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(115, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(117, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(118, ng0);
    t1 = (t0 + 3928U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB74;

LAB76:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 3928U);
    t6 = *((char **)t2);
    t13 = *((int *)t6);
    t19 = (t13 + 1);
    t2 = (t0 + 3928U);
    t9 = *((char **)t2);
    t2 = (t9 + 0);
    *((int *)t2) = t19;
    xsi_set_current_line(122, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB81;

LAB83:
LAB82:    goto LAB74;

LAB78:    t2 = (t0 + 1192U);
    t5 = *((char **)t2);
    t7 = *((unsigned char *)t5);
    t18 = (t7 == (unsigned char)3);
    t3 = t18;
    goto LAB80;

LAB81:    xsi_set_current_line(123, ng0);
    t1 = (t0 + 3928U);
    t5 = *((char **)t1);
    t13 = *((int *)t5);
    t1 = (t0 + 2848U);
    t6 = *((char **)t1);
    t19 = *((int *)t6);
    t7 = (t13 == t19);
    if (t7 != 0)
        goto LAB84;

LAB86:
LAB85:    goto LAB82;

LAB84:    xsi_set_current_line(124, ng0);
    t1 = (t0 + 3208U);
    t9 = *((char **)t1);
    t20 = *((int *)t9);
    t21 = (t20 + 1);
    t1 = (t0 + 3208U);
    t10 = *((char **)t1);
    t1 = (t10 + 0);
    *((int *)t1) = t21;
    xsi_set_current_line(125, ng0);
    t1 = (t0 + 3208U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 10);
    if (t3 != 0)
        goto LAB87;

LAB89:
LAB88:    goto LAB85;

LAB87:    xsi_set_current_line(126, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(127, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 + 1);
    t1 = (t0 + 3328U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(128, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 6);
    if (t3 != 0)
        goto LAB90;

LAB92:
LAB91:    goto LAB88;

LAB90:    xsi_set_current_line(129, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(130, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(131, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 + 1);
    t1 = (t0 + 3448U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(132, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 10);
    if (t3 != 0)
        goto LAB93;

LAB95:
LAB94:    goto LAB91;

LAB93:    xsi_set_current_line(133, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(134, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(135, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(136, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 + 1);
    t1 = (t0 + 3568U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(137, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 6);
    if (t3 != 0)
        goto LAB96;

LAB98:
LAB97:    goto LAB94;

LAB96:    xsi_set_current_line(138, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(139, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(140, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(141, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(142, ng0);
    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 + 1);
    t1 = (t0 + 3688U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(143, ng0);
    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t3 = (t13 == 10);
    if (t3 != 0)
        goto LAB99;

LAB101:
LAB100:    goto LAB97;

LAB99:    xsi_set_current_line(144, ng0);
    t1 = (t0 + 3208U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(145, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(146, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(147, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(148, ng0);
    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(149, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t19 = (t13 + 1);
    t1 = (t0 + 3808U);
    t5 = *((char **)t1);
    t1 = (t5 + 0);
    *((int *)t1) = t19;
    xsi_set_current_line(150, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t13 = *((int *)t2);
    t4 = (t13 == 6);
    if (t4 == 1)
        goto LAB105;

LAB106:    t3 = (unsigned char)0;

LAB107:    if (t3 != 0)
        goto LAB102;

LAB104:
LAB103:    goto LAB100;

LAB102:    xsi_set_current_line(151, ng0);
    t1 = (t0 + 3208U);
    t6 = *((char **)t1);
    t1 = (t6 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(152, ng0);
    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(153, ng0);
    t1 = (t0 + 3448U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(154, ng0);
    t1 = (t0 + 3568U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(155, ng0);
    t1 = (t0 + 3688U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    xsi_set_current_line(156, ng0);
    t1 = (t0 + 3808U);
    t2 = *((char **)t1);
    t1 = (t2 + 0);
    *((int *)t1) = 0;
    goto LAB103;

LAB105:    t1 = (t0 + 3688U);
    t5 = *((char **)t1);
    t19 = *((int *)t5);
    t7 = (t19 == 10);
    t3 = t7;
    goto LAB107;

}


extern void work_a_1981448393_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1981448393_3212880686_p_0,(void *)work_a_1981448393_3212880686_p_1};
	xsi_register_didat("work_a_1981448393_3212880686", "isim/relogio_module_tb_isim_beh.exe.sim/work/a_1981448393_3212880686.didat");
	xsi_register_executes(pe);
}
