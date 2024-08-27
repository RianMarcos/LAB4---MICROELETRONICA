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
static const char *ng0 = "C:/Users/Rian/Documents/MICROELETRONICA/LAB4/relogio_module/relogio_module_tb.vhd";



static void work_a_2892617329_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 4704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(58, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 4704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(60, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3880);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_2892617329_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    int t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    int t13;
    int t14;
    int64 t15;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 8780);
    *((int *)t2) = 0;
    t3 = (t0 + 8784);
    *((int *)t3) = 599;
    t4 = 0;
    t5 = 599;

LAB4:    if (t4 <= t5)
        goto LAB5;

LAB7:    xsi_set_current_line(79, ng0);

LAB15:    *((char **)t1) = &&LAB16;

LAB1:    return;
LAB5:    xsi_set_current_line(69, ng0);
    t6 = (t0 + 8780);
    t7 = xsi_vhdl_mod(*((int *)t6), 10);
    t8 = (t0 + 4768);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((int *)t12) = t7;
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 8780);
    t7 = *((int *)t2);
    t13 = (t7 / 10);
    t14 = xsi_vhdl_mod(t13, 6);
    t3 = (t0 + 4832);
    t6 = (t3 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(71, ng0);
    t2 = (t0 + 8780);
    t7 = *((int *)t2);
    t13 = (t7 / 60);
    t14 = xsi_vhdl_mod(t13, 10);
    t3 = (t0 + 4896);
    t6 = (t3 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(72, ng0);
    t2 = (t0 + 8780);
    t7 = *((int *)t2);
    t13 = (t7 / 600);
    t14 = xsi_vhdl_mod(t13, 6);
    t3 = (t0 + 4960);
    t6 = (t3 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(73, ng0);
    t2 = (t0 + 8780);
    t7 = *((int *)t2);
    t13 = (t7 / 3600);
    t14 = xsi_vhdl_mod(t13, 10);
    t3 = (t0 + 5024);
    t6 = (t3 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 8780);
    t7 = *((int *)t2);
    t13 = (t7 / 36000);
    t14 = xsi_vhdl_mod(t13, 6);
    t3 = (t0 + 5088);
    t6 = (t3 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((int *)t10) = t14;
    xsi_driver_first_trans_fast(t3);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 3088U);
    t3 = *((char **)t2);
    t15 = *((int64 *)t3);
    t2 = (t0 + 4128);
    xsi_process_wait(t2, t15);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB6:    t2 = (t0 + 8780);
    t4 = *((int *)t2);
    t3 = (t0 + 8784);
    t5 = *((int *)t3);
    if (t4 == t5)
        goto LAB7;

LAB12:    t7 = (t4 + 1);
    t4 = t7;
    t6 = (t0 + 8780);
    *((int *)t6) = t4;
    goto LAB4;

LAB8:    goto LAB6;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    goto LAB2;

LAB14:    goto LAB13;

LAB16:    goto LAB14;

}


extern void work_a_2892617329_2372691052_init()
{
	static char *pe[] = {(void *)work_a_2892617329_2372691052_p_0,(void *)work_a_2892617329_2372691052_p_1};
	xsi_register_didat("work_a_2892617329_2372691052", "isim/relogio_module_tb_isim_beh.exe.sim/work/a_2892617329_2372691052.didat");
	xsi_register_executes(pe);
}
