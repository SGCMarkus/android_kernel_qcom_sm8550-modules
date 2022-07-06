/*
 * Copyright (c) 2018 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

#ifndef __MAC_TCL_REG_SEQ_REG_H__
#define __MAC_TCL_REG_SEQ_REG_H__

#include "seq_hwio.h"
#include "mac_tcl_reg_seq_hwiobase.h"
#ifdef SCALE_INCLUDES
	#include "HALhwio.h"
#else
	#include "msmhwio.h"
#endif


///////////////////////////////////////////////////////////////////////////////////////////////
// Register Data for Block MAC_TCL_REG
///////////////////////////////////////////////////////////////////////////////////////////////

//// Register TCL_R0_SW2TCL1_RING_CTRL ////

#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_ADDR(x)                        (x+0x00000000)
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_PHYS(x)                        (x+0x00000000)
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_RMSK                           0x0003ffe0
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_SHFT                                    5
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CTRL_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CTRL_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_TIMEOUT_VAL_BMSK               0x0003ffc0
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_TIMEOUT_VAL_SHFT                      0x6

#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_RNG_PRTY_BMSK                  0x00000020
#define HWIO_TCL_R0_SW2TCL1_RING_CTRL_RNG_PRTY_SHFT                         0x5

//// Register TCL_R0_SW2TCL2_RING_CTRL ////

#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_ADDR(x)                        (x+0x00000004)
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_PHYS(x)                        (x+0x00000004)
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_RMSK                           0x0003ffe0
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_SHFT                                    5
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CTRL_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CTRL_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_TIMEOUT_VAL_BMSK               0x0003ffc0
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_TIMEOUT_VAL_SHFT                      0x6

#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_RNG_PRTY_BMSK                  0x00000020
#define HWIO_TCL_R0_SW2TCL2_RING_CTRL_RNG_PRTY_SHFT                         0x5

//// Register TCL_R0_SW2TCL3_RING_CTRL ////

#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_ADDR(x)                        (x+0x00000008)
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_PHYS(x)                        (x+0x00000008)
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_RMSK                           0x0003ffe0
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_SHFT                                    5
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CTRL_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CTRL_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_TIMEOUT_VAL_BMSK               0x0003ffc0
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_TIMEOUT_VAL_SHFT                      0x6

#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_RNG_PRTY_BMSK                  0x00000020
#define HWIO_TCL_R0_SW2TCL3_RING_CTRL_RNG_PRTY_SHFT                         0x5

//// Register TCL_R0_FW2TCL1_RING_CTRL ////

#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_ADDR(x)                        (x+0x0000000c)
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_PHYS(x)                        (x+0x0000000c)
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_RMSK                           0x0003ffe0
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_SHFT                                    5
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CTRL_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CTRL_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_TIMEOUT_VAL_BMSK               0x0003ffc0
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_TIMEOUT_VAL_SHFT                      0x6

#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_RNG_PRTY_BMSK                  0x00000020
#define HWIO_TCL_R0_FW2TCL1_RING_CTRL_RNG_PRTY_SHFT                         0x5

//// Register TCL_R0_SW2TCL_CMD_RING_CTRL ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_ADDR(x)                     (x+0x00000010)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_PHYS(x)                     (x+0x00000010)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_RMSK                        0x0003ffe0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_SHFT                                 5
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_TIMEOUT_VAL_BMSK            0x0003ffc0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_TIMEOUT_VAL_SHFT                   0x6

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_RNG_PRTY_BMSK               0x00000020
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CTRL_RNG_PRTY_SHFT                      0x5

//// Register TCL_R0_CONS_RING_CMN_CTRL_REG ////

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ADDR(x)                   (x+0x00000014)
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_PHYS(x)                   (x+0x00000014)
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_RMSK                      0x000fffff
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SHFT                               0
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ADDR(x), HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_RMSK)
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ADDR(x), mask) 
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ADDR(x), val)
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ADDR(x), mask, val, HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_STOP_META_RD_AT_8B_BDRY_BMSK 0x00080000
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_STOP_META_RD_AT_8B_BDRY_SHFT       0x13

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ENABLE_C9D1_BMSK          0x00040000
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_ENABLE_C9D1_SHFT                0x12

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_DSCP_TID_MAP_PROGRAM_EN_BMSK 0x00020000
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_DSCP_TID_MAP_PROGRAM_EN_SHFT       0x11

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_MSDU_EXTN_NUM_BUF_RD_BMSK 0x0001c000
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_MSDU_EXTN_NUM_BUF_RD_SHFT        0xe

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_TCL_IDLE_BMSK             0x00002000
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_TCL_IDLE_SHFT                    0xd

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL_CMD_RNG_HALT_STAT_BMSK 0x00001000
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL_CMD_RNG_HALT_STAT_SHFT        0xc

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_FW2TCL1_RNG_HALT_STAT_BMSK 0x00000800
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_FW2TCL1_RNG_HALT_STAT_SHFT        0xb

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL3_RNG_HALT_STAT_BMSK 0x00000400
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL3_RNG_HALT_STAT_SHFT        0xa

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL2_RNG_HALT_STAT_BMSK 0x00000200
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL2_RNG_HALT_STAT_SHFT        0x9

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL1_RNG_HALT_STAT_BMSK 0x00000100
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL1_RNG_HALT_STAT_SHFT        0x8

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL_CMD_RNG_HALT_BMSK  0x00000080
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL_CMD_RNG_HALT_SHFT         0x7

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_FW2TCL1_RNG_HALT_BMSK     0x00000040
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_FW2TCL1_RNG_HALT_SHFT            0x6

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL3_RNG_HALT_BMSK     0x00000020
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL3_RNG_HALT_SHFT            0x5

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL2_RNG_HALT_BMSK     0x00000010
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL2_RNG_HALT_SHFT            0x4

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL1_RNG_HALT_BMSK     0x00000008
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_SW2TCL1_RNG_HALT_SHFT            0x3

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_HDR_FWD_EN_BMSK           0x00000004
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_HDR_FWD_EN_SHFT                  0x2

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_MSDU_HDR_LEN_SEL_BMSK     0x00000002
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_MSDU_HDR_LEN_SEL_SHFT            0x1

#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_CLFY_DIS_BMSK             0x00000001
#define HWIO_TCL_R0_CONS_RING_CMN_CTRL_REG_CLFY_DIS_SHFT                    0x0

//// Register TCL_R0_TCL2TQM_RING_CTRL ////

#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_ADDR(x)                        (x+0x00000018)
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_PHYS(x)                        (x+0x00000018)
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_RMSK                           0x00003fff
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_SHFT                                    0
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_CTRL_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_CTRL_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_TQM_STATUS_RING_BMSK           0x00002000
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_TQM_STATUS_RING_SHFT                  0xd

#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_TQM_STATUS_REQUIRED_BMSK       0x00001000
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_TQM_STATUS_REQUIRED_SHFT              0xc

#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_TIMEOUT_VAL_BMSK               0x00000fff
#define HWIO_TCL_R0_TCL2TQM_RING_CTRL_TIMEOUT_VAL_SHFT                      0x0

//// Register TCL_R0_TCL2FW_RING_CTRL ////

#define HWIO_TCL_R0_TCL2FW_RING_CTRL_ADDR(x)                         (x+0x0000001c)
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_PHYS(x)                         (x+0x0000001c)
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_RMSK                            0x00000fff
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_SHFT                                     0
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_IN(x)                           \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_CTRL_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_CTRL_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_INM(x, mask)                    \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_OUT(x, val)                     \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_OUTM(x, mask, val)              \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_CTRL_TIMEOUT_VAL_BMSK                0x00000fff
#define HWIO_TCL_R0_TCL2FW_RING_CTRL_TIMEOUT_VAL_SHFT                       0x0

//// Register TCL_R0_TCL_STATUS1_RING_CTRL ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_ADDR(x)                    (x+0x00000020)
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_PHYS(x)                    (x+0x00000020)
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_RMSK                       0x00000fff
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_SHFT                                0
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_TIMEOUT_VAL_BMSK           0x00000fff
#define HWIO_TCL_R0_TCL_STATUS1_RING_CTRL_TIMEOUT_VAL_SHFT                  0x0

//// Register TCL_R0_TCL_STATUS2_RING_CTRL ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_ADDR(x)                    (x+0x00000024)
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_PHYS(x)                    (x+0x00000024)
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_RMSK                       0x00000fff
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_SHFT                                0
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_TIMEOUT_VAL_BMSK           0x00000fff
#define HWIO_TCL_R0_TCL_STATUS2_RING_CTRL_TIMEOUT_VAL_SHFT                  0x0

//// Register TCL_R0_GEN_CTRL ////

#define HWIO_TCL_R0_GEN_CTRL_ADDR(x)                                 (x+0x00000028)
#define HWIO_TCL_R0_GEN_CTRL_PHYS(x)                                 (x+0x00000028)
#define HWIO_TCL_R0_GEN_CTRL_RMSK                                    0xfffff1fb
#define HWIO_TCL_R0_GEN_CTRL_SHFT                                             0
#define HWIO_TCL_R0_GEN_CTRL_IN(x)                                   \
	in_dword_masked ( HWIO_TCL_R0_GEN_CTRL_ADDR(x), HWIO_TCL_R0_GEN_CTRL_RMSK)
#define HWIO_TCL_R0_GEN_CTRL_INM(x, mask)                            \
	in_dword_masked ( HWIO_TCL_R0_GEN_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_GEN_CTRL_OUT(x, val)                             \
	out_dword( HWIO_TCL_R0_GEN_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_GEN_CTRL_OUTM(x, mask, val)                      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GEN_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_GEN_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GEN_CTRL_WHO_CLASSIFY_INFO_OFFSET_BMSK           0xffff0000
#define HWIO_TCL_R0_GEN_CTRL_WHO_CLASSIFY_INFO_OFFSET_SHFT                 0x10

#define HWIO_TCL_R0_GEN_CTRL_PROTOCOL_FROM_AH_OR_L4_BMSK             0x00008000
#define HWIO_TCL_R0_GEN_CTRL_PROTOCOL_FROM_AH_OR_L4_SHFT                    0xf

#define HWIO_TCL_R0_GEN_CTRL_PROTOCOL_FROM_AH_OR_ESP_BMSK            0x00004000
#define HWIO_TCL_R0_GEN_CTRL_PROTOCOL_FROM_AH_OR_ESP_SHFT                   0xe

#define HWIO_TCL_R0_GEN_CTRL_FLOW_TOEPLITZ_5_SEL_BMSK                0x00002000
#define HWIO_TCL_R0_GEN_CTRL_FLOW_TOEPLITZ_5_SEL_SHFT                       0xd

#define HWIO_TCL_R0_GEN_CTRL_CCE_STAT_UP_DIS_BMSK                    0x00001000
#define HWIO_TCL_R0_GEN_CTRL_CCE_STAT_UP_DIS_SHFT                           0xc

#define HWIO_TCL_R0_GEN_CTRL_CCE_UPDATE_DIS_BMSK                     0x00000100
#define HWIO_TCL_R0_GEN_CTRL_CCE_UPDATE_DIS_SHFT                            0x8

#define HWIO_TCL_R0_GEN_CTRL_FSE_UPDATE_DIS_BMSK                     0x00000080
#define HWIO_TCL_R0_GEN_CTRL_FSE_UPDATE_DIS_SHFT                            0x7

#define HWIO_TCL_R0_GEN_CTRL_ADDRY_UPDATE_DIS_BMSK                   0x00000040
#define HWIO_TCL_R0_GEN_CTRL_ADDRY_UPDATE_DIS_SHFT                          0x6

#define HWIO_TCL_R0_GEN_CTRL_ADDRX_UPDATE_DIS_BMSK                   0x00000020
#define HWIO_TCL_R0_GEN_CTRL_ADDRX_UPDATE_DIS_SHFT                          0x5

#define HWIO_TCL_R0_GEN_CTRL_FSE_EN_BMSK                             0x00000010
#define HWIO_TCL_R0_GEN_CTRL_FSE_EN_SHFT                                    0x4

#define HWIO_TCL_R0_GEN_CTRL_CCE_EN_BMSK                             0x00000008
#define HWIO_TCL_R0_GEN_CTRL_CCE_EN_SHFT                                    0x3

#define HWIO_TCL_R0_GEN_CTRL_TO_FW_BMSK                              0x00000002
#define HWIO_TCL_R0_GEN_CTRL_TO_FW_SHFT                                     0x1

#define HWIO_TCL_R0_GEN_CTRL_EN_11AH_BMSK                            0x00000001
#define HWIO_TCL_R0_GEN_CTRL_EN_11AH_SHFT                                   0x0

//// Register TCL_R0_DSCP_TID_MAP_n ////

#define HWIO_TCL_R0_DSCP_TID_MAP_n_ADDR(base, n)                     (base+0x2C+0x4*n)
#define HWIO_TCL_R0_DSCP_TID_MAP_n_PHYS(base, n)                     (base+0x2C+0x4*n)
#define HWIO_TCL_R0_DSCP_TID_MAP_n_RMSK                              0xffffffff
#define HWIO_TCL_R0_DSCP_TID_MAP_n_SHFT                                       0
#define HWIO_TCL_R0_DSCP_TID_MAP_n_MAXn                                     287
#define HWIO_TCL_R0_DSCP_TID_MAP_n_INI(base, n)                      \
	in_dword_masked ( HWIO_TCL_R0_DSCP_TID_MAP_n_ADDR(base, n), HWIO_TCL_R0_DSCP_TID_MAP_n_RMSK)
#define HWIO_TCL_R0_DSCP_TID_MAP_n_INMI(base, n, mask)               \
	in_dword_masked ( HWIO_TCL_R0_DSCP_TID_MAP_n_ADDR(base, n), mask) 
#define HWIO_TCL_R0_DSCP_TID_MAP_n_OUTI(base, n, val)                \
	out_dword( HWIO_TCL_R0_DSCP_TID_MAP_n_ADDR(base, n), val)
#define HWIO_TCL_R0_DSCP_TID_MAP_n_OUTMI(base, n, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_DSCP_TID_MAP_n_ADDR(base, n), mask, val, HWIO_TCL_R0_DSCP_TID_MAP_n_INI(base, n)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_DSCP_TID_MAP_n_VAL_BMSK                          0xffffffff
#define HWIO_TCL_R0_DSCP_TID_MAP_n_VAL_SHFT                                 0x0

//// Register TCL_R0_PCP_TID_MAP ////

#define HWIO_TCL_R0_PCP_TID_MAP_ADDR(x)                              (x+0x000004ac)
#define HWIO_TCL_R0_PCP_TID_MAP_PHYS(x)                              (x+0x000004ac)
#define HWIO_TCL_R0_PCP_TID_MAP_RMSK                                 0x00ffffff
#define HWIO_TCL_R0_PCP_TID_MAP_SHFT                                          0
#define HWIO_TCL_R0_PCP_TID_MAP_IN(x)                                \
	in_dword_masked ( HWIO_TCL_R0_PCP_TID_MAP_ADDR(x), HWIO_TCL_R0_PCP_TID_MAP_RMSK)
#define HWIO_TCL_R0_PCP_TID_MAP_INM(x, mask)                         \
	in_dword_masked ( HWIO_TCL_R0_PCP_TID_MAP_ADDR(x), mask) 
#define HWIO_TCL_R0_PCP_TID_MAP_OUT(x, val)                          \
	out_dword( HWIO_TCL_R0_PCP_TID_MAP_ADDR(x), val)
#define HWIO_TCL_R0_PCP_TID_MAP_OUTM(x, mask, val)                   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_PCP_TID_MAP_ADDR(x), mask, val, HWIO_TCL_R0_PCP_TID_MAP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_7_BMSK                           0x00e00000
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_7_SHFT                                 0x15

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_6_BMSK                           0x001c0000
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_6_SHFT                                 0x12

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_5_BMSK                           0x00038000
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_5_SHFT                                  0xf

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_4_BMSK                           0x00007000
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_4_SHFT                                  0xc

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_3_BMSK                           0x00000e00
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_3_SHFT                                  0x9

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_2_BMSK                           0x000001c0
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_2_SHFT                                  0x6

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_1_BMSK                           0x00000038
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_1_SHFT                                  0x3

#define HWIO_TCL_R0_PCP_TID_MAP_PCP_0_BMSK                           0x00000007
#define HWIO_TCL_R0_PCP_TID_MAP_PCP_0_SHFT                                  0x0

//// Register TCL_R0_ASE_HASH_KEY_31_0 ////

#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_ADDR(x)                        (x+0x000004b0)
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_PHYS(x)                        (x+0x000004b0)
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_RMSK                           0xffffffff
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_SHFT                                    0
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_ASE_HASH_KEY_31_0_ADDR(x), HWIO_TCL_R0_ASE_HASH_KEY_31_0_RMSK)
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_ASE_HASH_KEY_31_0_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_ASE_HASH_KEY_31_0_ADDR(x), val)
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_HASH_KEY_31_0_ADDR(x), mask, val, HWIO_TCL_R0_ASE_HASH_KEY_31_0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_VAL_BMSK                       0xffffffff
#define HWIO_TCL_R0_ASE_HASH_KEY_31_0_VAL_SHFT                              0x0

//// Register TCL_R0_ASE_HASH_KEY_63_32 ////

#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_ADDR(x)                       (x+0x000004b4)
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_PHYS(x)                       (x+0x000004b4)
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_RMSK                          0xffffffff
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_SHFT                                   0
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_IN(x)                         \
	in_dword_masked ( HWIO_TCL_R0_ASE_HASH_KEY_63_32_ADDR(x), HWIO_TCL_R0_ASE_HASH_KEY_63_32_RMSK)
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_INM(x, mask)                  \
	in_dword_masked ( HWIO_TCL_R0_ASE_HASH_KEY_63_32_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_OUT(x, val)                   \
	out_dword( HWIO_TCL_R0_ASE_HASH_KEY_63_32_ADDR(x), val)
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_OUTM(x, mask, val)            \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_HASH_KEY_63_32_ADDR(x), mask, val, HWIO_TCL_R0_ASE_HASH_KEY_63_32_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_VAL_BMSK                      0xffffffff
#define HWIO_TCL_R0_ASE_HASH_KEY_63_32_VAL_SHFT                             0x0

//// Register TCL_R0_ASE_HASH_KEY_64 ////

#define HWIO_TCL_R0_ASE_HASH_KEY_64_ADDR(x)                          (x+0x000004b8)
#define HWIO_TCL_R0_ASE_HASH_KEY_64_PHYS(x)                          (x+0x000004b8)
#define HWIO_TCL_R0_ASE_HASH_KEY_64_RMSK                             0x00000001
#define HWIO_TCL_R0_ASE_HASH_KEY_64_SHFT                                      0
#define HWIO_TCL_R0_ASE_HASH_KEY_64_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_ASE_HASH_KEY_64_ADDR(x), HWIO_TCL_R0_ASE_HASH_KEY_64_RMSK)
#define HWIO_TCL_R0_ASE_HASH_KEY_64_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_ASE_HASH_KEY_64_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_HASH_KEY_64_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_ASE_HASH_KEY_64_ADDR(x), val)
#define HWIO_TCL_R0_ASE_HASH_KEY_64_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_HASH_KEY_64_ADDR(x), mask, val, HWIO_TCL_R0_ASE_HASH_KEY_64_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_HASH_KEY_64_VAL_BMSK                         0x00000001
#define HWIO_TCL_R0_ASE_HASH_KEY_64_VAL_SHFT                                0x0

//// Register TCL_R0_CONFIG_SEARCH_QUEUE ////

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ADDR(x)                      (x+0x000004bc)
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_PHYS(x)                      (x+0x000004bc)
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_RMSK                         0x00fffdfc
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_SHFT                                  2
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ADDR(x), HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_RMSK)
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ADDR(x), mask) 
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ADDR(x), val)
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ADDR(x), mask, val, HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_MSDU_LEN_ERR_TO_FW_EN_BMSK   0x00800000
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_MSDU_LEN_ERR_TO_FW_EN_SHFT         0x17

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_M0_FW_SEL_BMSK           0x00700000
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_M0_FW_SEL_SHFT                 0x14

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ASE_M0_FW_SEL_BMSK           0x000e0000
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_ASE_M0_FW_SEL_SHFT                 0x11

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_M0_FW_SEL_BMSK           0x0001c000
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_M0_FW_SEL_SHFT                  0xe

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_FAIL_DROP_BMSK           0x00002000
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_FAIL_DROP_SHFT                  0xd

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_FAIL_DROP_BMSK           0x00001000
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_FAIL_DROP_SHFT                  0xc

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_FAIL_LOOP_BMSK           0x00000800
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_FAIL_LOOP_SHFT                  0xb

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_FAIL_LOOP_BMSK           0x00000400
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_FAIL_LOOP_SHFT                  0xa

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_PRIORITY_BMSK                0x000001c0
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_PRIORITY_SHFT                       0x6

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_FAIL_HANDLER_BMSK        0x00000030
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_CCE_FAIL_HANDLER_SHFT               0x4

#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_FAIL_HANDLER_BMSK        0x0000000c
#define HWIO_TCL_R0_CONFIG_SEARCH_QUEUE_FSE_FAIL_HANDLER_SHFT               0x2

//// Register TCL_R0_FSE_FAIL_QUEUE_NUM_LOW ////

#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_ADDR(x)                   (x+0x000004c0)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_PHYS(x)                   (x+0x000004c0)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_RMSK                      0xffffffff
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_SHFT                               0
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_ADDR(x), HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_RMSK)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_ADDR(x), mask) 
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_ADDR(x), val)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_ADDR(x), mask, val, HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_VAL_BMSK                  0xffffffff
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_LOW_VAL_SHFT                         0x0

//// Register TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH ////

#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_ADDR(x)                  (x+0x000004c4)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_PHYS(x)                  (x+0x000004c4)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_RMSK                     0x000000ff
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_SHFT                              0
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_ADDR(x), HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_RMSK)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_ADDR(x), mask) 
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_ADDR(x), val)
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_ADDR(x), mask, val, HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_VAL_BMSK                 0x000000ff
#define HWIO_TCL_R0_FSE_FAIL_QUEUE_NUM_HIGH_VAL_SHFT                        0x0

//// Register TCL_R0_CCE_FAIL_QUEUE_NUM_LOW ////

#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_ADDR(x)                   (x+0x000004c8)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_PHYS(x)                   (x+0x000004c8)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_RMSK                      0xffffffff
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_SHFT                               0
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_ADDR(x), HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_RMSK)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_ADDR(x), mask) 
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_ADDR(x), val)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_ADDR(x), mask, val, HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_VAL_BMSK                  0xffffffff
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_LOW_VAL_SHFT                         0x0

//// Register TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH ////

#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_ADDR(x)                  (x+0x000004cc)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_PHYS(x)                  (x+0x000004cc)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_RMSK                     0x000000ff
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_SHFT                              0
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_ADDR(x), HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_RMSK)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_ADDR(x), mask) 
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_ADDR(x), val)
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_ADDR(x), mask, val, HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_VAL_BMSK                 0x000000ff
#define HWIO_TCL_R0_CCE_FAIL_QUEUE_NUM_HIGH_VAL_SHFT                        0x0

//// Register TCL_R0_CONFIG_SEARCH_METADATA ////

#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_ADDR(x)                   (x+0x000004d0)
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_PHYS(x)                   (x+0x000004d0)
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_RMSK                      0xffffffff
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_SHFT                               0
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_CONFIG_SEARCH_METADATA_ADDR(x), HWIO_TCL_R0_CONFIG_SEARCH_METADATA_RMSK)
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_CONFIG_SEARCH_METADATA_ADDR(x), mask) 
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_CONFIG_SEARCH_METADATA_ADDR(x), val)
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_CONFIG_SEARCH_METADATA_ADDR(x), mask, val, HWIO_TCL_R0_CONFIG_SEARCH_METADATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_FSE_FAIL_NUM_BMSK         0xffff0000
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_FSE_FAIL_NUM_SHFT               0x10

#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_CCE_FAIL_NUM_BMSK         0x0000ffff
#define HWIO_TCL_R0_CONFIG_SEARCH_METADATA_CCE_FAIL_NUM_SHFT                0x0

//// Register TCL_R0_TID_MAP_PRTY ////

#define HWIO_TCL_R0_TID_MAP_PRTY_ADDR(x)                             (x+0x000004d4)
#define HWIO_TCL_R0_TID_MAP_PRTY_PHYS(x)                             (x+0x000004d4)
#define HWIO_TCL_R0_TID_MAP_PRTY_RMSK                                0x000000ef
#define HWIO_TCL_R0_TID_MAP_PRTY_SHFT                                         0
#define HWIO_TCL_R0_TID_MAP_PRTY_IN(x)                               \
	in_dword_masked ( HWIO_TCL_R0_TID_MAP_PRTY_ADDR(x), HWIO_TCL_R0_TID_MAP_PRTY_RMSK)
#define HWIO_TCL_R0_TID_MAP_PRTY_INM(x, mask)                        \
	in_dword_masked ( HWIO_TCL_R0_TID_MAP_PRTY_ADDR(x), mask) 
#define HWIO_TCL_R0_TID_MAP_PRTY_OUT(x, val)                         \
	out_dword( HWIO_TCL_R0_TID_MAP_PRTY_ADDR(x), val)
#define HWIO_TCL_R0_TID_MAP_PRTY_OUTM(x, mask, val)                  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TID_MAP_PRTY_ADDR(x), mask, val, HWIO_TCL_R0_TID_MAP_PRTY_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TID_MAP_PRTY_TID_DEF_BMSK                        0x000000e0
#define HWIO_TCL_R0_TID_MAP_PRTY_TID_DEF_SHFT                               0x5

#define HWIO_TCL_R0_TID_MAP_PRTY_VAL_BMSK                            0x0000000f
#define HWIO_TCL_R0_TID_MAP_PRTY_VAL_SHFT                                   0x0

//// Register TCL_R0_INVALID_APB_ACC_ADDR ////

#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_ADDR(x)                     (x+0x000004d8)
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_PHYS(x)                     (x+0x000004d8)
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_RMSK                        0xffffffff
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_SHFT                                 0
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_INVALID_APB_ACC_ADDR_ADDR(x), HWIO_TCL_R0_INVALID_APB_ACC_ADDR_RMSK)
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_INVALID_APB_ACC_ADDR_ADDR(x), mask) 
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_INVALID_APB_ACC_ADDR_ADDR(x), val)
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_INVALID_APB_ACC_ADDR_ADDR(x), mask, val, HWIO_TCL_R0_INVALID_APB_ACC_ADDR_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_VAL_BMSK                    0xffffffff
#define HWIO_TCL_R0_INVALID_APB_ACC_ADDR_VAL_SHFT                           0x0

//// Register TCL_R0_WATCHDOG ////

#define HWIO_TCL_R0_WATCHDOG_ADDR(x)                                 (x+0x000004dc)
#define HWIO_TCL_R0_WATCHDOG_PHYS(x)                                 (x+0x000004dc)
#define HWIO_TCL_R0_WATCHDOG_RMSK                                    0xffffffff
#define HWIO_TCL_R0_WATCHDOG_SHFT                                             0
#define HWIO_TCL_R0_WATCHDOG_IN(x)                                   \
	in_dword_masked ( HWIO_TCL_R0_WATCHDOG_ADDR(x), HWIO_TCL_R0_WATCHDOG_RMSK)
#define HWIO_TCL_R0_WATCHDOG_INM(x, mask)                            \
	in_dword_masked ( HWIO_TCL_R0_WATCHDOG_ADDR(x), mask) 
#define HWIO_TCL_R0_WATCHDOG_OUT(x, val)                             \
	out_dword( HWIO_TCL_R0_WATCHDOG_ADDR(x), val)
#define HWIO_TCL_R0_WATCHDOG_OUTM(x, mask, val)                      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_WATCHDOG_ADDR(x), mask, val, HWIO_TCL_R0_WATCHDOG_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_WATCHDOG_STATUS_BMSK                             0xffff0000
#define HWIO_TCL_R0_WATCHDOG_STATUS_SHFT                                   0x10

#define HWIO_TCL_R0_WATCHDOG_LIMIT_BMSK                              0x0000ffff
#define HWIO_TCL_R0_WATCHDOG_LIMIT_SHFT                                     0x0

//// Register TCL_R0_LCE_RULE_n ////

#define HWIO_TCL_R0_LCE_RULE_n_ADDR(base, n)                         (base+0x4E0+0x4*n)
#define HWIO_TCL_R0_LCE_RULE_n_PHYS(base, n)                         (base+0x4E0+0x4*n)
#define HWIO_TCL_R0_LCE_RULE_n_RMSK                                  0x007fffff
#define HWIO_TCL_R0_LCE_RULE_n_SHFT                                           0
#define HWIO_TCL_R0_LCE_RULE_n_MAXn                                          25
#define HWIO_TCL_R0_LCE_RULE_n_INI(base, n)                          \
	in_dword_masked ( HWIO_TCL_R0_LCE_RULE_n_ADDR(base, n), HWIO_TCL_R0_LCE_RULE_n_RMSK)
#define HWIO_TCL_R0_LCE_RULE_n_INMI(base, n, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_LCE_RULE_n_ADDR(base, n), mask) 
#define HWIO_TCL_R0_LCE_RULE_n_OUTI(base, n, val)                    \
	out_dword( HWIO_TCL_R0_LCE_RULE_n_ADDR(base, n), val)
#define HWIO_TCL_R0_LCE_RULE_n_OUTMI(base, n, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_LCE_RULE_n_ADDR(base, n), mask, val, HWIO_TCL_R0_LCE_RULE_n_INI(base, n)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_LCE_RULE_n_MATCH_IP_PROT_BMSK                    0x00400000
#define HWIO_TCL_R0_LCE_RULE_n_MATCH_IP_PROT_SHFT                          0x16

#define HWIO_TCL_R0_LCE_RULE_n_MATCH_DEST_ADDR_BIT_0_BMSK            0x00200000
#define HWIO_TCL_R0_LCE_RULE_n_MATCH_DEST_ADDR_BIT_0_SHFT                  0x15

#define HWIO_TCL_R0_LCE_RULE_n_TCP_OR_UDP_BMSK                       0x00180000
#define HWIO_TCL_R0_LCE_RULE_n_TCP_OR_UDP_SHFT                             0x13

#define HWIO_TCL_R0_LCE_RULE_n_MATCH_DEST_PORT_BMSK                  0x00040000
#define HWIO_TCL_R0_LCE_RULE_n_MATCH_DEST_PORT_SHFT                        0x12

#define HWIO_TCL_R0_LCE_RULE_n_MATCH_SRC_PORT_BMSK                   0x00020000
#define HWIO_TCL_R0_LCE_RULE_n_MATCH_SRC_PORT_SHFT                         0x11

#define HWIO_TCL_R0_LCE_RULE_n_MATCH_L3_TYPE_BMSK                    0x00010000
#define HWIO_TCL_R0_LCE_RULE_n_MATCH_L3_TYPE_SHFT                          0x10

#define HWIO_TCL_R0_LCE_RULE_n_MATCH_VAL_BMSK                        0x0000ffff
#define HWIO_TCL_R0_LCE_RULE_n_MATCH_VAL_SHFT                               0x0

//// Register TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n ////

#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_ADDR(base, n)       (base+0x548+0x4*n)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_PHYS(base, n)       (base+0x548+0x4*n)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_RMSK                0xffffffff
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_SHFT                         0
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_MAXn                        25
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_INI(base, n)        \
	in_dword_masked ( HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_ADDR(base, n), HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_RMSK)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_INMI(base, n, mask) \
	in_dword_masked ( HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_ADDR(base, n), mask) 
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_OUTI(base, n, val)  \
	out_dword( HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_ADDR(base, n), val)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_OUTMI(base, n, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_ADDR(base, n), mask, val, HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_INI(base, n)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_VAL_BMSK            0xffffffff
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_LSB_n_VAL_SHFT                   0x0

//// Register TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n ////

#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_ADDR(base, n)       (base+0x5B0+0x4*n)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_PHYS(base, n)       (base+0x5B0+0x4*n)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_RMSK                0x000000ff
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_SHFT                         0
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_MAXn                        25
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_INI(base, n)        \
	in_dword_masked ( HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_ADDR(base, n), HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_RMSK)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_INMI(base, n, mask) \
	in_dword_masked ( HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_ADDR(base, n), mask) 
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_OUTI(base, n, val)  \
	out_dword( HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_ADDR(base, n), val)
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_OUTMI(base, n, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_ADDR(base, n), mask, val, HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_INI(base, n)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_VAL_BMSK            0x000000ff
#define HWIO_TCL_R0_LCE_CLFY_INFO_FLOW_PTR_MSB_n_VAL_SHFT                   0x0

//// Register TCL_R0_LCE_CLFY_INFO_HANDLER_n ////

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_ADDR(base, n)            (base+0x618+0x4*n)
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_PHYS(base, n)            (base+0x618+0x4*n)
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_RMSK                     0x003fffff
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_SHFT                              0
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_MAXn                             25
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_INI(base, n)             \
	in_dword_masked ( HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_ADDR(base, n), HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_RMSK)
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_INMI(base, n, mask)      \
	in_dword_masked ( HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_ADDR(base, n), mask) 
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_OUTI(base, n, val)       \
	out_dword( HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_ADDR(base, n), val)
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_OUTMI(base, n, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_ADDR(base, n), mask, val, HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_INI(base, n)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_RULE_HIT_BMSK            0x00200000
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_RULE_HIT_SHFT                  0x15

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_METADATA_BMSK            0x001fffe0
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_METADATA_SHFT                   0x5

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_MSDU_DROP_BMSK           0x00000010
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_MSDU_DROP_SHFT                  0x4

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_TO_TQM_IF_M0_FW_BMSK     0x00000008
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_TO_TQM_IF_M0_FW_SHFT            0x3

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_TQM_FLOW_LOOP_HANDLER_BMSK 0x00000004
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_TQM_FLOW_LOOP_HANDLER_SHFT        0x2

#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_TQM_FLOW_HANDLER_BMSK    0x00000003
#define HWIO_TCL_R0_LCE_CLFY_INFO_HANDLER_n_TQM_FLOW_HANDLER_SHFT           0x0

//// Register TCL_R0_CLKGATE_DISABLE ////

#define HWIO_TCL_R0_CLKGATE_DISABLE_ADDR(x)                          (x+0x00000680)
#define HWIO_TCL_R0_CLKGATE_DISABLE_PHYS(x)                          (x+0x00000680)
#define HWIO_TCL_R0_CLKGATE_DISABLE_RMSK                             0xffffffff
#define HWIO_TCL_R0_CLKGATE_DISABLE_SHFT                                      0
#define HWIO_TCL_R0_CLKGATE_DISABLE_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_CLKGATE_DISABLE_ADDR(x), HWIO_TCL_R0_CLKGATE_DISABLE_RMSK)
#define HWIO_TCL_R0_CLKGATE_DISABLE_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_CLKGATE_DISABLE_ADDR(x), mask) 
#define HWIO_TCL_R0_CLKGATE_DISABLE_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_CLKGATE_DISABLE_ADDR(x), val)
#define HWIO_TCL_R0_CLKGATE_DISABLE_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_CLKGATE_DISABLE_ADDR(x), mask, val, HWIO_TCL_R0_CLKGATE_DISABLE_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_CLKGATE_DISABLE_CLK_ENS_EXTEND_BMSK              0x80000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_CLK_ENS_EXTEND_SHFT                    0x1f

#define HWIO_TCL_R0_CLKGATE_DISABLE_CPU_IF_EXTEND_BMSK               0x40000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_CPU_IF_EXTEND_SHFT                     0x1e

#define HWIO_TCL_R0_CLKGATE_DISABLE_APB_CLK_BMSK                     0x20000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_APB_CLK_SHFT                           0x1d

#define HWIO_TCL_R0_CLKGATE_DISABLE_FSE_BMSK                         0x10000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_FSE_SHFT                               0x1c

#define HWIO_TCL_R0_CLKGATE_DISABLE_CLFY_RES_MEM_BMSK                0x08000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_CLFY_RES_MEM_SHFT                      0x1b

#define HWIO_TCL_R0_CLKGATE_DISABLE_GSE_CTRL_BMSK                    0x04000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_GSE_CTRL_SHFT                          0x1a

#define HWIO_TCL_R0_CLKGATE_DISABLE_GSE_CCE_RES_BMSK                 0x02000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_GSE_CCE_RES_SHFT                       0x19

#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2_STATUS2_PROD_RING_BMSK      0x01000000
#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2_STATUS2_PROD_RING_SHFT            0x18

#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2_STATUS1_PROD_RING_BMSK      0x00800000
#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2_STATUS1_PROD_RING_SHFT            0x17

#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2FW_PROD_RING_BMSK            0x00400000
#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2FW_PROD_RING_SHFT                  0x16

#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2TQM_PROD_RING_BMSK           0x00200000
#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL2TQM_PROD_RING_SHFT                 0x15

#define HWIO_TCL_R0_CLKGATE_DISABLE_PROD_RING_CTRL_BMSK              0x00100000
#define HWIO_TCL_R0_CLKGATE_DISABLE_PROD_RING_CTRL_SHFT                    0x14

#define HWIO_TCL_R0_CLKGATE_DISABLE_TLV_DECODE_BMSK                  0x00080000
#define HWIO_TCL_R0_CLKGATE_DISABLE_TLV_DECODE_SHFT                        0x13

#define HWIO_TCL_R0_CLKGATE_DISABLE_TLV_GEN_BMSK                     0x00040000
#define HWIO_TCL_R0_CLKGATE_DISABLE_TLV_GEN_SHFT                           0x12

#define HWIO_TCL_R0_CLKGATE_DISABLE_DATA_FETCH_BMSK                  0x00020000
#define HWIO_TCL_R0_CLKGATE_DISABLE_DATA_FETCH_SHFT                        0x11

#define HWIO_TCL_R0_CLKGATE_DISABLE_DATA_BUF_BMSK                    0x00010000
#define HWIO_TCL_R0_CLKGATE_DISABLE_DATA_BUF_SHFT                          0x10

#define HWIO_TCL_R0_CLKGATE_DISABLE_DESC_BUF_BMSK                    0x00008000
#define HWIO_TCL_R0_CLKGATE_DISABLE_DESC_BUF_SHFT                           0xf

#define HWIO_TCL_R0_CLKGATE_DISABLE_DESC_RD_BMSK                     0x00004000
#define HWIO_TCL_R0_CLKGATE_DISABLE_DESC_RD_SHFT                            0xe

#define HWIO_TCL_R0_CLKGATE_DISABLE_ASE_BMSK                         0x00002000
#define HWIO_TCL_R0_CLKGATE_DISABLE_ASE_SHFT                                0xd

#define HWIO_TCL_R0_CLKGATE_DISABLE_GXI_BMSK                         0x00001000
#define HWIO_TCL_R0_CLKGATE_DISABLE_GXI_SHFT                                0xc

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_3_BMSK                    0x00000800
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_3_SHFT                           0xb

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_2_BMSK                    0x00000400
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_2_SHFT                           0xa

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_1_BMSK                    0x00000200
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_1_SHFT                           0x9

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_0_BMSK                    0x00000100
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_P_0_SHFT                           0x8

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_4_BMSK                    0x00000080
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_4_SHFT                           0x7

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_3_BMSK                    0x00000040
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_3_SHFT                           0x6

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_2_BMSK                    0x00000020
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_2_SHFT                           0x5

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_1_BMSK                    0x00000010
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_1_SHFT                           0x4

#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_0_BMSK                    0x00000008
#define HWIO_TCL_R0_CLKGATE_DISABLE_SRNG_C_0_SHFT                           0x3

#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL_IDLE_REQ_SM_BMSK             0x00000004
#define HWIO_TCL_R0_CLKGATE_DISABLE_TCL_IDLE_REQ_SM_SHFT                    0x2

#define HWIO_TCL_R0_CLKGATE_DISABLE_LCE_BMSK                         0x00000002
#define HWIO_TCL_R0_CLKGATE_DISABLE_LCE_SHFT                                0x1

#define HWIO_TCL_R0_CLKGATE_DISABLE_PARSER_BMSK                      0x00000001
#define HWIO_TCL_R0_CLKGATE_DISABLE_PARSER_SHFT                             0x0

//// Register TCL_R0_SW2TCL1_RING_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_ADDR(x)                    (x+0x00000684)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_PHYS(x)                    (x+0x00000684)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_RMSK                       0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_SHFT                                0
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK    0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT           0x0

//// Register TCL_R0_SW2TCL1_RING_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_ADDR(x)                    (x+0x00000688)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_PHYS(x)                    (x+0x00000688)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_RMSK                       0x0fffffff
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_SHFT                                0
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_RING_SIZE_BMSK             0x0fffff00
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_RING_SIZE_SHFT                    0x8

#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK    0x000000ff
#define HWIO_TCL_R0_SW2TCL1_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT           0x0

//// Register TCL_R0_SW2TCL1_RING_ID ////

#define HWIO_TCL_R0_SW2TCL1_RING_ID_ADDR(x)                          (x+0x0000068c)
#define HWIO_TCL_R0_SW2TCL1_RING_ID_PHYS(x)                          (x+0x0000068c)
#define HWIO_TCL_R0_SW2TCL1_RING_ID_RMSK                             0x000000ff
#define HWIO_TCL_R0_SW2TCL1_RING_ID_SHFT                                      0
#define HWIO_TCL_R0_SW2TCL1_RING_ID_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_ID_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_ID_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_ID_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_ID_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_ID_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_ID_ENTRY_SIZE_BMSK                  0x000000ff
#define HWIO_TCL_R0_SW2TCL1_RING_ID_ENTRY_SIZE_SHFT                         0x0

//// Register TCL_R0_SW2TCL1_RING_STATUS ////

#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_ADDR(x)                      (x+0x00000690)
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_PHYS(x)                      (x+0x00000690)
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_RMSK                         0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_SHFT                                  0
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_NUM_AVAIL_WORDS_BMSK         0xffff0000
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_NUM_AVAIL_WORDS_SHFT               0x10

#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_NUM_VALID_WORDS_BMSK         0x0000ffff
#define HWIO_TCL_R0_SW2TCL1_RING_STATUS_NUM_VALID_WORDS_SHFT                0x0

//// Register TCL_R0_SW2TCL1_RING_MISC ////

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_ADDR(x)                        (x+0x00000694)
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_PHYS(x)                        (x+0x00000694)
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_RMSK                           0x003fffff
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SHFT                                    0
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MISC_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_MISC_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SPARE_CONTROL_BMSK             0x003fc000
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SPARE_CONTROL_SHFT                    0xe

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_SM_STATE2_BMSK            0x00003000
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_SM_STATE2_SHFT                   0xc

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_SM_STATE1_BMSK            0x00000f00
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_SM_STATE1_SHFT                   0x8

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_IS_IDLE_BMSK              0x00000080
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_IS_IDLE_SHFT                     0x7

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_ENABLE_BMSK               0x00000040
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SRNG_ENABLE_SHFT                      0x6

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_DATA_TLV_SWAP_BIT_BMSK         0x00000020
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_DATA_TLV_SWAP_BIT_SHFT                0x5

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_HOST_FW_SWAP_BIT_BMSK          0x00000010
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_HOST_FW_SWAP_BIT_SHFT                 0x4

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_MSI_SWAP_BIT_BMSK              0x00000008
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_MSI_SWAP_BIT_SHFT                     0x3

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SECURITY_BIT_BMSK              0x00000004
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_SECURITY_BIT_SHFT                     0x2

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_LOOPCNT_DISABLE_BMSK           0x00000002
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_LOOPCNT_DISABLE_SHFT                  0x1

#define HWIO_TCL_R0_SW2TCL1_RING_MISC_RING_ID_DISABLE_BMSK           0x00000001
#define HWIO_TCL_R0_SW2TCL1_RING_MISC_RING_ID_DISABLE_SHFT                  0x0

//// Register TCL_R0_SW2TCL1_RING_TP_ADDR_LSB ////

#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_ADDR(x)                 (x+0x000006a0)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_PHYS(x)                 (x+0x000006a0)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_RMSK                    0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_TP_ADDR_MSB ////

#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_ADDR(x)                 (x+0x000006a4)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_PHYS(x)                 (x+0x000006a4)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_RMSK                    0x000000ff
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_SW2TCL1_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0 ////

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x)      (x+0x000006b4)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_PHYS(x)      (x+0x000006b4)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_RMSK         0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_SHFT                  0
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1 ////

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x)      (x+0x000006b8)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_PHYS(x)      (x+0x000006b8)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_RMSK         0x0000ffff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_SHFT                  0
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS ////

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x)         (x+0x000006bc)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_PHYS(x)         (x+0x000006bc)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_RMSK            0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_SHFT                     0
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER ////

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x)      (x+0x000006c0)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_PHYS(x)      (x+0x000006c0)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RMSK         0x000003ff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_SHFT                  0
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER ////

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x)     (x+0x000006c4)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_PHYS(x)     (x+0x000006c4)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_RMSK        0x00000007
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_SHFT                 0
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_IN(x)       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_MODE_BMSK   0x00000007
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_TIMER_MODE_SHFT          0x0

//// Register TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS ////

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x)    (x+0x000006c8)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_PHYS(x)    (x+0x000006c8)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_RMSK       0x0fffffff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_SHFT                0
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_IN(x)      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_BMSK 0x0ff00000
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_SHFT       0x14

#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_BMSK 0x000fffff
#define HWIO_TCL_R0_SW2TCL1_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_SHFT        0x0

//// Register TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR(x)               (x+0x000006cc)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_PHYS(x)               (x+0x000006cc)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_RMSK                  0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_SHFT                           0
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR_BMSK             0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_LSB_ADDR_SHFT                    0x0

//// Register TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR(x)               (x+0x000006d0)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_PHYS(x)               (x+0x000006d0)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_RMSK                  0x000001ff
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_SHFT                           0
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK      0x00000100
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT             0x8

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR_BMSK             0x000000ff
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_BASE_MSB_ADDR_SHFT                    0x0

//// Register TCL_R0_SW2TCL1_RING_MSI1_DATA ////

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_ADDR(x)                   (x+0x000006d4)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_PHYS(x)                   (x+0x000006d4)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_RMSK                      0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_SHFT                               0
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_VALUE_BMSK                0xffffffff
#define HWIO_TCL_R0_SW2TCL1_RING_MSI1_DATA_VALUE_SHFT                       0x0

//// Register TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x)             (x+0x000006d8)
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_PHYS(x)             (x+0x000006d8)
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_RMSK                0x0000ffff
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_SHFT                         0
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL1_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_ADDR(x)                    (x+0x000006dc)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_PHYS(x)                    (x+0x000006dc)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_RMSK                       0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_SHFT                                0
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK    0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT           0x0

//// Register TCL_R0_SW2TCL2_RING_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_ADDR(x)                    (x+0x000006e0)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_PHYS(x)                    (x+0x000006e0)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_RMSK                       0x0fffffff
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_SHFT                                0
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_RING_SIZE_BMSK             0x0fffff00
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_RING_SIZE_SHFT                    0x8

#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK    0x000000ff
#define HWIO_TCL_R0_SW2TCL2_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT           0x0

//// Register TCL_R0_SW2TCL2_RING_ID ////

#define HWIO_TCL_R0_SW2TCL2_RING_ID_ADDR(x)                          (x+0x000006e4)
#define HWIO_TCL_R0_SW2TCL2_RING_ID_PHYS(x)                          (x+0x000006e4)
#define HWIO_TCL_R0_SW2TCL2_RING_ID_RMSK                             0x000000ff
#define HWIO_TCL_R0_SW2TCL2_RING_ID_SHFT                                      0
#define HWIO_TCL_R0_SW2TCL2_RING_ID_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_ID_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_ID_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_ID_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_ID_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_ID_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_ID_ENTRY_SIZE_BMSK                  0x000000ff
#define HWIO_TCL_R0_SW2TCL2_RING_ID_ENTRY_SIZE_SHFT                         0x0

//// Register TCL_R0_SW2TCL2_RING_STATUS ////

#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_ADDR(x)                      (x+0x000006e8)
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_PHYS(x)                      (x+0x000006e8)
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_RMSK                         0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_SHFT                                  0
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_NUM_AVAIL_WORDS_BMSK         0xffff0000
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_NUM_AVAIL_WORDS_SHFT               0x10

#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_NUM_VALID_WORDS_BMSK         0x0000ffff
#define HWIO_TCL_R0_SW2TCL2_RING_STATUS_NUM_VALID_WORDS_SHFT                0x0

//// Register TCL_R0_SW2TCL2_RING_MISC ////

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_ADDR(x)                        (x+0x000006ec)
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_PHYS(x)                        (x+0x000006ec)
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_RMSK                           0x003fffff
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SHFT                                    0
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MISC_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_MISC_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SPARE_CONTROL_BMSK             0x003fc000
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SPARE_CONTROL_SHFT                    0xe

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_SM_STATE2_BMSK            0x00003000
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_SM_STATE2_SHFT                   0xc

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_SM_STATE1_BMSK            0x00000f00
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_SM_STATE1_SHFT                   0x8

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_IS_IDLE_BMSK              0x00000080
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_IS_IDLE_SHFT                     0x7

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_ENABLE_BMSK               0x00000040
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SRNG_ENABLE_SHFT                      0x6

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_DATA_TLV_SWAP_BIT_BMSK         0x00000020
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_DATA_TLV_SWAP_BIT_SHFT                0x5

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_HOST_FW_SWAP_BIT_BMSK          0x00000010
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_HOST_FW_SWAP_BIT_SHFT                 0x4

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_MSI_SWAP_BIT_BMSK              0x00000008
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_MSI_SWAP_BIT_SHFT                     0x3

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SECURITY_BIT_BMSK              0x00000004
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_SECURITY_BIT_SHFT                     0x2

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_LOOPCNT_DISABLE_BMSK           0x00000002
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_LOOPCNT_DISABLE_SHFT                  0x1

#define HWIO_TCL_R0_SW2TCL2_RING_MISC_RING_ID_DISABLE_BMSK           0x00000001
#define HWIO_TCL_R0_SW2TCL2_RING_MISC_RING_ID_DISABLE_SHFT                  0x0

//// Register TCL_R0_SW2TCL2_RING_TP_ADDR_LSB ////

#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_ADDR(x)                 (x+0x000006f8)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_PHYS(x)                 (x+0x000006f8)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_RMSK                    0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_TP_ADDR_MSB ////

#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_ADDR(x)                 (x+0x000006fc)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_PHYS(x)                 (x+0x000006fc)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_RMSK                    0x000000ff
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_SW2TCL2_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0 ////

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_ADDR(x)      (x+0x0000070c)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_PHYS(x)      (x+0x0000070c)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_RMSK         0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_SHFT                  0
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1 ////

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_ADDR(x)      (x+0x00000710)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_PHYS(x)      (x+0x00000710)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_RMSK         0x0000ffff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_SHFT                  0
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS ////

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_ADDR(x)         (x+0x00000714)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_PHYS(x)         (x+0x00000714)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_RMSK            0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_SHFT                     0
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER ////

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_ADDR(x)      (x+0x00000718)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_PHYS(x)      (x+0x00000718)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_RMSK         0x000003ff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_SHFT                  0
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER ////

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_ADDR(x)     (x+0x0000071c)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_PHYS(x)     (x+0x0000071c)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_RMSK        0x00000007
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_SHFT                 0
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_IN(x)       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_MODE_BMSK   0x00000007
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_TIMER_MODE_SHFT          0x0

//// Register TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS ////

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_ADDR(x)    (x+0x00000720)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_PHYS(x)    (x+0x00000720)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_RMSK       0x0fffffff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_SHFT                0
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_IN(x)      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_BMSK 0x0ff00000
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_SHFT       0x14

#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_BMSK 0x000fffff
#define HWIO_TCL_R0_SW2TCL2_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_SHFT        0x0

//// Register TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR(x)               (x+0x00000724)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_PHYS(x)               (x+0x00000724)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_RMSK                  0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_SHFT                           0
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR_BMSK             0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_LSB_ADDR_SHFT                    0x0

//// Register TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR(x)               (x+0x00000728)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_PHYS(x)               (x+0x00000728)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_RMSK                  0x000001ff
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_SHFT                           0
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK      0x00000100
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT             0x8

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR_BMSK             0x000000ff
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_BASE_MSB_ADDR_SHFT                    0x0

//// Register TCL_R0_SW2TCL2_RING_MSI1_DATA ////

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_ADDR(x)                   (x+0x0000072c)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_PHYS(x)                   (x+0x0000072c)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_RMSK                      0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_SHFT                               0
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_VALUE_BMSK                0xffffffff
#define HWIO_TCL_R0_SW2TCL2_RING_MSI1_DATA_VALUE_SHFT                       0x0

//// Register TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_ADDR(x)             (x+0x00000730)
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_PHYS(x)             (x+0x00000730)
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_RMSK                0x0000ffff
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_SHFT                         0
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL2_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_ADDR(x)                    (x+0x00000734)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_PHYS(x)                    (x+0x00000734)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_RMSK                       0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_SHFT                                0
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK    0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT           0x0

//// Register TCL_R0_SW2TCL3_RING_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_ADDR(x)                    (x+0x00000738)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_PHYS(x)                    (x+0x00000738)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_RMSK                       0x0fffffff
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_SHFT                                0
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_RING_SIZE_BMSK             0x0fffff00
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_RING_SIZE_SHFT                    0x8

#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK    0x000000ff
#define HWIO_TCL_R0_SW2TCL3_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT           0x0

//// Register TCL_R0_SW2TCL3_RING_ID ////

#define HWIO_TCL_R0_SW2TCL3_RING_ID_ADDR(x)                          (x+0x0000073c)
#define HWIO_TCL_R0_SW2TCL3_RING_ID_PHYS(x)                          (x+0x0000073c)
#define HWIO_TCL_R0_SW2TCL3_RING_ID_RMSK                             0x000000ff
#define HWIO_TCL_R0_SW2TCL3_RING_ID_SHFT                                      0
#define HWIO_TCL_R0_SW2TCL3_RING_ID_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_ID_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_ID_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_ID_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_ID_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_ID_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_ID_ENTRY_SIZE_BMSK                  0x000000ff
#define HWIO_TCL_R0_SW2TCL3_RING_ID_ENTRY_SIZE_SHFT                         0x0

//// Register TCL_R0_SW2TCL3_RING_STATUS ////

#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_ADDR(x)                      (x+0x00000740)
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_PHYS(x)                      (x+0x00000740)
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_RMSK                         0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_SHFT                                  0
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_NUM_AVAIL_WORDS_BMSK         0xffff0000
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_NUM_AVAIL_WORDS_SHFT               0x10

#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_NUM_VALID_WORDS_BMSK         0x0000ffff
#define HWIO_TCL_R0_SW2TCL3_RING_STATUS_NUM_VALID_WORDS_SHFT                0x0

//// Register TCL_R0_SW2TCL3_RING_MISC ////

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_ADDR(x)                        (x+0x00000744)
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_PHYS(x)                        (x+0x00000744)
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_RMSK                           0x003fffff
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SHFT                                    0
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MISC_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_MISC_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SPARE_CONTROL_BMSK             0x003fc000
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SPARE_CONTROL_SHFT                    0xe

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_SM_STATE2_BMSK            0x00003000
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_SM_STATE2_SHFT                   0xc

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_SM_STATE1_BMSK            0x00000f00
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_SM_STATE1_SHFT                   0x8

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_IS_IDLE_BMSK              0x00000080
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_IS_IDLE_SHFT                     0x7

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_ENABLE_BMSK               0x00000040
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SRNG_ENABLE_SHFT                      0x6

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_DATA_TLV_SWAP_BIT_BMSK         0x00000020
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_DATA_TLV_SWAP_BIT_SHFT                0x5

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_HOST_FW_SWAP_BIT_BMSK          0x00000010
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_HOST_FW_SWAP_BIT_SHFT                 0x4

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_MSI_SWAP_BIT_BMSK              0x00000008
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_MSI_SWAP_BIT_SHFT                     0x3

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SECURITY_BIT_BMSK              0x00000004
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_SECURITY_BIT_SHFT                     0x2

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_LOOPCNT_DISABLE_BMSK           0x00000002
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_LOOPCNT_DISABLE_SHFT                  0x1

#define HWIO_TCL_R0_SW2TCL3_RING_MISC_RING_ID_DISABLE_BMSK           0x00000001
#define HWIO_TCL_R0_SW2TCL3_RING_MISC_RING_ID_DISABLE_SHFT                  0x0

//// Register TCL_R0_SW2TCL3_RING_TP_ADDR_LSB ////

#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_ADDR(x)                 (x+0x00000750)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_PHYS(x)                 (x+0x00000750)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_RMSK                    0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_TP_ADDR_MSB ////

#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_ADDR(x)                 (x+0x00000754)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_PHYS(x)                 (x+0x00000754)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_RMSK                    0x000000ff
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_SW2TCL3_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0 ////

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_ADDR(x)      (x+0x00000764)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_PHYS(x)      (x+0x00000764)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_RMSK         0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_SHFT                  0
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1 ////

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_ADDR(x)      (x+0x00000768)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_PHYS(x)      (x+0x00000768)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_RMSK         0x0000ffff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_SHFT                  0
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS ////

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_ADDR(x)         (x+0x0000076c)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_PHYS(x)         (x+0x0000076c)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_RMSK            0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_SHFT                     0
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER ////

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_ADDR(x)      (x+0x00000770)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_PHYS(x)      (x+0x00000770)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_RMSK         0x000003ff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_SHFT                  0
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER ////

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_ADDR(x)     (x+0x00000774)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_PHYS(x)     (x+0x00000774)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_RMSK        0x00000007
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_SHFT                 0
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_IN(x)       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_MODE_BMSK   0x00000007
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_TIMER_MODE_SHFT          0x0

//// Register TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS ////

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_ADDR(x)    (x+0x00000778)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_PHYS(x)    (x+0x00000778)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_RMSK       0x0fffffff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_SHFT                0
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_IN(x)      \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_BMSK 0x0ff00000
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_SHFT       0x14

#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_BMSK 0x000fffff
#define HWIO_TCL_R0_SW2TCL3_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_SHFT        0x0

//// Register TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR(x)               (x+0x0000077c)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_PHYS(x)               (x+0x0000077c)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_RMSK                  0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_SHFT                           0
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR_BMSK             0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_LSB_ADDR_SHFT                    0x0

//// Register TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR(x)               (x+0x00000780)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_PHYS(x)               (x+0x00000780)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_RMSK                  0x000001ff
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_SHFT                           0
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK      0x00000100
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT             0x8

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR_BMSK             0x000000ff
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_BASE_MSB_ADDR_SHFT                    0x0

//// Register TCL_R0_SW2TCL3_RING_MSI1_DATA ////

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_ADDR(x)                   (x+0x00000784)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_PHYS(x)                   (x+0x00000784)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_RMSK                      0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_SHFT                               0
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_VALUE_BMSK                0xffffffff
#define HWIO_TCL_R0_SW2TCL3_RING_MSI1_DATA_VALUE_SHFT                       0x0

//// Register TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_ADDR(x)             (x+0x00000788)
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_PHYS(x)             (x+0x00000788)
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_RMSK                0x0000ffff
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_SHFT                         0
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL3_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_ADDR(x)                 (x+0x0000078c)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_PHYS(x)                 (x+0x0000078c)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_RMSK                    0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_ADDR(x)                 (x+0x00000790)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_PHYS(x)                 (x+0x00000790)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_RMSK                    0x0fffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_SHFT                             0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_RING_SIZE_BMSK          0x0fffff00
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_RING_SIZE_SHFT                 0x8

#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_ID ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ADDR(x)                       (x+0x00000794)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_PHYS(x)                       (x+0x00000794)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_RMSK                          0x000000ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_SHFT                                   0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_IN(x)                         \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_ID_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_INM(x, mask)                  \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_OUT(x, val)                   \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_OUTM(x, mask, val)            \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ENTRY_SIZE_BMSK               0x000000ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_ID_ENTRY_SIZE_SHFT                      0x0

//// Register TCL_R0_SW2TCL_CMD_RING_STATUS ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_ADDR(x)                   (x+0x00000798)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_PHYS(x)                   (x+0x00000798)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_RMSK                      0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_SHFT                               0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_NUM_AVAIL_WORDS_BMSK      0xffff0000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_NUM_AVAIL_WORDS_SHFT            0x10

#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_NUM_VALID_WORDS_BMSK      0x0000ffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_STATUS_NUM_VALID_WORDS_SHFT             0x0

//// Register TCL_R0_SW2TCL_CMD_RING_MISC ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_ADDR(x)                     (x+0x0000079c)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_PHYS(x)                     (x+0x0000079c)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_RMSK                        0x003fffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SHFT                                 0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SPARE_CONTROL_BMSK          0x003fc000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SPARE_CONTROL_SHFT                 0xe

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_SM_STATE2_BMSK         0x00003000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_SM_STATE2_SHFT                0xc

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_SM_STATE1_BMSK         0x00000f00
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_SM_STATE1_SHFT                0x8

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_IS_IDLE_BMSK           0x00000080
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_IS_IDLE_SHFT                  0x7

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_ENABLE_BMSK            0x00000040
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SRNG_ENABLE_SHFT                   0x6

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_DATA_TLV_SWAP_BIT_BMSK      0x00000020
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_DATA_TLV_SWAP_BIT_SHFT             0x5

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_HOST_FW_SWAP_BIT_BMSK       0x00000010
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_HOST_FW_SWAP_BIT_SHFT              0x4

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_MSI_SWAP_BIT_BMSK           0x00000008
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_MSI_SWAP_BIT_SHFT                  0x3

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SECURITY_BIT_BMSK           0x00000004
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_SECURITY_BIT_SHFT                  0x2

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_LOOPCNT_DISABLE_BMSK        0x00000002
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_LOOPCNT_DISABLE_SHFT               0x1

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_RING_ID_DISABLE_BMSK        0x00000001
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MISC_RING_ID_DISABLE_SHFT               0x0

//// Register TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_ADDR(x)              (x+0x000007a8)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_PHYS(x)              (x+0x000007a8)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_RMSK                 0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_SHFT                          0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_IN(x)                \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_INM(x, mask)         \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_OUT(x, val)          \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_OUTM(x, mask, val)   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_ADDR(x)              (x+0x000007ac)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_PHYS(x)              (x+0x000007ac)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_RMSK                 0x000000ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_SHFT                          0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_IN(x)                \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_INM(x, mask)         \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_OUT(x, val)          \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_OUTM(x, mask, val)   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0 ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_ADDR(x)   (x+0x000007bc)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_PHYS(x)   (x+0x000007bc)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_RMSK      0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_SHFT               0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_IN(x)     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1 ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_ADDR(x)   (x+0x000007c0)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_PHYS(x)   (x+0x000007c0)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_RMSK      0x0000ffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_SHFT               0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_IN(x)     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_ADDR(x)      (x+0x000007c4)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_PHYS(x)      (x+0x000007c4)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_RMSK         0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_SHFT                  0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_ADDR(x)   (x+0x000007c8)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_PHYS(x)   (x+0x000007c8)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_RMSK      0x000003ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_SHFT               0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_IN(x)     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_ADDR(x)  (x+0x000007cc)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_PHYS(x)  (x+0x000007cc)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_RMSK     0x00000007
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_SHFT              0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_IN(x)    \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_MODE_BMSK 0x00000007
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_TIMER_MODE_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_ADDR(x) (x+0x000007d0)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_PHYS(x) (x+0x000007d0)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_RMSK    0x0fffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_SHFT             0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_IN(x)   \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_BMSK 0x0ff00000
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_SHFT       0x14

#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_BMSK 0x000fffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_SHFT        0x0

//// Register TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR(x)            (x+0x000007d4)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_PHYS(x)            (x+0x000007d4)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_RMSK               0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_SHFT                        0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_IN(x)              \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_INM(x, mask)       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_OUT(x, val)        \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR_BMSK          0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_LSB_ADDR_SHFT                 0x0

//// Register TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR(x)            (x+0x000007d8)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_PHYS(x)            (x+0x000007d8)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_RMSK               0x000001ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_SHFT                        0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_IN(x)              \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_INM(x, mask)       \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_OUT(x, val)        \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK   0x00000100
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT          0x8

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR_BMSK          0x000000ff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_BASE_MSB_ADDR_SHFT                 0x0

//// Register TCL_R0_SW2TCL_CMD_RING_MSI1_DATA ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_ADDR(x)                (x+0x000007dc)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_PHYS(x)                (x+0x000007dc)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_RMSK                   0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_SHFT                            0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_IN(x)                  \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_INM(x, mask)           \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_OUT(x, val)            \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_OUTM(x, mask, val)     \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_VALUE_BMSK             0xffffffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_MSI1_DATA_VALUE_SHFT                    0x0

//// Register TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_ADDR(x)          (x+0x000007e0)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_PHYS(x)          (x+0x000007e0)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_RMSK             0x0000ffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_SHFT                      0
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_IN(x)            \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_INM(x, mask)     \
	in_dword_masked ( HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_OUT(x, val)      \
	out_dword( HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_SW2TCL_CMD_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_BASE_LSB ////

#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_ADDR(x)                    (x+0x000007e4)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_PHYS(x)                    (x+0x000007e4)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_RMSK                       0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_SHFT                                0
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK    0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT           0x0

//// Register TCL_R0_FW2TCL1_RING_BASE_MSB ////

#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_ADDR(x)                    (x+0x000007e8)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_PHYS(x)                    (x+0x000007e8)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_RMSK                       0x00ffffff
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_SHFT                                0
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_RING_SIZE_BMSK             0x00ffff00
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_RING_SIZE_SHFT                    0x8

#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK    0x000000ff
#define HWIO_TCL_R0_FW2TCL1_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT           0x0

//// Register TCL_R0_FW2TCL1_RING_ID ////

#define HWIO_TCL_R0_FW2TCL1_RING_ID_ADDR(x)                          (x+0x000007ec)
#define HWIO_TCL_R0_FW2TCL1_RING_ID_PHYS(x)                          (x+0x000007ec)
#define HWIO_TCL_R0_FW2TCL1_RING_ID_RMSK                             0x000000ff
#define HWIO_TCL_R0_FW2TCL1_RING_ID_SHFT                                      0
#define HWIO_TCL_R0_FW2TCL1_RING_ID_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_ID_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_ID_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_ID_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_ID_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_ID_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_ID_ENTRY_SIZE_BMSK                  0x000000ff
#define HWIO_TCL_R0_FW2TCL1_RING_ID_ENTRY_SIZE_SHFT                         0x0

//// Register TCL_R0_FW2TCL1_RING_STATUS ////

#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_ADDR(x)                      (x+0x000007f0)
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_PHYS(x)                      (x+0x000007f0)
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_RMSK                         0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_SHFT                                  0
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_STATUS_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_STATUS_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_NUM_AVAIL_WORDS_BMSK         0xffff0000
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_NUM_AVAIL_WORDS_SHFT               0x10

#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_NUM_VALID_WORDS_BMSK         0x0000ffff
#define HWIO_TCL_R0_FW2TCL1_RING_STATUS_NUM_VALID_WORDS_SHFT                0x0

//// Register TCL_R0_FW2TCL1_RING_MISC ////

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_ADDR(x)                        (x+0x000007f4)
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_PHYS(x)                        (x+0x000007f4)
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_RMSK                           0x003fffff
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SHFT                                    0
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MISC_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_MISC_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SPARE_CONTROL_BMSK             0x003fc000
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SPARE_CONTROL_SHFT                    0xe

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_SM_STATE2_BMSK            0x00003000
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_SM_STATE2_SHFT                   0xc

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_SM_STATE1_BMSK            0x00000f00
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_SM_STATE1_SHFT                   0x8

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_IS_IDLE_BMSK              0x00000080
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_IS_IDLE_SHFT                     0x7

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_ENABLE_BMSK               0x00000040
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SRNG_ENABLE_SHFT                      0x6

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_DATA_TLV_SWAP_BIT_BMSK         0x00000020
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_DATA_TLV_SWAP_BIT_SHFT                0x5

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_HOST_FW_SWAP_BIT_BMSK          0x00000010
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_HOST_FW_SWAP_BIT_SHFT                 0x4

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_MSI_SWAP_BIT_BMSK              0x00000008
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_MSI_SWAP_BIT_SHFT                     0x3

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SECURITY_BIT_BMSK              0x00000004
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_SECURITY_BIT_SHFT                     0x2

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_LOOPCNT_DISABLE_BMSK           0x00000002
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_LOOPCNT_DISABLE_SHFT                  0x1

#define HWIO_TCL_R0_FW2TCL1_RING_MISC_RING_ID_DISABLE_BMSK           0x00000001
#define HWIO_TCL_R0_FW2TCL1_RING_MISC_RING_ID_DISABLE_SHFT                  0x0

//// Register TCL_R0_FW2TCL1_RING_TP_ADDR_LSB ////

#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_ADDR(x)                 (x+0x00000800)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_PHYS(x)                 (x+0x00000800)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_RMSK                    0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_SHFT                             0
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_LSB_TAIL_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_TP_ADDR_MSB ////

#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_ADDR(x)                 (x+0x00000804)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_PHYS(x)                 (x+0x00000804)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_RMSK                    0x000000ff
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_SHFT                             0
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_FW2TCL1_RING_TP_ADDR_MSB_TAIL_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0 ////

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x)      (x+0x00000814)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_PHYS(x)      (x+0x00000814)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_RMSK         0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_SHFT                  0
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX0_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1 ////

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x)      (x+0x00000818)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_PHYS(x)      (x+0x00000818)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_RMSK         0x0000ffff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_SHFT                  0
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_BMSK 0x0000ffff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_SETUP_IX1_LOW_THRESHOLD_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS ////

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x)         (x+0x0000081c)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_PHYS(x)         (x+0x0000081c)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_RMSK            0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_SHFT                     0
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_CURRENT_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER ////

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x)      (x+0x00000820)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_PHYS(x)      (x+0x00000820)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RMSK         0x000003ff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_SHFT                  0
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_EMPTY_COUNTER_RING_EMPTY_COUNTER_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER ////

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x)     (x+0x00000824)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_PHYS(x)     (x+0x00000824)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_RMSK        0x00000007
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_SHFT                 0
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_IN(x)       \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_MODE_BMSK   0x00000007
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_TIMER_MODE_SHFT          0x0

//// Register TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS ////

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x)    (x+0x00000828)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_PHYS(x)    (x+0x00000828)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_RMSK       0x00ffffff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_SHFT                0
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_IN(x)      \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_BMSK 0x00ff0000
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_PREFETCH_COUNT_SHFT       0x10

#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_BMSK 0x0000ffff
#define HWIO_TCL_R0_FW2TCL1_RING_CONSUMER_PREFETCH_STATUS_INTERNAL_TAIL_PTR_SHFT        0x0

//// Register TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR(x)               (x+0x0000082c)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_PHYS(x)               (x+0x0000082c)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_RMSK                  0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_SHFT                           0
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR_BMSK             0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_LSB_ADDR_SHFT                    0x0

//// Register TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR(x)               (x+0x00000830)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_PHYS(x)               (x+0x00000830)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_RMSK                  0x000001ff
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_SHFT                           0
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK      0x00000100
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT             0x8

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR_BMSK             0x000000ff
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_BASE_MSB_ADDR_SHFT                    0x0

//// Register TCL_R0_FW2TCL1_RING_MSI1_DATA ////

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_ADDR(x)                   (x+0x00000834)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_PHYS(x)                   (x+0x00000834)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_RMSK                      0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_SHFT                               0
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_VALUE_BMSK                0xffffffff
#define HWIO_TCL_R0_FW2TCL1_RING_MSI1_DATA_VALUE_SHFT                       0x0

//// Register TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x)             (x+0x00000838)
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_PHYS(x)             (x+0x00000838)
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_RMSK                0x0000ffff
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_SHFT                         0
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_FW2TCL1_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_TCL2TQM_RING_BASE_LSB ////

#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_ADDR(x)                    (x+0x0000083c)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_PHYS(x)                    (x+0x0000083c)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_RMSK                       0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_SHFT                                0
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK    0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT           0x0

//// Register TCL_R0_TCL2TQM_RING_BASE_MSB ////

#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_ADDR(x)                    (x+0x00000840)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_PHYS(x)                    (x+0x00000840)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_RMSK                       0x00ffffff
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_SHFT                                0
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_RING_SIZE_BMSK             0x00ffff00
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_RING_SIZE_SHFT                    0x8

#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK    0x000000ff
#define HWIO_TCL_R0_TCL2TQM_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT           0x0

//// Register TCL_R0_TCL2TQM_RING_ID ////

#define HWIO_TCL_R0_TCL2TQM_RING_ID_ADDR(x)                          (x+0x00000844)
#define HWIO_TCL_R0_TCL2TQM_RING_ID_PHYS(x)                          (x+0x00000844)
#define HWIO_TCL_R0_TCL2TQM_RING_ID_RMSK                             0x0000ffff
#define HWIO_TCL_R0_TCL2TQM_RING_ID_SHFT                                      0
#define HWIO_TCL_R0_TCL2TQM_RING_ID_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_ID_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_ID_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_ID_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_ID_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_ID_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_ID_RING_ID_BMSK                     0x0000ff00
#define HWIO_TCL_R0_TCL2TQM_RING_ID_RING_ID_SHFT                            0x8

#define HWIO_TCL_R0_TCL2TQM_RING_ID_ENTRY_SIZE_BMSK                  0x000000ff
#define HWIO_TCL_R0_TCL2TQM_RING_ID_ENTRY_SIZE_SHFT                         0x0

//// Register TCL_R0_TCL2TQM_RING_STATUS ////

#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_ADDR(x)                      (x+0x00000848)
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_PHYS(x)                      (x+0x00000848)
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_RMSK                         0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_SHFT                                  0
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_STATUS_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_STATUS_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_NUM_AVAIL_WORDS_BMSK         0xffff0000
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_NUM_AVAIL_WORDS_SHFT               0x10

#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_NUM_VALID_WORDS_BMSK         0x0000ffff
#define HWIO_TCL_R0_TCL2TQM_RING_STATUS_NUM_VALID_WORDS_SHFT                0x0

//// Register TCL_R0_TCL2TQM_RING_MISC ////

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_ADDR(x)                        (x+0x0000084c)
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_PHYS(x)                        (x+0x0000084c)
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_RMSK                           0x03ffffff
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SHFT                                    0
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_MISC_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_MISC_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_LOOP_CNT_BMSK                  0x03c00000
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_LOOP_CNT_SHFT                        0x16

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SPARE_CONTROL_BMSK             0x003fc000
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SPARE_CONTROL_SHFT                    0xe

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_SM_STATE2_BMSK            0x00003000
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_SM_STATE2_SHFT                   0xc

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_SM_STATE1_BMSK            0x00000f00
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_SM_STATE1_SHFT                   0x8

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_IS_IDLE_BMSK              0x00000080
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_IS_IDLE_SHFT                     0x7

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_ENABLE_BMSK               0x00000040
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SRNG_ENABLE_SHFT                      0x6

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_DATA_TLV_SWAP_BIT_BMSK         0x00000020
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_DATA_TLV_SWAP_BIT_SHFT                0x5

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_HOST_FW_SWAP_BIT_BMSK          0x00000010
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_HOST_FW_SWAP_BIT_SHFT                 0x4

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_MSI_SWAP_BIT_BMSK              0x00000008
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_MSI_SWAP_BIT_SHFT                     0x3

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SECURITY_BIT_BMSK              0x00000004
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_SECURITY_BIT_SHFT                     0x2

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_LOOPCNT_DISABLE_BMSK           0x00000002
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_LOOPCNT_DISABLE_SHFT                  0x1

#define HWIO_TCL_R0_TCL2TQM_RING_MISC_RING_ID_DISABLE_BMSK           0x00000001
#define HWIO_TCL_R0_TCL2TQM_RING_MISC_RING_ID_DISABLE_SHFT                  0x0

//// Register TCL_R0_TCL2TQM_RING_HP_ADDR_LSB ////

#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_ADDR(x)                 (x+0x00000850)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_PHYS(x)                 (x+0x00000850)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_RMSK                    0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_SHFT                             0
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_TCL2TQM_RING_HP_ADDR_MSB ////

#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_ADDR(x)                 (x+0x00000854)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_PHYS(x)                 (x+0x00000854)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_RMSK                    0x000000ff
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_SHFT                             0
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_OUT(x, val)             \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_TCL2TQM_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP ////

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_ADDR(x)          (x+0x00000860)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_PHYS(x)          (x+0x00000860)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_RMSK             0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_SHFT                      0
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_IN(x)            \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_INM(x, mask)     \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_OUT(x, val)      \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS ////

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_ADDR(x)         (x+0x00000864)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_PHYS(x)         (x+0x00000864)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_RMSK            0xffffffff
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_SHFT                     0
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER ////

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_ADDR(x)       (x+0x00000868)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_PHYS(x)       (x+0x00000868)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_RMSK          0x000003ff
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_SHFT                   0
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_IN(x)         \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_INM(x, mask)  \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_OUT(x, val)   \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_TCL2TQM_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_SHFT        0x0

//// Register TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_ADDR(x)             (x+0x00000890)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_PHYS(x)             (x+0x00000890)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_RMSK                0x0000ffff
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_SHFT                         0
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_TCL2TQM_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_BASE_LSB ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_ADDR(x)                (x+0x00000894)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_PHYS(x)                (x+0x00000894)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_RMSK                   0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_SHFT                            0
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_IN(x)                  \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_INM(x, mask)           \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_OUT(x, val)            \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_OUTM(x, mask, val)     \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_BASE_MSB ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_ADDR(x)                (x+0x00000898)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_PHYS(x)                (x+0x00000898)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_RMSK                   0x00ffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_SHFT                            0
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_IN(x)                  \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_INM(x, mask)           \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_OUT(x, val)            \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_OUTM(x, mask, val)     \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_RING_SIZE_BMSK         0x00ffff00
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_RING_SIZE_SHFT                0x8

#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_ID ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_ADDR(x)                      (x+0x0000089c)
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_PHYS(x)                      (x+0x0000089c)
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_RMSK                         0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_SHFT                                  0
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_ID_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_ID_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_RING_ID_BMSK                 0x0000ff00
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_RING_ID_SHFT                        0x8

#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_ENTRY_SIZE_BMSK              0x000000ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_ID_ENTRY_SIZE_SHFT                     0x0

//// Register TCL_R0_TCL_STATUS1_RING_STATUS ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_ADDR(x)                  (x+0x000008a0)
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_PHYS(x)                  (x+0x000008a0)
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_RMSK                     0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_SHFT                              0
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_NUM_AVAIL_WORDS_BMSK     0xffff0000
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_NUM_AVAIL_WORDS_SHFT           0x10

#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_NUM_VALID_WORDS_BMSK     0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_STATUS_NUM_VALID_WORDS_SHFT            0x0

//// Register TCL_R0_TCL_STATUS1_RING_MISC ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_ADDR(x)                    (x+0x000008a4)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_PHYS(x)                    (x+0x000008a4)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_RMSK                       0x03ffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SHFT                                0
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MISC_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_MISC_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_LOOP_CNT_BMSK              0x03c00000
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_LOOP_CNT_SHFT                    0x16

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SPARE_CONTROL_BMSK         0x003fc000
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SPARE_CONTROL_SHFT                0xe

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_SM_STATE2_BMSK        0x00003000
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_SM_STATE2_SHFT               0xc

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_SM_STATE1_BMSK        0x00000f00
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_SM_STATE1_SHFT               0x8

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_IS_IDLE_BMSK          0x00000080
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_IS_IDLE_SHFT                 0x7

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_ENABLE_BMSK           0x00000040
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SRNG_ENABLE_SHFT                  0x6

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_DATA_TLV_SWAP_BIT_BMSK     0x00000020
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_DATA_TLV_SWAP_BIT_SHFT            0x5

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_HOST_FW_SWAP_BIT_BMSK      0x00000010
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_HOST_FW_SWAP_BIT_SHFT             0x4

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_MSI_SWAP_BIT_BMSK          0x00000008
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_MSI_SWAP_BIT_SHFT                 0x3

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SECURITY_BIT_BMSK          0x00000004
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_SECURITY_BIT_SHFT                 0x2

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_LOOPCNT_DISABLE_BMSK       0x00000002
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_LOOPCNT_DISABLE_SHFT              0x1

#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_RING_ID_DISABLE_BMSK       0x00000001
#define HWIO_TCL_R0_TCL_STATUS1_RING_MISC_RING_ID_DISABLE_SHFT              0x0

//// Register TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_ADDR(x)             (x+0x000008a8)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_PHYS(x)             (x+0x000008a8)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_RMSK                0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_SHFT                         0
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_ADDR(x)             (x+0x000008ac)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_PHYS(x)             (x+0x000008ac)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_RMSK                0x000000ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_SHFT                         0
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_ADDR(x)      (x+0x000008b8)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_PHYS(x)      (x+0x000008b8)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_RMSK         0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_SHFT                  0
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_ADDR(x)     (x+0x000008bc)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_PHYS(x)     (x+0x000008bc)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_RMSK        0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_SHFT                 0
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_IN(x)       \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_ADDR(x)   (x+0x000008c0)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_PHYS(x)   (x+0x000008c0)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_RMSK      0x000003ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_SHFT               0
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_IN(x)     \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_SHFT        0x0

//// Register TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR(x)           (x+0x000008dc)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_PHYS(x)           (x+0x000008dc)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_RMSK              0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_SHFT                       0
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_IN(x)             \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_INM(x, mask)      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_OUT(x, val)       \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR_BMSK         0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_LSB_ADDR_SHFT                0x0

//// Register TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR(x)           (x+0x000008e0)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_PHYS(x)           (x+0x000008e0)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_RMSK              0x000001ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_SHFT                       0
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_IN(x)             \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_INM(x, mask)      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_OUT(x, val)       \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK  0x00000100
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT         0x8

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR_BMSK         0x000000ff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_BASE_MSB_ADDR_SHFT                0x0

//// Register TCL_R0_TCL_STATUS1_RING_MSI1_DATA ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_ADDR(x)               (x+0x000008e4)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_PHYS(x)               (x+0x000008e4)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_RMSK                  0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_SHFT                           0
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_VALUE_BMSK            0xffffffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_MSI1_DATA_VALUE_SHFT                   0x0

//// Register TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_ADDR(x)         (x+0x000008e8)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_PHYS(x)         (x+0x000008e8)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_RMSK            0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_SHFT                     0
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS1_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_BASE_LSB ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_ADDR(x)                (x+0x000008ec)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_PHYS(x)                (x+0x000008ec)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_RMSK                   0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_SHFT                            0
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_IN(x)                  \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_INM(x, mask)           \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_OUT(x, val)            \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_OUTM(x, mask, val)     \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_BASE_MSB ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_ADDR(x)                (x+0x000008f0)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_PHYS(x)                (x+0x000008f0)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_RMSK                   0x00ffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_SHFT                            0
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_IN(x)                  \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_INM(x, mask)           \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_OUT(x, val)            \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_OUTM(x, mask, val)     \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_RING_SIZE_BMSK         0x00ffff00
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_RING_SIZE_SHFT                0x8

#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_ID ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_ADDR(x)                      (x+0x000008f4)
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_PHYS(x)                      (x+0x000008f4)
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_RMSK                         0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_SHFT                                  0
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_ID_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_ID_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_RING_ID_BMSK                 0x0000ff00
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_RING_ID_SHFT                        0x8

#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_ENTRY_SIZE_BMSK              0x000000ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_ID_ENTRY_SIZE_SHFT                     0x0

//// Register TCL_R0_TCL_STATUS2_RING_STATUS ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_ADDR(x)                  (x+0x000008f8)
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_PHYS(x)                  (x+0x000008f8)
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_RMSK                     0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_SHFT                              0
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_NUM_AVAIL_WORDS_BMSK     0xffff0000
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_NUM_AVAIL_WORDS_SHFT           0x10

#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_NUM_VALID_WORDS_BMSK     0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_STATUS_NUM_VALID_WORDS_SHFT            0x0

//// Register TCL_R0_TCL_STATUS2_RING_MISC ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_ADDR(x)                    (x+0x000008fc)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_PHYS(x)                    (x+0x000008fc)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_RMSK                       0x03ffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SHFT                                0
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MISC_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_MISC_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_LOOP_CNT_BMSK              0x03c00000
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_LOOP_CNT_SHFT                    0x16

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SPARE_CONTROL_BMSK         0x003fc000
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SPARE_CONTROL_SHFT                0xe

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_SM_STATE2_BMSK        0x00003000
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_SM_STATE2_SHFT               0xc

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_SM_STATE1_BMSK        0x00000f00
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_SM_STATE1_SHFT               0x8

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_IS_IDLE_BMSK          0x00000080
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_IS_IDLE_SHFT                 0x7

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_ENABLE_BMSK           0x00000040
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SRNG_ENABLE_SHFT                  0x6

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_DATA_TLV_SWAP_BIT_BMSK     0x00000020
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_DATA_TLV_SWAP_BIT_SHFT            0x5

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_HOST_FW_SWAP_BIT_BMSK      0x00000010
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_HOST_FW_SWAP_BIT_SHFT             0x4

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_MSI_SWAP_BIT_BMSK          0x00000008
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_MSI_SWAP_BIT_SHFT                 0x3

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SECURITY_BIT_BMSK          0x00000004
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_SECURITY_BIT_SHFT                 0x2

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_LOOPCNT_DISABLE_BMSK       0x00000002
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_LOOPCNT_DISABLE_SHFT              0x1

#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_RING_ID_DISABLE_BMSK       0x00000001
#define HWIO_TCL_R0_TCL_STATUS2_RING_MISC_RING_ID_DISABLE_SHFT              0x0

//// Register TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_ADDR(x)             (x+0x00000900)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_PHYS(x)             (x+0x00000900)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_RMSK                0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_SHFT                         0
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_ADDR(x)             (x+0x00000904)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_PHYS(x)             (x+0x00000904)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_RMSK                0x000000ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_SHFT                         0
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_IN(x)               \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_INM(x, mask)        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_OUT(x, val)         \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_OUTM(x, mask, val)  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_ADDR(x)      (x+0x00000910)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_PHYS(x)      (x+0x00000910)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_RMSK         0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_SHFT                  0
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_IN(x)        \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_OUT(x, val)  \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_ADDR(x)     (x+0x00000914)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_PHYS(x)     (x+0x00000914)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_RMSK        0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_SHFT                 0
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_IN(x)       \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_OUT(x, val) \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_ADDR(x)   (x+0x00000918)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_PHYS(x)   (x+0x00000918)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_RMSK      0x000003ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_SHFT               0
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_IN(x)     \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_INM(x, mask) \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_OUT(x, val) \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_SHFT        0x0

//// Register TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR(x)           (x+0x00000934)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_PHYS(x)           (x+0x00000934)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_RMSK              0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_SHFT                       0
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_IN(x)             \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_INM(x, mask)      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_OUT(x, val)       \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR_BMSK         0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_LSB_ADDR_SHFT                0x0

//// Register TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR(x)           (x+0x00000938)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_PHYS(x)           (x+0x00000938)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_RMSK              0x000001ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_SHFT                       0
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_IN(x)             \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_INM(x, mask)      \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_OUT(x, val)       \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_MSI1_ENABLE_BMSK  0x00000100
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_MSI1_ENABLE_SHFT         0x8

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR_BMSK         0x000000ff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_BASE_MSB_ADDR_SHFT                0x0

//// Register TCL_R0_TCL_STATUS2_RING_MSI1_DATA ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_ADDR(x)               (x+0x0000093c)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_PHYS(x)               (x+0x0000093c)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_RMSK                  0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_SHFT                           0
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_IN(x)                 \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_INM(x, mask)          \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_OUT(x, val)           \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_OUTM(x, mask, val)    \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_VALUE_BMSK            0xffffffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_MSI1_DATA_VALUE_SHFT                   0x0

//// Register TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_ADDR(x)         (x+0x00000940)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_PHYS(x)         (x+0x00000940)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_RMSK            0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_SHFT                     0
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_IN(x)           \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_OUT(x, val)     \
	out_dword( HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_TCL_STATUS2_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_TCL2FW_RING_BASE_LSB ////

#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_ADDR(x)                     (x+0x00000944)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_PHYS(x)                     (x+0x00000944)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_RMSK                        0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_SHFT                                 0
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_RING_BASE_ADDR_LSB_BMSK     0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_BASE_LSB_RING_BASE_ADDR_LSB_SHFT            0x0

//// Register TCL_R0_TCL2FW_RING_BASE_MSB ////

#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_ADDR(x)                     (x+0x00000948)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_PHYS(x)                     (x+0x00000948)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_RMSK                        0x00ffffff
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_SHFT                                 0
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_RING_SIZE_BMSK              0x00ffff00
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_RING_SIZE_SHFT                     0x8

#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_RING_BASE_ADDR_MSB_BMSK     0x000000ff
#define HWIO_TCL_R0_TCL2FW_RING_BASE_MSB_RING_BASE_ADDR_MSB_SHFT            0x0

//// Register TCL_R0_TCL2FW_RING_ID ////

#define HWIO_TCL_R0_TCL2FW_RING_ID_ADDR(x)                           (x+0x0000094c)
#define HWIO_TCL_R0_TCL2FW_RING_ID_PHYS(x)                           (x+0x0000094c)
#define HWIO_TCL_R0_TCL2FW_RING_ID_RMSK                              0x0000ffff
#define HWIO_TCL_R0_TCL2FW_RING_ID_SHFT                                       0
#define HWIO_TCL_R0_TCL2FW_RING_ID_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_ID_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_ID_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_ID_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_ID_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_ID_OUT(x, val)                       \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_ID_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_ID_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_ID_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_ID_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_ID_RING_ID_BMSK                      0x0000ff00
#define HWIO_TCL_R0_TCL2FW_RING_ID_RING_ID_SHFT                             0x8

#define HWIO_TCL_R0_TCL2FW_RING_ID_ENTRY_SIZE_BMSK                   0x000000ff
#define HWIO_TCL_R0_TCL2FW_RING_ID_ENTRY_SIZE_SHFT                          0x0

//// Register TCL_R0_TCL2FW_RING_STATUS ////

#define HWIO_TCL_R0_TCL2FW_RING_STATUS_ADDR(x)                       (x+0x00000950)
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_PHYS(x)                       (x+0x00000950)
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_RMSK                          0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_SHFT                                   0
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_IN(x)                         \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_STATUS_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_STATUS_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_INM(x, mask)                  \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_OUT(x, val)                   \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_OUTM(x, mask, val)            \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_STATUS_NUM_AVAIL_WORDS_BMSK          0xffff0000
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_NUM_AVAIL_WORDS_SHFT                0x10

#define HWIO_TCL_R0_TCL2FW_RING_STATUS_NUM_VALID_WORDS_BMSK          0x0000ffff
#define HWIO_TCL_R0_TCL2FW_RING_STATUS_NUM_VALID_WORDS_SHFT                 0x0

//// Register TCL_R0_TCL2FW_RING_MISC ////

#define HWIO_TCL_R0_TCL2FW_RING_MISC_ADDR(x)                         (x+0x00000954)
#define HWIO_TCL_R0_TCL2FW_RING_MISC_PHYS(x)                         (x+0x00000954)
#define HWIO_TCL_R0_TCL2FW_RING_MISC_RMSK                            0x03ffffff
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SHFT                                     0
#define HWIO_TCL_R0_TCL2FW_RING_MISC_IN(x)                           \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_MISC_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_MISC_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_MISC_INM(x, mask)                    \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_MISC_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_MISC_OUT(x, val)                     \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_MISC_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_MISC_OUTM(x, mask, val)              \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_MISC_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_MISC_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_MISC_LOOP_CNT_BMSK                   0x03c00000
#define HWIO_TCL_R0_TCL2FW_RING_MISC_LOOP_CNT_SHFT                         0x16

#define HWIO_TCL_R0_TCL2FW_RING_MISC_SPARE_CONTROL_BMSK              0x003fc000
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SPARE_CONTROL_SHFT                     0xe

#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_SM_STATE2_BMSK             0x00003000
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_SM_STATE2_SHFT                    0xc

#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_SM_STATE1_BMSK             0x00000f00
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_SM_STATE1_SHFT                    0x8

#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_IS_IDLE_BMSK               0x00000080
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_IS_IDLE_SHFT                      0x7

#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_ENABLE_BMSK                0x00000040
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SRNG_ENABLE_SHFT                       0x6

#define HWIO_TCL_R0_TCL2FW_RING_MISC_DATA_TLV_SWAP_BIT_BMSK          0x00000020
#define HWIO_TCL_R0_TCL2FW_RING_MISC_DATA_TLV_SWAP_BIT_SHFT                 0x5

#define HWIO_TCL_R0_TCL2FW_RING_MISC_HOST_FW_SWAP_BIT_BMSK           0x00000010
#define HWIO_TCL_R0_TCL2FW_RING_MISC_HOST_FW_SWAP_BIT_SHFT                  0x4

#define HWIO_TCL_R0_TCL2FW_RING_MISC_MSI_SWAP_BIT_BMSK               0x00000008
#define HWIO_TCL_R0_TCL2FW_RING_MISC_MSI_SWAP_BIT_SHFT                      0x3

#define HWIO_TCL_R0_TCL2FW_RING_MISC_SECURITY_BIT_BMSK               0x00000004
#define HWIO_TCL_R0_TCL2FW_RING_MISC_SECURITY_BIT_SHFT                      0x2

#define HWIO_TCL_R0_TCL2FW_RING_MISC_LOOPCNT_DISABLE_BMSK            0x00000002
#define HWIO_TCL_R0_TCL2FW_RING_MISC_LOOPCNT_DISABLE_SHFT                   0x1

#define HWIO_TCL_R0_TCL2FW_RING_MISC_RING_ID_DISABLE_BMSK            0x00000001
#define HWIO_TCL_R0_TCL2FW_RING_MISC_RING_ID_DISABLE_SHFT                   0x0

//// Register TCL_R0_TCL2FW_RING_HP_ADDR_LSB ////

#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_ADDR(x)                  (x+0x00000958)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_PHYS(x)                  (x+0x00000958)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_RMSK                     0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_SHFT                              0
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_BMSK 0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_LSB_HEAD_PTR_MEMADDR_LSB_SHFT        0x0

//// Register TCL_R0_TCL2FW_RING_HP_ADDR_MSB ////

#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_ADDR(x)                  (x+0x0000095c)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_PHYS(x)                  (x+0x0000095c)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_RMSK                     0x000000ff
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_SHFT                              0
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_BMSK 0x000000ff
#define HWIO_TCL_R0_TCL2FW_RING_HP_ADDR_MSB_HEAD_PTR_MEMADDR_MSB_SHFT        0x0

//// Register TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP ////

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_ADDR(x)           (x+0x00000968)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_PHYS(x)           (x+0x00000968)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_RMSK              0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_SHFT                       0
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_IN(x)             \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_INM(x, mask)      \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_OUT(x, val)       \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_INTERRUPT_TIMER_THRESHOLD_SHFT       0x10

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_SW_INTERRUPT_MODE_SHFT        0xf

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_SETUP_BATCH_COUNTER_THRESHOLD_SHFT        0x0

//// Register TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS ////

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_ADDR(x)          (x+0x0000096c)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_PHYS(x)          (x+0x0000096c)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_RMSK             0xffffffff
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_SHFT                      0
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_IN(x)            \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_INM(x, mask)     \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_OUT(x, val)      \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_BMSK 0xffff0000
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_CURRENT_INTERRUPT_TIMER_VALUE_SHFT       0x10

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_BMSK 0x00008000
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_CURRENT_SW_INT_WIRE_VALUE_SHFT        0xf

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_BMSK 0x00007fff
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_INT_STATUS_INTERNAL_BATCH_COUNTER_VALUE_SHFT        0x0

//// Register TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER ////

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_ADDR(x)        (x+0x00000970)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_PHYS(x)        (x+0x00000970)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_RMSK           0x000003ff
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_SHFT                    0
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_IN(x)          \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_INM(x, mask)   \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_OUT(x, val)    \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_BMSK 0x000003ff
#define HWIO_TCL_R0_TCL2FW_RING_PRODUCER_FULL_COUNTER_RING_FULL_COUNTER_SHFT        0x0

//// Register TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET ////

#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_ADDR(x)              (x+0x00000998)
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_PHYS(x)              (x+0x00000998)
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_RMSK                 0x0000ffff
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_SHFT                          0
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_IN(x)                \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_ADDR(x), HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_RMSK)
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_INM(x, mask)         \
	in_dword_masked ( HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_ADDR(x), mask) 
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_OUT(x, val)          \
	out_dword( HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_ADDR(x), val)
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_OUTM(x, mask, val)   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_ADDR(x), mask, val, HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_BMSK 0x0000ffff
#define HWIO_TCL_R0_TCL2FW_RING_HP_TP_SW_OFFSET_HP_TP_OFFSET_VALUE_SHFT        0x0

//// Register TCL_R0_GXI_TESTBUS_LOWER ////

#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_ADDR(x)                        (x+0x0000099c)
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_PHYS(x)                        (x+0x0000099c)
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_RMSK                           0xffffffff
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_SHFT                                    0
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_GXI_TESTBUS_LOWER_ADDR(x), HWIO_TCL_R0_GXI_TESTBUS_LOWER_RMSK)
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_GXI_TESTBUS_LOWER_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_GXI_TESTBUS_LOWER_ADDR(x), val)
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_TESTBUS_LOWER_ADDR(x), mask, val, HWIO_TCL_R0_GXI_TESTBUS_LOWER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_VALUE_BMSK                     0xffffffff
#define HWIO_TCL_R0_GXI_TESTBUS_LOWER_VALUE_SHFT                            0x0

//// Register TCL_R0_GXI_TESTBUS_UPPER ////

#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_ADDR(x)                        (x+0x000009a0)
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_PHYS(x)                        (x+0x000009a0)
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_RMSK                           0x000000ff
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_SHFT                                    0
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_GXI_TESTBUS_UPPER_ADDR(x), HWIO_TCL_R0_GXI_TESTBUS_UPPER_RMSK)
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_GXI_TESTBUS_UPPER_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_GXI_TESTBUS_UPPER_ADDR(x), val)
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_TESTBUS_UPPER_ADDR(x), mask, val, HWIO_TCL_R0_GXI_TESTBUS_UPPER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_VALUE_BMSK                     0x000000ff
#define HWIO_TCL_R0_GXI_TESTBUS_UPPER_VALUE_SHFT                            0x0

//// Register TCL_R0_GXI_SM_STATES_IX_0 ////

#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_ADDR(x)                       (x+0x000009a4)
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_PHYS(x)                       (x+0x000009a4)
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_RMSK                          0x00000fff
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SHFT                                   0
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_IN(x)                         \
	in_dword_masked ( HWIO_TCL_R0_GXI_SM_STATES_IX_0_ADDR(x), HWIO_TCL_R0_GXI_SM_STATES_IX_0_RMSK)
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_INM(x, mask)                  \
	in_dword_masked ( HWIO_TCL_R0_GXI_SM_STATES_IX_0_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_OUT(x, val)                   \
	out_dword( HWIO_TCL_R0_GXI_SM_STATES_IX_0_ADDR(x), val)
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_OUTM(x, mask, val)            \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_SM_STATES_IX_0_ADDR(x), mask, val, HWIO_TCL_R0_GXI_SM_STATES_IX_0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SM_STATE_RD_ADDR_BMSK         0x00000e00
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SM_STATE_RD_ADDR_SHFT                0x9

#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SM_STATE_WR_ADDR_BMSK         0x000001f0
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SM_STATE_WR_ADDR_SHFT                0x4

#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SM_STATE_WR_DATA_BMSK         0x0000000f
#define HWIO_TCL_R0_GXI_SM_STATES_IX_0_SM_STATE_WR_DATA_SHFT                0x0

//// Register TCL_R0_GXI_END_OF_TEST_CHECK ////

#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_ADDR(x)                    (x+0x000009a8)
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_PHYS(x)                    (x+0x000009a8)
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_RMSK                       0x00000001
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_SHFT                                0
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_ADDR(x), HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_RMSK)
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_ADDR(x), val)
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_ADDR(x), mask, val, HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_END_OF_TEST_SELF_CHECK_BMSK 0x00000001
#define HWIO_TCL_R0_GXI_END_OF_TEST_CHECK_END_OF_TEST_SELF_CHECK_SHFT        0x0

//// Register TCL_R0_GXI_CLOCK_GATE_DISABLE ////

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_ADDR(x)                   (x+0x000009ac)
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_PHYS(x)                   (x+0x000009ac)
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RMSK                      0x80000fff
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_SHFT                               0
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_ADDR(x), HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RMSK)
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_ADDR(x), val)
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_ADDR(x), mask, val, HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_CLOCK_GATE_EXTEND_BMSK    0x80000000
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_CLOCK_GATE_EXTEND_SHFT          0x1f

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_SPARE_BMSK                0x00000800
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_SPARE_SHFT                       0xb

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WDOG_CTR_BMSK             0x00000400
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WDOG_CTR_SHFT                    0xa

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RD_FIFO_BMSK              0x00000200
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RD_FIFO_SHFT                     0x9

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_DATA_FIFO_BMSK         0x00000100
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_DATA_FIFO_SHFT                0x8

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_ADDR_FIFO_BMSK         0x00000080
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_ADDR_FIFO_SHFT                0x7

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RD_AXI_MAS_BMSK           0x00000040
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RD_AXI_MAS_SHFT                  0x6

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_DATA_AXI_MAS_BMSK      0x00000020
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_DATA_AXI_MAS_SHFT             0x5

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_ADDR_AXI_MAS_BMSK      0x00000010
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_ADDR_AXI_MAS_SHFT             0x4

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_DATA_CMD_BMSK          0x00000008
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_DATA_CMD_SHFT                 0x3

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_ADDR_CMD_BMSK          0x00000004
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_WR_ADDR_CMD_SHFT                 0x2

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RD_CMD_BMSK               0x00000002
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_RD_CMD_SHFT                      0x1

#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_CORE_BMSK                 0x00000001
#define HWIO_TCL_R0_GXI_CLOCK_GATE_DISABLE_CORE_SHFT                        0x0

//// Register TCL_R0_GXI_GXI_ERR_INTS ////

#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_ADDR(x)                         (x+0x000009b0)
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_PHYS(x)                         (x+0x000009b0)
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_RMSK                            0x01010101
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_SHFT                                     0
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_IN(x)                           \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_ERR_INTS_ADDR(x), HWIO_TCL_R0_GXI_GXI_ERR_INTS_RMSK)
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_INM(x, mask)                    \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_ERR_INTS_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_OUT(x, val)                     \
	out_dword( HWIO_TCL_R0_GXI_GXI_ERR_INTS_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_OUTM(x, mask, val)              \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_ERR_INTS_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_ERR_INTS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_WR_LAST_ERR_INT_BMSK        0x01000000
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_WR_LAST_ERR_INT_SHFT              0x18

#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_AXI_WR_ERR_INT_BMSK         0x00010000
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_AXI_WR_ERR_INT_SHFT               0x10

#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_AXI_RD_ERR_INT_BMSK         0x00000100
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_AXI_RD_ERR_INT_SHFT                0x8

#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_WDTIMEOUT_INT_BMSK          0x00000001
#define HWIO_TCL_R0_GXI_GXI_ERR_INTS_GXI_WDTIMEOUT_INT_SHFT                 0x0

//// Register TCL_R0_GXI_GXI_ERR_STATS ////

#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_ADDR(x)                        (x+0x000009b4)
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_PHYS(x)                        (x+0x000009b4)
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_RMSK                           0x003f3f3f
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_SHFT                                    0
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_ERR_STATS_ADDR(x), HWIO_TCL_R0_GXI_GXI_ERR_STATS_RMSK)
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_ERR_STATS_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_OUT(x, val)                    \
	out_dword( HWIO_TCL_R0_GXI_GXI_ERR_STATS_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_ERR_STATS_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_ERR_STATS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_AXI_WR_LAST_ERR_PORT_BMSK      0x003f0000
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_AXI_WR_LAST_ERR_PORT_SHFT            0x10

#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_AXI_WR_ERR_PORT_BMSK           0x00003f00
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_AXI_WR_ERR_PORT_SHFT                  0x8

#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_AXI_RD_ERR_PORT_BMSK           0x0000003f
#define HWIO_TCL_R0_GXI_GXI_ERR_STATS_AXI_RD_ERR_PORT_SHFT                  0x0

//// Register TCL_R0_GXI_GXI_DEFAULT_CONTROL ////

#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_ADDR(x)                  (x+0x000009b8)
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_PHYS(x)                  (x+0x000009b8)
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_RMSK                     0xffff3f3f
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_SHFT                              0
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_ADDR(x), HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_RMSK)
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_READ_DATA_BMSK 0xff000000
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_READ_DATA_SHFT       0x18

#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_WRITE_DATA_BMSK 0x00ff0000
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_WRITE_DATA_SHFT       0x10

#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_READS_BMSK 0x00003f00
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_READS_SHFT        0x8

#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_WRITES_BMSK 0x0000003f
#define HWIO_TCL_R0_GXI_GXI_DEFAULT_CONTROL_GXI_DEFAULT_MAX_PENDING_WRITES_SHFT        0x0

//// Register TCL_R0_GXI_GXI_REDUCED_CONTROL ////

#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_ADDR(x)                  (x+0x000009bc)
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_PHYS(x)                  (x+0x000009bc)
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_RMSK                     0xffff3f3f
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_SHFT                              0
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_ADDR(x), HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_RMSK)
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_READ_DATA_BMSK 0xff000000
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_READ_DATA_SHFT       0x18

#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_WRITE_DATA_BMSK 0x00ff0000
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_WRITE_DATA_SHFT       0x10

#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_READS_BMSK 0x00003f00
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_READS_SHFT        0x8

#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_WRITES_BMSK 0x0000003f
#define HWIO_TCL_R0_GXI_GXI_REDUCED_CONTROL_GXI_REDUCED_MAX_PENDING_WRITES_SHFT        0x0

//// Register TCL_R0_GXI_GXI_MISC_CONTROL ////

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_ADDR(x)                     (x+0x000009c0)
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_PHYS(x)                     (x+0x000009c0)
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_RMSK                        0x0fffffff
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_SHFT                                 0
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_ADDR(x), HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_RMSK)
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_DELAYED_RD_FLUSH_BMSK   0x08000000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_DELAYED_RD_FLUSH_SHFT         0x1b

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_DELAYED_WR_FLUSH_BMSK   0x04000000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_DELAYED_WR_FLUSH_SHFT         0x1a

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_DISABLE_WR_PREFIL_BMSK  0x02000000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_DISABLE_WR_PREFIL_SHFT        0x19

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_MAX_WR_BOUNDARY_SPLIT_BMSK 0x01000000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_MAX_WR_BOUNDARY_SPLIT_SHFT       0x18

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_MAX_RD_BOUNDARY_SPLIT_BMSK 0x00800000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_MAX_RD_BOUNDARY_SPLIT_SHFT       0x17

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_WRITE_BURST_SIZE_BMSK   0x00700000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_WRITE_BURST_SIZE_SHFT         0x14

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_READ_BURST_SIZE_BMSK    0x000e0000
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_READ_BURST_SIZE_SHFT          0x11

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_READ_ISSUE_THRESHOLD_BMSK 0x0001fe00
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_READ_ISSUE_THRESHOLD_SHFT        0x9

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_WRITE_PREFETCH_THRESHOLD_BMSK 0x000001fe
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_WRITE_PREFETCH_THRESHOLD_SHFT        0x1

#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_CLEAR_STATS_BMSK        0x00000001
#define HWIO_TCL_R0_GXI_GXI_MISC_CONTROL_GXI_CLEAR_STATS_SHFT               0x0

//// Register TCL_R0_GXI_GXI_WDOG_CONTROL ////

#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_ADDR(x)                     (x+0x000009c4)
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_PHYS(x)                     (x+0x000009c4)
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_RMSK                        0xffff0001
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_SHFT                                 0
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_IN(x)                       \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_ADDR(x), HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_RMSK)
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_INM(x, mask)                \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_OUT(x, val)                 \
	out_dword( HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_OUTM(x, mask, val)          \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_GXI_WDOG_LIMIT_BMSK         0xffff0000
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_GXI_WDOG_LIMIT_SHFT               0x10

#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_GXI_WDOG_DISABLE_BMSK       0x00000001
#define HWIO_TCL_R0_GXI_GXI_WDOG_CONTROL_GXI_WDOG_DISABLE_SHFT              0x0

//// Register TCL_R0_GXI_GXI_WDOG_STATUS ////

#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_ADDR(x)                      (x+0x000009c8)
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_PHYS(x)                      (x+0x000009c8)
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_RMSK                         0x0000ffff
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_SHFT                                  0
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_ADDR(x), HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_RMSK)
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_GXI_WDOG_STATUS_BMSK         0x0000ffff
#define HWIO_TCL_R0_GXI_GXI_WDOG_STATUS_GXI_WDOG_STATUS_SHFT                0x0

//// Register TCL_R0_GXI_GXI_IDLE_COUNTERS ////

#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_ADDR(x)                    (x+0x000009cc)
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_PHYS(x)                    (x+0x000009cc)
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_RMSK                       0xffffffff
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_SHFT                                0
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_ADDR(x), HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_RMSK)
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_GXI_READ_IDLE_CNT_BMSK     0xffff0000
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_GXI_READ_IDLE_CNT_SHFT           0x10

#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_GXI_WRITE_IDLE_CNT_BMSK    0x0000ffff
#define HWIO_TCL_R0_GXI_GXI_IDLE_COUNTERS_GXI_WRITE_IDLE_CNT_SHFT           0x0

//// Register TCL_R0_GXI_GXI_RD_LATENCY_CTRL ////

#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_ADDR(x)                  (x+0x000009d0)
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_PHYS(x)                  (x+0x000009d0)
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_RMSK                     0x000fffff
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_SHFT                              0
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_ADDR(x), HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_RMSK)
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_AXI_LATENCY_RANGE_BMSK   0x000e0000
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_AXI_LATENCY_RANGE_SHFT         0x11

#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_AXI_LATENCY_EN_BMSK      0x00010000
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_AXI_LATENCY_EN_SHFT            0x10

#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_AXI_LATENCY_MIN_BMSK     0x0000ffff
#define HWIO_TCL_R0_GXI_GXI_RD_LATENCY_CTRL_AXI_LATENCY_MIN_SHFT            0x0

//// Register TCL_R0_GXI_GXI_WR_LATENCY_CTRL ////

#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_ADDR(x)                  (x+0x000009d4)
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_PHYS(x)                  (x+0x000009d4)
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_RMSK                     0x000fffff
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_SHFT                              0
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_IN(x)                    \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_ADDR(x), HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_RMSK)
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_INM(x, mask)             \
	in_dword_masked ( HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_OUT(x, val)              \
	out_dword( HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_OUTM(x, mask, val)       \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_AXI_LATENCY_RANGE_BMSK   0x000e0000
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_AXI_LATENCY_RANGE_SHFT         0x11

#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_AXI_LATENCY_EN_BMSK      0x00010000
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_AXI_LATENCY_EN_SHFT            0x10

#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_AXI_LATENCY_MIN_BMSK     0x0000ffff
#define HWIO_TCL_R0_GXI_GXI_WR_LATENCY_CTRL_AXI_LATENCY_MIN_SHFT            0x0

//// Register TCL_R0_ASE_GST_BASE_ADDR_LOW ////

#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_ADDR(x)                    (x+0x000009d8)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_PHYS(x)                    (x+0x000009d8)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_RMSK                       0xffffffff
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_SHFT                                0
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_ADDR(x), HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_RMSK)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_OUT(x, val)                \
	out_dword( HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_ADDR(x), val)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_ADDR(x), mask, val, HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_VAL_BMSK                   0xffffffff
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_LOW_VAL_SHFT                          0x0

//// Register TCL_R0_ASE_GST_BASE_ADDR_HIGH ////

#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_ADDR(x)                   (x+0x000009dc)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_PHYS(x)                   (x+0x000009dc)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_RMSK                      0x000000ff
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_SHFT                               0
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_ADDR(x), HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_RMSK)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_ADDR(x), val)
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_ADDR(x), mask, val, HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_VAL_BMSK                  0x000000ff
#define HWIO_TCL_R0_ASE_GST_BASE_ADDR_HIGH_VAL_SHFT                         0x0

//// Register TCL_R0_ASE_GST_SIZE ////

#define HWIO_TCL_R0_ASE_GST_SIZE_ADDR(x)                             (x+0x000009e0)
#define HWIO_TCL_R0_ASE_GST_SIZE_PHYS(x)                             (x+0x000009e0)
#define HWIO_TCL_R0_ASE_GST_SIZE_RMSK                                0x000fffff
#define HWIO_TCL_R0_ASE_GST_SIZE_SHFT                                         0
#define HWIO_TCL_R0_ASE_GST_SIZE_IN(x)                               \
	in_dword_masked ( HWIO_TCL_R0_ASE_GST_SIZE_ADDR(x), HWIO_TCL_R0_ASE_GST_SIZE_RMSK)
#define HWIO_TCL_R0_ASE_GST_SIZE_INM(x, mask)                        \
	in_dword_masked ( HWIO_TCL_R0_ASE_GST_SIZE_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_GST_SIZE_OUT(x, val)                         \
	out_dword( HWIO_TCL_R0_ASE_GST_SIZE_ADDR(x), val)
#define HWIO_TCL_R0_ASE_GST_SIZE_OUTM(x, mask, val)                  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_GST_SIZE_ADDR(x), mask, val, HWIO_TCL_R0_ASE_GST_SIZE_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_GST_SIZE_VAL_BMSK                            0x000fffff
#define HWIO_TCL_R0_ASE_GST_SIZE_VAL_SHFT                                   0x0

//// Register TCL_R0_ASE_SEARCH_CTRL ////

#define HWIO_TCL_R0_ASE_SEARCH_CTRL_ADDR(x)                          (x+0x000009e4)
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_PHYS(x)                          (x+0x000009e4)
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_RMSK                             0xffff07ff
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_SHFT                                      0
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R0_ASE_SEARCH_CTRL_ADDR(x), HWIO_TCL_R0_ASE_SEARCH_CTRL_RMSK)
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R0_ASE_SEARCH_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_OUT(x, val)                      \
	out_dword( HWIO_TCL_R0_ASE_SEARCH_CTRL_ADDR(x), val)
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_SEARCH_CTRL_ADDR(x), mask, val, HWIO_TCL_R0_ASE_SEARCH_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_SEARCH_CTRL_TIMEOUT_THRESH_BMSK              0xffff0000
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_TIMEOUT_THRESH_SHFT                    0x10

#define HWIO_TCL_R0_ASE_SEARCH_CTRL_CACHE_FAILURES_ENABLE_BMSK       0x00000400
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_CACHE_FAILURES_ENABLE_SHFT              0xa

#define HWIO_TCL_R0_ASE_SEARCH_CTRL_CACHE_DISABLE_BMSK               0x00000200
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_CACHE_DISABLE_SHFT                      0x9

#define HWIO_TCL_R0_ASE_SEARCH_CTRL_SEARCH_SWAP_BMSK                 0x00000100
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_SEARCH_SWAP_SHFT                        0x8

#define HWIO_TCL_R0_ASE_SEARCH_CTRL_MAX_SEARCH_BMSK                  0x000000ff
#define HWIO_TCL_R0_ASE_SEARCH_CTRL_MAX_SEARCH_SHFT                         0x0

//// Register TCL_R0_ASE_WATCHDOG ////

#define HWIO_TCL_R0_ASE_WATCHDOG_ADDR(x)                             (x+0x000009e8)
#define HWIO_TCL_R0_ASE_WATCHDOG_PHYS(x)                             (x+0x000009e8)
#define HWIO_TCL_R0_ASE_WATCHDOG_RMSK                                0xffffffff
#define HWIO_TCL_R0_ASE_WATCHDOG_SHFT                                         0
#define HWIO_TCL_R0_ASE_WATCHDOG_IN(x)                               \
	in_dword_masked ( HWIO_TCL_R0_ASE_WATCHDOG_ADDR(x), HWIO_TCL_R0_ASE_WATCHDOG_RMSK)
#define HWIO_TCL_R0_ASE_WATCHDOG_INM(x, mask)                        \
	in_dword_masked ( HWIO_TCL_R0_ASE_WATCHDOG_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_WATCHDOG_OUT(x, val)                         \
	out_dword( HWIO_TCL_R0_ASE_WATCHDOG_ADDR(x), val)
#define HWIO_TCL_R0_ASE_WATCHDOG_OUTM(x, mask, val)                  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_WATCHDOG_ADDR(x), mask, val, HWIO_TCL_R0_ASE_WATCHDOG_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_WATCHDOG_STATUS_BMSK                         0xffff0000
#define HWIO_TCL_R0_ASE_WATCHDOG_STATUS_SHFT                               0x10

#define HWIO_TCL_R0_ASE_WATCHDOG_LIMIT_BMSK                          0x0000ffff
#define HWIO_TCL_R0_ASE_WATCHDOG_LIMIT_SHFT                                 0x0

//// Register TCL_R0_ASE_CLKGATE_DISABLE ////

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_ADDR(x)                      (x+0x000009ec)
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_PHYS(x)                      (x+0x000009ec)
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_RMSK                         0xfffff87f
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_SHFT                                  0
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R0_ASE_CLKGATE_DISABLE_ADDR(x), HWIO_TCL_R0_ASE_CLKGATE_DISABLE_RMSK)
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R0_ASE_CLKGATE_DISABLE_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_OUT(x, val)                  \
	out_dword( HWIO_TCL_R0_ASE_CLKGATE_DISABLE_ADDR(x), val)
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_CLKGATE_DISABLE_ADDR(x), mask, val, HWIO_TCL_R0_ASE_CLKGATE_DISABLE_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_CLK_EXTEND_BMSK              0x80000000
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_CLK_EXTEND_SHFT                    0x1f

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_CPU_IF_EXTEND_BMSK           0x40000000
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_CPU_IF_EXTEND_SHFT                 0x1e

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_GSE_RSRVD_BMSK               0x3ffff800
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_GSE_RSRVD_SHFT                      0xb

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_GSE_TOP_BMSK                 0x00000040
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_GSE_TOP_SHFT                        0x6

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_CACHE_BMSK                   0x00000020
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_CACHE_SHFT                          0x5

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_SLOTS_ARRAY_HASH_BMSK        0x00000010
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_SLOTS_ARRAY_HASH_SHFT               0x4

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_APP_RETURN_BMSK              0x00000008
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_APP_RETURN_SHFT                     0x3

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_MEM_RESP1_BMSK               0x00000004
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_MEM_RESP1_SHFT                      0x2

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_MEM_ISS1_BMSK                0x00000002
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_MEM_ISS1_SHFT                       0x1

#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_GSE_CTL_BMSK                 0x00000001
#define HWIO_TCL_R0_ASE_CLKGATE_DISABLE_GSE_CTL_SHFT                        0x0

//// Register TCL_R0_ASE_WRITE_BACK_PENDING ////

#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_ADDR(x)                   (x+0x000009f0)
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_PHYS(x)                   (x+0x000009f0)
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_RMSK                      0x00000001
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_SHFT                               0
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_IN(x)                     \
	in_dword_masked ( HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_ADDR(x), HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_RMSK)
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_INM(x, mask)              \
	in_dword_masked ( HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_ADDR(x), mask) 
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_OUT(x, val)               \
	out_dword( HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_ADDR(x), val)
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_OUTM(x, mask, val)        \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_ADDR(x), mask, val, HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_STATUS_BMSK               0x00000001
#define HWIO_TCL_R0_ASE_WRITE_BACK_PENDING_STATUS_SHFT                      0x0

//// Register TCL_R1_CACHE_FLUSH ////

#define HWIO_TCL_R1_CACHE_FLUSH_ADDR(x)                              (x+0x00001000)
#define HWIO_TCL_R1_CACHE_FLUSH_PHYS(x)                              (x+0x00001000)
#define HWIO_TCL_R1_CACHE_FLUSH_RMSK                                 0x00000003
#define HWIO_TCL_R1_CACHE_FLUSH_SHFT                                          0
#define HWIO_TCL_R1_CACHE_FLUSH_IN(x)                                \
	in_dword_masked ( HWIO_TCL_R1_CACHE_FLUSH_ADDR(x), HWIO_TCL_R1_CACHE_FLUSH_RMSK)
#define HWIO_TCL_R1_CACHE_FLUSH_INM(x, mask)                         \
	in_dword_masked ( HWIO_TCL_R1_CACHE_FLUSH_ADDR(x), mask) 
#define HWIO_TCL_R1_CACHE_FLUSH_OUT(x, val)                          \
	out_dword( HWIO_TCL_R1_CACHE_FLUSH_ADDR(x), val)
#define HWIO_TCL_R1_CACHE_FLUSH_OUTM(x, mask, val)                   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_CACHE_FLUSH_ADDR(x), mask, val, HWIO_TCL_R1_CACHE_FLUSH_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_CACHE_FLUSH_STATUS_BMSK                          0x00000002
#define HWIO_TCL_R1_CACHE_FLUSH_STATUS_SHFT                                 0x1

#define HWIO_TCL_R1_CACHE_FLUSH_ENABLE_BMSK                          0x00000001
#define HWIO_TCL_R1_CACHE_FLUSH_ENABLE_SHFT                                 0x0

//// Register TCL_R1_SM_STATES_IX_0 ////

#define HWIO_TCL_R1_SM_STATES_IX_0_ADDR(x)                           (x+0x00001004)
#define HWIO_TCL_R1_SM_STATES_IX_0_PHYS(x)                           (x+0x00001004)
#define HWIO_TCL_R1_SM_STATES_IX_0_RMSK                              0x07ffffff
#define HWIO_TCL_R1_SM_STATES_IX_0_SHFT                                       0
#define HWIO_TCL_R1_SM_STATES_IX_0_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_SM_STATES_IX_0_ADDR(x), HWIO_TCL_R1_SM_STATES_IX_0_RMSK)
#define HWIO_TCL_R1_SM_STATES_IX_0_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_SM_STATES_IX_0_ADDR(x), mask) 
#define HWIO_TCL_R1_SM_STATES_IX_0_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_SM_STATES_IX_0_ADDR(x), val)
#define HWIO_TCL_R1_SM_STATES_IX_0_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_SM_STATES_IX_0_ADDR(x), mask, val, HWIO_TCL_R1_SM_STATES_IX_0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_SM_STATES_IX_0_GSE_CTRL_BMSK                     0x07000000
#define HWIO_TCL_R1_SM_STATES_IX_0_GSE_CTRL_SHFT                           0x18

#define HWIO_TCL_R1_SM_STATES_IX_0_TLV_GEN_BMSK                      0x00e00000
#define HWIO_TCL_R1_SM_STATES_IX_0_TLV_GEN_SHFT                            0x15

#define HWIO_TCL_R1_SM_STATES_IX_0_EXTN_DESC_FETCH_BMSK              0x001c0000
#define HWIO_TCL_R1_SM_STATES_IX_0_EXTN_DESC_FETCH_SHFT                    0x12

#define HWIO_TCL_R1_SM_STATES_IX_0_MSDU_FETCH_BMSK                   0x00038000
#define HWIO_TCL_R1_SM_STATES_IX_0_MSDU_FETCH_SHFT                          0xf

#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL_CMD_RING_BMSK              0x00007000
#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL_CMD_RING_SHFT                     0xc

#define HWIO_TCL_R1_SM_STATES_IX_0_FW2TCL1_RING_BMSK                 0x00000e00
#define HWIO_TCL_R1_SM_STATES_IX_0_FW2TCL1_RING_SHFT                        0x9

#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL3_RING_BMSK                 0x000001c0
#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL3_RING_SHFT                        0x6

#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL2_RING_BMSK                 0x00000038
#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL2_RING_SHFT                        0x3

#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL1_RING_BMSK                 0x00000007
#define HWIO_TCL_R1_SM_STATES_IX_0_SW2TCL1_RING_SHFT                        0x0

//// Register TCL_R1_SM_STATES_IX_1 ////

#define HWIO_TCL_R1_SM_STATES_IX_1_ADDR(x)                           (x+0x00001008)
#define HWIO_TCL_R1_SM_STATES_IX_1_PHYS(x)                           (x+0x00001008)
#define HWIO_TCL_R1_SM_STATES_IX_1_RMSK                              0x0003ffff
#define HWIO_TCL_R1_SM_STATES_IX_1_SHFT                                       0
#define HWIO_TCL_R1_SM_STATES_IX_1_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_SM_STATES_IX_1_ADDR(x), HWIO_TCL_R1_SM_STATES_IX_1_RMSK)
#define HWIO_TCL_R1_SM_STATES_IX_1_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_SM_STATES_IX_1_ADDR(x), mask) 
#define HWIO_TCL_R1_SM_STATES_IX_1_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_SM_STATES_IX_1_ADDR(x), val)
#define HWIO_TCL_R1_SM_STATES_IX_1_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_SM_STATES_IX_1_ADDR(x), mask, val, HWIO_TCL_R1_SM_STATES_IX_1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_SM_STATES_IX_1_DSCP_TABLE_ACC_BMSK               0x00038000
#define HWIO_TCL_R1_SM_STATES_IX_1_DSCP_TABLE_ACC_SHFT                      0xf

#define HWIO_TCL_R1_SM_STATES_IX_1_PROD_CTRL_BMSK                    0x00007000
#define HWIO_TCL_R1_SM_STATES_IX_1_PROD_CTRL_SHFT                           0xc

#define HWIO_TCL_R1_SM_STATES_IX_1_TCL_STATUS2_BMSK                  0x00000e00
#define HWIO_TCL_R1_SM_STATES_IX_1_TCL_STATUS2_SHFT                         0x9

#define HWIO_TCL_R1_SM_STATES_IX_1_TCL_STATUS1_BMSK                  0x000001c0
#define HWIO_TCL_R1_SM_STATES_IX_1_TCL_STATUS1_SHFT                         0x6

#define HWIO_TCL_R1_SM_STATES_IX_1_TCL2FW_BMSK                       0x00000038
#define HWIO_TCL_R1_SM_STATES_IX_1_TCL2FW_SHFT                              0x3

#define HWIO_TCL_R1_SM_STATES_IX_1_TCL2TQM_BMSK                      0x00000007
#define HWIO_TCL_R1_SM_STATES_IX_1_TCL2TQM_SHFT                             0x0

//// Register TCL_R1_TESTBUS_CTRL_0 ////

#define HWIO_TCL_R1_TESTBUS_CTRL_0_ADDR(x)                           (x+0x0000100c)
#define HWIO_TCL_R1_TESTBUS_CTRL_0_PHYS(x)                           (x+0x0000100c)
#define HWIO_TCL_R1_TESTBUS_CTRL_0_RMSK                              0x3fffffff
#define HWIO_TCL_R1_TESTBUS_CTRL_0_SHFT                                       0
#define HWIO_TCL_R1_TESTBUS_CTRL_0_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_TESTBUS_CTRL_0_ADDR(x), HWIO_TCL_R1_TESTBUS_CTRL_0_RMSK)
#define HWIO_TCL_R1_TESTBUS_CTRL_0_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_TESTBUS_CTRL_0_ADDR(x), mask) 
#define HWIO_TCL_R1_TESTBUS_CTRL_0_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_TESTBUS_CTRL_0_ADDR(x), val)
#define HWIO_TCL_R1_TESTBUS_CTRL_0_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_TESTBUS_CTRL_0_ADDR(x), mask, val, HWIO_TCL_R1_TESTBUS_CTRL_0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_TESTBUS_CTRL_0_HW_ERROR_INTERRUPT_TESTBUS_OVERWRITE_BMSK 0x20000000
#define HWIO_TCL_R1_TESTBUS_CTRL_0_HW_ERROR_INTERRUPT_TESTBUS_OVERWRITE_SHFT       0x1d

#define HWIO_TCL_R1_TESTBUS_CTRL_0_TCL_MAIN_SELECT_BMSK              0x1f800000
#define HWIO_TCL_R1_TESTBUS_CTRL_0_TCL_MAIN_SELECT_SHFT                    0x17

#define HWIO_TCL_R1_TESTBUS_CTRL_0_GXI_SELECT_BMSK                   0x007c0000
#define HWIO_TCL_R1_TESTBUS_CTRL_0_GXI_SELECT_SHFT                         0x12

#define HWIO_TCL_R1_TESTBUS_CTRL_0_FSE_SELECT_BMSK                   0x0003c000
#define HWIO_TCL_R1_TESTBUS_CTRL_0_FSE_SELECT_SHFT                          0xe

#define HWIO_TCL_R1_TESTBUS_CTRL_0_ASE_SELECT_BMSK                   0x00003c00
#define HWIO_TCL_R1_TESTBUS_CTRL_0_ASE_SELECT_SHFT                          0xa

#define HWIO_TCL_R1_TESTBUS_CTRL_0_PARSER_SELECT_BMSK                0x000003e0
#define HWIO_TCL_R1_TESTBUS_CTRL_0_PARSER_SELECT_SHFT                       0x5

#define HWIO_TCL_R1_TESTBUS_CTRL_0_CCE_SELECT_BMSK                   0x0000001f
#define HWIO_TCL_R1_TESTBUS_CTRL_0_CCE_SELECT_SHFT                          0x0

//// Register TCL_R1_TESTBUS_LOW ////

#define HWIO_TCL_R1_TESTBUS_LOW_ADDR(x)                              (x+0x00001010)
#define HWIO_TCL_R1_TESTBUS_LOW_PHYS(x)                              (x+0x00001010)
#define HWIO_TCL_R1_TESTBUS_LOW_RMSK                                 0xffffffff
#define HWIO_TCL_R1_TESTBUS_LOW_SHFT                                          0
#define HWIO_TCL_R1_TESTBUS_LOW_IN(x)                                \
	in_dword_masked ( HWIO_TCL_R1_TESTBUS_LOW_ADDR(x), HWIO_TCL_R1_TESTBUS_LOW_RMSK)
#define HWIO_TCL_R1_TESTBUS_LOW_INM(x, mask)                         \
	in_dword_masked ( HWIO_TCL_R1_TESTBUS_LOW_ADDR(x), mask) 
#define HWIO_TCL_R1_TESTBUS_LOW_OUT(x, val)                          \
	out_dword( HWIO_TCL_R1_TESTBUS_LOW_ADDR(x), val)
#define HWIO_TCL_R1_TESTBUS_LOW_OUTM(x, mask, val)                   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_TESTBUS_LOW_ADDR(x), mask, val, HWIO_TCL_R1_TESTBUS_LOW_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_TESTBUS_LOW_VAL_BMSK                             0xffffffff
#define HWIO_TCL_R1_TESTBUS_LOW_VAL_SHFT                                    0x0

//// Register TCL_R1_TESTBUS_HIGH ////

#define HWIO_TCL_R1_TESTBUS_HIGH_ADDR(x)                             (x+0x00001014)
#define HWIO_TCL_R1_TESTBUS_HIGH_PHYS(x)                             (x+0x00001014)
#define HWIO_TCL_R1_TESTBUS_HIGH_RMSK                                0x000000ff
#define HWIO_TCL_R1_TESTBUS_HIGH_SHFT                                         0
#define HWIO_TCL_R1_TESTBUS_HIGH_IN(x)                               \
	in_dword_masked ( HWIO_TCL_R1_TESTBUS_HIGH_ADDR(x), HWIO_TCL_R1_TESTBUS_HIGH_RMSK)
#define HWIO_TCL_R1_TESTBUS_HIGH_INM(x, mask)                        \
	in_dword_masked ( HWIO_TCL_R1_TESTBUS_HIGH_ADDR(x), mask) 
#define HWIO_TCL_R1_TESTBUS_HIGH_OUT(x, val)                         \
	out_dword( HWIO_TCL_R1_TESTBUS_HIGH_ADDR(x), val)
#define HWIO_TCL_R1_TESTBUS_HIGH_OUTM(x, mask, val)                  \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_TESTBUS_HIGH_ADDR(x), mask, val, HWIO_TCL_R1_TESTBUS_HIGH_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_TESTBUS_HIGH_VAL_BMSK                            0x000000ff
#define HWIO_TCL_R1_TESTBUS_HIGH_VAL_SHFT                                   0x0

//// Register TCL_R1_EVENTMASK_IX_0 ////

#define HWIO_TCL_R1_EVENTMASK_IX_0_ADDR(x)                           (x+0x00001018)
#define HWIO_TCL_R1_EVENTMASK_IX_0_PHYS(x)                           (x+0x00001018)
#define HWIO_TCL_R1_EVENTMASK_IX_0_RMSK                              0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_0_SHFT                                       0
#define HWIO_TCL_R1_EVENTMASK_IX_0_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_0_ADDR(x), HWIO_TCL_R1_EVENTMASK_IX_0_RMSK)
#define HWIO_TCL_R1_EVENTMASK_IX_0_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_0_ADDR(x), mask) 
#define HWIO_TCL_R1_EVENTMASK_IX_0_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_EVENTMASK_IX_0_ADDR(x), val)
#define HWIO_TCL_R1_EVENTMASK_IX_0_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_EVENTMASK_IX_0_ADDR(x), mask, val, HWIO_TCL_R1_EVENTMASK_IX_0_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_EVENTMASK_IX_0_VAL_BMSK                          0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_0_VAL_SHFT                                 0x0

//// Register TCL_R1_EVENTMASK_IX_1 ////

#define HWIO_TCL_R1_EVENTMASK_IX_1_ADDR(x)                           (x+0x0000101c)
#define HWIO_TCL_R1_EVENTMASK_IX_1_PHYS(x)                           (x+0x0000101c)
#define HWIO_TCL_R1_EVENTMASK_IX_1_RMSK                              0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_1_SHFT                                       0
#define HWIO_TCL_R1_EVENTMASK_IX_1_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_1_ADDR(x), HWIO_TCL_R1_EVENTMASK_IX_1_RMSK)
#define HWIO_TCL_R1_EVENTMASK_IX_1_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_1_ADDR(x), mask) 
#define HWIO_TCL_R1_EVENTMASK_IX_1_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_EVENTMASK_IX_1_ADDR(x), val)
#define HWIO_TCL_R1_EVENTMASK_IX_1_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_EVENTMASK_IX_1_ADDR(x), mask, val, HWIO_TCL_R1_EVENTMASK_IX_1_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_EVENTMASK_IX_1_VAL_BMSK                          0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_1_VAL_SHFT                                 0x0

//// Register TCL_R1_EVENTMASK_IX_2 ////

#define HWIO_TCL_R1_EVENTMASK_IX_2_ADDR(x)                           (x+0x00001020)
#define HWIO_TCL_R1_EVENTMASK_IX_2_PHYS(x)                           (x+0x00001020)
#define HWIO_TCL_R1_EVENTMASK_IX_2_RMSK                              0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_2_SHFT                                       0
#define HWIO_TCL_R1_EVENTMASK_IX_2_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_2_ADDR(x), HWIO_TCL_R1_EVENTMASK_IX_2_RMSK)
#define HWIO_TCL_R1_EVENTMASK_IX_2_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_2_ADDR(x), mask) 
#define HWIO_TCL_R1_EVENTMASK_IX_2_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_EVENTMASK_IX_2_ADDR(x), val)
#define HWIO_TCL_R1_EVENTMASK_IX_2_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_EVENTMASK_IX_2_ADDR(x), mask, val, HWIO_TCL_R1_EVENTMASK_IX_2_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_EVENTMASK_IX_2_VAL_BMSK                          0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_2_VAL_SHFT                                 0x0

//// Register TCL_R1_EVENTMASK_IX_3 ////

#define HWIO_TCL_R1_EVENTMASK_IX_3_ADDR(x)                           (x+0x00001024)
#define HWIO_TCL_R1_EVENTMASK_IX_3_PHYS(x)                           (x+0x00001024)
#define HWIO_TCL_R1_EVENTMASK_IX_3_RMSK                              0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_3_SHFT                                       0
#define HWIO_TCL_R1_EVENTMASK_IX_3_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_3_ADDR(x), HWIO_TCL_R1_EVENTMASK_IX_3_RMSK)
#define HWIO_TCL_R1_EVENTMASK_IX_3_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R1_EVENTMASK_IX_3_ADDR(x), mask) 
#define HWIO_TCL_R1_EVENTMASK_IX_3_OUT(x, val)                       \
	out_dword( HWIO_TCL_R1_EVENTMASK_IX_3_ADDR(x), val)
#define HWIO_TCL_R1_EVENTMASK_IX_3_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_EVENTMASK_IX_3_ADDR(x), mask, val, HWIO_TCL_R1_EVENTMASK_IX_3_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_EVENTMASK_IX_3_VAL_BMSK                          0xffffffff
#define HWIO_TCL_R1_EVENTMASK_IX_3_VAL_SHFT                                 0x0

//// Register TCL_R1_REG_ACCESS_EVENT_GEN_CTRL ////

#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDR(x)                (x+0x00001028)
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_PHYS(x)                (x+0x00001028)
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_RMSK                   0xffffffff
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_SHFT                            0
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_IN(x)                  \
	in_dword_masked ( HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDR(x), HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_RMSK)
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_INM(x, mask)           \
	in_dword_masked ( HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDR(x), mask) 
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_OUT(x, val)            \
	out_dword( HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDR(x), val)
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_OUTM(x, mask, val)     \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDR(x), mask, val, HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDRESS_RANGE_END_BMSK 0xfffe0000
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDRESS_RANGE_END_SHFT       0x11

#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDRESS_RANGE_START_BMSK 0x0001fffc
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_ADDRESS_RANGE_START_SHFT        0x2

#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_WRITE_ACCESS_REPORT_ENABLE_BMSK 0x00000002
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_WRITE_ACCESS_REPORT_ENABLE_SHFT        0x1

#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_READ_ACCESS_REPORT_ENABLE_BMSK 0x00000001
#define HWIO_TCL_R1_REG_ACCESS_EVENT_GEN_CTRL_READ_ACCESS_REPORT_ENABLE_SHFT        0x0

//// Register TCL_R1_END_OF_TEST_CHECK ////

#define HWIO_TCL_R1_END_OF_TEST_CHECK_ADDR(x)                        (x+0x0000102c)
#define HWIO_TCL_R1_END_OF_TEST_CHECK_PHYS(x)                        (x+0x0000102c)
#define HWIO_TCL_R1_END_OF_TEST_CHECK_RMSK                           0x00000001
#define HWIO_TCL_R1_END_OF_TEST_CHECK_SHFT                                    0
#define HWIO_TCL_R1_END_OF_TEST_CHECK_IN(x)                          \
	in_dword_masked ( HWIO_TCL_R1_END_OF_TEST_CHECK_ADDR(x), HWIO_TCL_R1_END_OF_TEST_CHECK_RMSK)
#define HWIO_TCL_R1_END_OF_TEST_CHECK_INM(x, mask)                   \
	in_dword_masked ( HWIO_TCL_R1_END_OF_TEST_CHECK_ADDR(x), mask) 
#define HWIO_TCL_R1_END_OF_TEST_CHECK_OUT(x, val)                    \
	out_dword( HWIO_TCL_R1_END_OF_TEST_CHECK_ADDR(x), val)
#define HWIO_TCL_R1_END_OF_TEST_CHECK_OUTM(x, mask, val)             \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_END_OF_TEST_CHECK_ADDR(x), mask, val, HWIO_TCL_R1_END_OF_TEST_CHECK_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_END_OF_TEST_CHECK_END_OF_TEST_SELF_CHECK_BMSK    0x00000001
#define HWIO_TCL_R1_END_OF_TEST_CHECK_END_OF_TEST_SELF_CHECK_SHFT           0x0

//// Register TCL_R1_ASE_END_OF_TEST_CHECK ////

#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_ADDR(x)                    (x+0x00001030)
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_PHYS(x)                    (x+0x00001030)
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_RMSK                       0x00000001
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_SHFT                                0
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_IN(x)                      \
	in_dword_masked ( HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_ADDR(x), HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_RMSK)
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_INM(x, mask)               \
	in_dword_masked ( HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_OUT(x, val)                \
	out_dword( HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_ADDR(x), val)
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_OUTM(x, mask, val)         \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_ADDR(x), mask, val, HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_END_OF_TEST_SELF_CHECK_BMSK 0x00000001
#define HWIO_TCL_R1_ASE_END_OF_TEST_CHECK_END_OF_TEST_SELF_CHECK_SHFT        0x0

//// Register TCL_R1_ASE_DEBUG_CLEAR_COUNTERS ////

#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_ADDR(x)                 (x+0x00001034)
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_PHYS(x)                 (x+0x00001034)
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_RMSK                    0x00000001
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_SHFT                             0
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_IN(x)                   \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_ADDR(x), HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_RMSK)
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_INM(x, mask)            \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_OUT(x, val)             \
	out_dword( HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_ADDR(x), val)
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_OUTM(x, mask, val)      \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_ADDR(x), mask, val, HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_EN_BMSK                 0x00000001
#define HWIO_TCL_R1_ASE_DEBUG_CLEAR_COUNTERS_EN_SHFT                        0x0

//// Register TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER ////

#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_ADDR(x)         (x+0x00001038)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_PHYS(x)         (x+0x00001038)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_RMSK            0xffffffff
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_SHFT                     0
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_IN(x)           \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_ADDR(x), HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_RMSK)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_INM(x, mask)    \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_OUT(x, val)     \
	out_dword( HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_ADDR(x), val)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_ADDR(x), mask, val, HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_VAL_BMSK        0xffffffff
#define HWIO_TCL_R1_ASE_DEBUG_NUM_CACHE_HITS_COUNTER_VAL_SHFT               0x0

//// Register TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER ////

#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_ADDR(x)           (x+0x0000103c)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_PHYS(x)           (x+0x0000103c)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_RMSK              0xffffffff
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_SHFT                       0
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_IN(x)             \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_ADDR(x), HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_RMSK)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_INM(x, mask)      \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_OUT(x, val)       \
	out_dword( HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_ADDR(x), val)
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_ADDR(x), mask, val, HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_VAL_BMSK          0xffffffff
#define HWIO_TCL_R1_ASE_DEBUG_NUM_SEARCHES_COUNTER_VAL_SHFT                 0x0

//// Register TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER ////

#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_ADDR(x)        (x+0x00001040)
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_PHYS(x)        (x+0x00001040)
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_RMSK           0x000fffff
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_SHFT                    0
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_IN(x)          \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_ADDR(x), HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_RMSK)
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_INM(x, mask)   \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_OUT(x, val)    \
	out_dword( HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_ADDR(x), val)
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_ADDR(x), mask, val, HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_PEAK_BMSK      0x000ffc00
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_PEAK_SHFT             0xa

#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_CURR_BMSK      0x000003ff
#define HWIO_TCL_R1_ASE_DEBUG_CACHE_OCCUPANCY_COUNTER_CURR_SHFT             0x0

//// Register TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER ////

#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_ADDR(x)            (x+0x00001044)
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_PHYS(x)            (x+0x00001044)
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_RMSK               0x03ffffff
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_SHFT                        0
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_IN(x)              \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_ADDR(x), HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_RMSK)
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_INM(x, mask)       \
	in_dword_masked ( HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_OUT(x, val)        \
	out_dword( HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_ADDR(x), val)
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_OUTM(x, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_ADDR(x), mask, val, HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_SQUARE_OCCUPANCY_BMSK 0x03fffc00
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_SQUARE_OCCUPANCY_SHFT        0xa

#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_PEAK_NUM_SEARCH_PENDING_BMSK 0x000003e0
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_PEAK_NUM_SEARCH_PENDING_SHFT        0x5

#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_NUM_SEARCH_PENDING_BMSK 0x0000001f
#define HWIO_TCL_R1_ASE_DEBUG_SEARCH_STAT_COUNTER_NUM_SEARCH_PENDING_SHFT        0x0

//// Register TCL_R1_ASE_SM_STATES ////

#define HWIO_TCL_R1_ASE_SM_STATES_ADDR(x)                            (x+0x00001048)
#define HWIO_TCL_R1_ASE_SM_STATES_PHYS(x)                            (x+0x00001048)
#define HWIO_TCL_R1_ASE_SM_STATES_RMSK                               0x00001fff
#define HWIO_TCL_R1_ASE_SM_STATES_SHFT                                        0
#define HWIO_TCL_R1_ASE_SM_STATES_IN(x)                              \
	in_dword_masked ( HWIO_TCL_R1_ASE_SM_STATES_ADDR(x), HWIO_TCL_R1_ASE_SM_STATES_RMSK)
#define HWIO_TCL_R1_ASE_SM_STATES_INM(x, mask)                       \
	in_dword_masked ( HWIO_TCL_R1_ASE_SM_STATES_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_SM_STATES_OUT(x, val)                        \
	out_dword( HWIO_TCL_R1_ASE_SM_STATES_ADDR(x), val)
#define HWIO_TCL_R1_ASE_SM_STATES_OUTM(x, mask, val)                 \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_SM_STATES_ADDR(x), mask, val, HWIO_TCL_R1_ASE_SM_STATES_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_SM_STATES_GSE_CTRL_STATE_BMSK                0x00001800
#define HWIO_TCL_R1_ASE_SM_STATES_GSE_CTRL_STATE_SHFT                       0xb

#define HWIO_TCL_R1_ASE_SM_STATES_CACHE_CHK_STATE_BMSK               0x00000600
#define HWIO_TCL_R1_ASE_SM_STATES_CACHE_CHK_STATE_SHFT                      0x9

#define HWIO_TCL_R1_ASE_SM_STATES_MEM_ISS1_STATE_BMSK                0x00000180
#define HWIO_TCL_R1_ASE_SM_STATES_MEM_ISS1_STATE_SHFT                       0x7

#define HWIO_TCL_R1_ASE_SM_STATES_MEM_RESP1_STATE_BMSK               0x00000070
#define HWIO_TCL_R1_ASE_SM_STATES_MEM_RESP1_STATE_SHFT                      0x4

#define HWIO_TCL_R1_ASE_SM_STATES_APP_RETURN_STATE_BMSK              0x0000000f
#define HWIO_TCL_R1_ASE_SM_STATES_APP_RETURN_STATE_SHFT                     0x0

//// Register TCL_R1_ASE_CACHE_DEBUG ////

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ADDR(x)                          (x+0x0000104c)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_PHYS(x)                          (x+0x0000104c)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_RMSK                             0x000003ff
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_SHFT                                      0
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R1_ASE_CACHE_DEBUG_ADDR(x), HWIO_TCL_R1_ASE_CACHE_DEBUG_RMSK)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R1_ASE_CACHE_DEBUG_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_OUT(x, val)                      \
	out_dword( HWIO_TCL_R1_ASE_CACHE_DEBUG_ADDR(x), val)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_CACHE_DEBUG_ADDR(x), mask, val, HWIO_TCL_R1_ASE_CACHE_DEBUG_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_READ_IDX_BMSK                    0x000003ff
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_READ_IDX_SHFT                           0x0

//// Register TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS ////

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_ADDR(x)              (x+0x00001050)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_PHYS(x)              (x+0x00001050)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_RMSK                 0x007fffff
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_SHFT                          0
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_IN(x)                \
	in_dword_masked ( HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_ADDR(x), HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_RMSK)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_INM(x, mask)         \
	in_dword_masked ( HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_ADDR(x), mask) 
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_OUT(x, val)          \
	out_dword( HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_ADDR(x), val)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_OUTM(x, mask, val)   \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_ADDR(x), mask, val, HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_GST_IDX_BMSK         0x007ffff8
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_GST_IDX_SHFT                0x3

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_CACHE_ONLY_BMSK      0x00000004
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_CACHE_ONLY_SHFT             0x2

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_DIRTY_BMSK           0x00000002
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_DIRTY_SHFT                  0x1

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_VALID_BMSK           0x00000001
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_STATS_VALID_SHFT                  0x0

//// Register TCL_R1_ASE_CACHE_DEBUG_ENTRY_n ////

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_ADDR(base, n)            (base+0x1054+0x4*n)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_PHYS(base, n)            (base+0x1054+0x4*n)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_RMSK                     0xffffffff
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_SHFT                              0
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_MAXn                             31
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_INI(base, n)             \
	in_dword_masked ( HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_ADDR(base, n), HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_RMSK)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_INMI(base, n, mask)      \
	in_dword_masked ( HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_ADDR(base, n), mask) 
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_OUTI(base, n, val)       \
	out_dword( HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_ADDR(base, n), val)
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_OUTMI(base, n, mask, val) \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_ADDR(base, n), mask, val, HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_INI(base, n)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_VAL_BMSK                 0xffffffff
#define HWIO_TCL_R1_ASE_CACHE_DEBUG_ENTRY_n_VAL_SHFT                        0x0

//// Register TCL_R2_SW2TCL1_RING_HP ////

#define HWIO_TCL_R2_SW2TCL1_RING_HP_ADDR(x)                          (x+0x00002000)
#define HWIO_TCL_R2_SW2TCL1_RING_HP_PHYS(x)                          (x+0x00002000)
#define HWIO_TCL_R2_SW2TCL1_RING_HP_RMSK                             0x000fffff
#define HWIO_TCL_R2_SW2TCL1_RING_HP_SHFT                                      0
#define HWIO_TCL_R2_SW2TCL1_RING_HP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL1_RING_HP_ADDR(x), HWIO_TCL_R2_SW2TCL1_RING_HP_RMSK)
#define HWIO_TCL_R2_SW2TCL1_RING_HP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL1_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL1_RING_HP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_SW2TCL1_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL1_RING_HP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL1_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL1_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL1_RING_HP_HEAD_PTR_BMSK                    0x000fffff
#define HWIO_TCL_R2_SW2TCL1_RING_HP_HEAD_PTR_SHFT                           0x0

//// Register TCL_R2_SW2TCL1_RING_TP ////

#define HWIO_TCL_R2_SW2TCL1_RING_TP_ADDR(x)                          (x+0x00002004)
#define HWIO_TCL_R2_SW2TCL1_RING_TP_PHYS(x)                          (x+0x00002004)
#define HWIO_TCL_R2_SW2TCL1_RING_TP_RMSK                             0x000fffff
#define HWIO_TCL_R2_SW2TCL1_RING_TP_SHFT                                      0
#define HWIO_TCL_R2_SW2TCL1_RING_TP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL1_RING_TP_ADDR(x), HWIO_TCL_R2_SW2TCL1_RING_TP_RMSK)
#define HWIO_TCL_R2_SW2TCL1_RING_TP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL1_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL1_RING_TP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_SW2TCL1_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL1_RING_TP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL1_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL1_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL1_RING_TP_TAIL_PTR_BMSK                    0x000fffff
#define HWIO_TCL_R2_SW2TCL1_RING_TP_TAIL_PTR_SHFT                           0x0

//// Register TCL_R2_SW2TCL2_RING_HP ////

#define HWIO_TCL_R2_SW2TCL2_RING_HP_ADDR(x)                          (x+0x00002008)
#define HWIO_TCL_R2_SW2TCL2_RING_HP_PHYS(x)                          (x+0x00002008)
#define HWIO_TCL_R2_SW2TCL2_RING_HP_RMSK                             0x000fffff
#define HWIO_TCL_R2_SW2TCL2_RING_HP_SHFT                                      0
#define HWIO_TCL_R2_SW2TCL2_RING_HP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL2_RING_HP_ADDR(x), HWIO_TCL_R2_SW2TCL2_RING_HP_RMSK)
#define HWIO_TCL_R2_SW2TCL2_RING_HP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL2_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL2_RING_HP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_SW2TCL2_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL2_RING_HP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL2_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL2_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL2_RING_HP_HEAD_PTR_BMSK                    0x000fffff
#define HWIO_TCL_R2_SW2TCL2_RING_HP_HEAD_PTR_SHFT                           0x0

//// Register TCL_R2_SW2TCL2_RING_TP ////

#define HWIO_TCL_R2_SW2TCL2_RING_TP_ADDR(x)                          (x+0x0000200c)
#define HWIO_TCL_R2_SW2TCL2_RING_TP_PHYS(x)                          (x+0x0000200c)
#define HWIO_TCL_R2_SW2TCL2_RING_TP_RMSK                             0x000fffff
#define HWIO_TCL_R2_SW2TCL2_RING_TP_SHFT                                      0
#define HWIO_TCL_R2_SW2TCL2_RING_TP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL2_RING_TP_ADDR(x), HWIO_TCL_R2_SW2TCL2_RING_TP_RMSK)
#define HWIO_TCL_R2_SW2TCL2_RING_TP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL2_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL2_RING_TP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_SW2TCL2_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL2_RING_TP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL2_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL2_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL2_RING_TP_TAIL_PTR_BMSK                    0x000fffff
#define HWIO_TCL_R2_SW2TCL2_RING_TP_TAIL_PTR_SHFT                           0x0

//// Register TCL_R2_SW2TCL3_RING_HP ////

#define HWIO_TCL_R2_SW2TCL3_RING_HP_ADDR(x)                          (x+0x00002010)
#define HWIO_TCL_R2_SW2TCL3_RING_HP_PHYS(x)                          (x+0x00002010)
#define HWIO_TCL_R2_SW2TCL3_RING_HP_RMSK                             0x000fffff
#define HWIO_TCL_R2_SW2TCL3_RING_HP_SHFT                                      0
#define HWIO_TCL_R2_SW2TCL3_RING_HP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL3_RING_HP_ADDR(x), HWIO_TCL_R2_SW2TCL3_RING_HP_RMSK)
#define HWIO_TCL_R2_SW2TCL3_RING_HP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL3_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL3_RING_HP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_SW2TCL3_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL3_RING_HP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL3_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL3_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL3_RING_HP_HEAD_PTR_BMSK                    0x000fffff
#define HWIO_TCL_R2_SW2TCL3_RING_HP_HEAD_PTR_SHFT                           0x0

//// Register TCL_R2_SW2TCL3_RING_TP ////

#define HWIO_TCL_R2_SW2TCL3_RING_TP_ADDR(x)                          (x+0x00002014)
#define HWIO_TCL_R2_SW2TCL3_RING_TP_PHYS(x)                          (x+0x00002014)
#define HWIO_TCL_R2_SW2TCL3_RING_TP_RMSK                             0x000fffff
#define HWIO_TCL_R2_SW2TCL3_RING_TP_SHFT                                      0
#define HWIO_TCL_R2_SW2TCL3_RING_TP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL3_RING_TP_ADDR(x), HWIO_TCL_R2_SW2TCL3_RING_TP_RMSK)
#define HWIO_TCL_R2_SW2TCL3_RING_TP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL3_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL3_RING_TP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_SW2TCL3_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL3_RING_TP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL3_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL3_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL3_RING_TP_TAIL_PTR_BMSK                    0x000fffff
#define HWIO_TCL_R2_SW2TCL3_RING_TP_TAIL_PTR_SHFT                           0x0

//// Register TCL_R2_SW2TCL_CMD_RING_HP ////

#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_ADDR(x)                       (x+0x00002018)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_PHYS(x)                       (x+0x00002018)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_RMSK                          0x000fffff
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_SHFT                                   0
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_IN(x)                         \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL_CMD_RING_HP_ADDR(x), HWIO_TCL_R2_SW2TCL_CMD_RING_HP_RMSK)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_INM(x, mask)                  \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL_CMD_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_OUT(x, val)                   \
	out_dword( HWIO_TCL_R2_SW2TCL_CMD_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_OUTM(x, mask, val)            \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL_CMD_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL_CMD_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_HEAD_PTR_BMSK                 0x000fffff
#define HWIO_TCL_R2_SW2TCL_CMD_RING_HP_HEAD_PTR_SHFT                        0x0

//// Register TCL_R2_SW2TCL_CMD_RING_TP ////

#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_ADDR(x)                       (x+0x0000201c)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_PHYS(x)                       (x+0x0000201c)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_RMSK                          0x000fffff
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_SHFT                                   0
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_IN(x)                         \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL_CMD_RING_TP_ADDR(x), HWIO_TCL_R2_SW2TCL_CMD_RING_TP_RMSK)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_INM(x, mask)                  \
	in_dword_masked ( HWIO_TCL_R2_SW2TCL_CMD_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_OUT(x, val)                   \
	out_dword( HWIO_TCL_R2_SW2TCL_CMD_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_OUTM(x, mask, val)            \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_SW2TCL_CMD_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_SW2TCL_CMD_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_TAIL_PTR_BMSK                 0x000fffff
#define HWIO_TCL_R2_SW2TCL_CMD_RING_TP_TAIL_PTR_SHFT                        0x0

//// Register TCL_R2_FW2TCL1_RING_HP ////

#define HWIO_TCL_R2_FW2TCL1_RING_HP_ADDR(x)                          (x+0x00002020)
#define HWIO_TCL_R2_FW2TCL1_RING_HP_PHYS(x)                          (x+0x00002020)
#define HWIO_TCL_R2_FW2TCL1_RING_HP_RMSK                             0x0000ffff
#define HWIO_TCL_R2_FW2TCL1_RING_HP_SHFT                                      0
#define HWIO_TCL_R2_FW2TCL1_RING_HP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_FW2TCL1_RING_HP_ADDR(x), HWIO_TCL_R2_FW2TCL1_RING_HP_RMSK)
#define HWIO_TCL_R2_FW2TCL1_RING_HP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_FW2TCL1_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_FW2TCL1_RING_HP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_FW2TCL1_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_FW2TCL1_RING_HP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_FW2TCL1_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_FW2TCL1_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_FW2TCL1_RING_HP_HEAD_PTR_BMSK                    0x0000ffff
#define HWIO_TCL_R2_FW2TCL1_RING_HP_HEAD_PTR_SHFT                           0x0

//// Register TCL_R2_FW2TCL1_RING_TP ////

#define HWIO_TCL_R2_FW2TCL1_RING_TP_ADDR(x)                          (x+0x00002024)
#define HWIO_TCL_R2_FW2TCL1_RING_TP_PHYS(x)                          (x+0x00002024)
#define HWIO_TCL_R2_FW2TCL1_RING_TP_RMSK                             0x0000ffff
#define HWIO_TCL_R2_FW2TCL1_RING_TP_SHFT                                      0
#define HWIO_TCL_R2_FW2TCL1_RING_TP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_FW2TCL1_RING_TP_ADDR(x), HWIO_TCL_R2_FW2TCL1_RING_TP_RMSK)
#define HWIO_TCL_R2_FW2TCL1_RING_TP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_FW2TCL1_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_FW2TCL1_RING_TP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_FW2TCL1_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_FW2TCL1_RING_TP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_FW2TCL1_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_FW2TCL1_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_FW2TCL1_RING_TP_TAIL_PTR_BMSK                    0x0000ffff
#define HWIO_TCL_R2_FW2TCL1_RING_TP_TAIL_PTR_SHFT                           0x0

//// Register TCL_R2_TCL2TQM_RING_HP ////

#define HWIO_TCL_R2_TCL2TQM_RING_HP_ADDR(x)                          (x+0x00002028)
#define HWIO_TCL_R2_TCL2TQM_RING_HP_PHYS(x)                          (x+0x00002028)
#define HWIO_TCL_R2_TCL2TQM_RING_HP_RMSK                             0x0000ffff
#define HWIO_TCL_R2_TCL2TQM_RING_HP_SHFT                                      0
#define HWIO_TCL_R2_TCL2TQM_RING_HP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_TCL2TQM_RING_HP_ADDR(x), HWIO_TCL_R2_TCL2TQM_RING_HP_RMSK)
#define HWIO_TCL_R2_TCL2TQM_RING_HP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_TCL2TQM_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL2TQM_RING_HP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_TCL2TQM_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_TCL2TQM_RING_HP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL2TQM_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_TCL2TQM_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL2TQM_RING_HP_HEAD_PTR_BMSK                    0x0000ffff
#define HWIO_TCL_R2_TCL2TQM_RING_HP_HEAD_PTR_SHFT                           0x0

//// Register TCL_R2_TCL2TQM_RING_TP ////

#define HWIO_TCL_R2_TCL2TQM_RING_TP_ADDR(x)                          (x+0x0000202c)
#define HWIO_TCL_R2_TCL2TQM_RING_TP_PHYS(x)                          (x+0x0000202c)
#define HWIO_TCL_R2_TCL2TQM_RING_TP_RMSK                             0x0000ffff
#define HWIO_TCL_R2_TCL2TQM_RING_TP_SHFT                                      0
#define HWIO_TCL_R2_TCL2TQM_RING_TP_IN(x)                            \
	in_dword_masked ( HWIO_TCL_R2_TCL2TQM_RING_TP_ADDR(x), HWIO_TCL_R2_TCL2TQM_RING_TP_RMSK)
#define HWIO_TCL_R2_TCL2TQM_RING_TP_INM(x, mask)                     \
	in_dword_masked ( HWIO_TCL_R2_TCL2TQM_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL2TQM_RING_TP_OUT(x, val)                      \
	out_dword( HWIO_TCL_R2_TCL2TQM_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_TCL2TQM_RING_TP_OUTM(x, mask, val)               \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL2TQM_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_TCL2TQM_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL2TQM_RING_TP_TAIL_PTR_BMSK                    0x0000ffff
#define HWIO_TCL_R2_TCL2TQM_RING_TP_TAIL_PTR_SHFT                           0x0

//// Register TCL_R2_TCL_STATUS1_RING_HP ////

#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_ADDR(x)                      (x+0x00002030)
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_PHYS(x)                      (x+0x00002030)
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_RMSK                         0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_SHFT                                  0
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS1_RING_HP_ADDR(x), HWIO_TCL_R2_TCL_STATUS1_RING_HP_RMSK)
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS1_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_OUT(x, val)                  \
	out_dword( HWIO_TCL_R2_TCL_STATUS1_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL_STATUS1_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_TCL_STATUS1_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_HEAD_PTR_BMSK                0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS1_RING_HP_HEAD_PTR_SHFT                       0x0

//// Register TCL_R2_TCL_STATUS1_RING_TP ////

#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_ADDR(x)                      (x+0x00002034)
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_PHYS(x)                      (x+0x00002034)
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_RMSK                         0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_SHFT                                  0
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS1_RING_TP_ADDR(x), HWIO_TCL_R2_TCL_STATUS1_RING_TP_RMSK)
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS1_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_OUT(x, val)                  \
	out_dword( HWIO_TCL_R2_TCL_STATUS1_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL_STATUS1_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_TCL_STATUS1_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_TAIL_PTR_BMSK                0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS1_RING_TP_TAIL_PTR_SHFT                       0x0

//// Register TCL_R2_TCL_STATUS2_RING_HP ////

#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_ADDR(x)                      (x+0x00002038)
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_PHYS(x)                      (x+0x00002038)
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_RMSK                         0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_SHFT                                  0
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS2_RING_HP_ADDR(x), HWIO_TCL_R2_TCL_STATUS2_RING_HP_RMSK)
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS2_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_OUT(x, val)                  \
	out_dword( HWIO_TCL_R2_TCL_STATUS2_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL_STATUS2_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_TCL_STATUS2_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_HEAD_PTR_BMSK                0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS2_RING_HP_HEAD_PTR_SHFT                       0x0

//// Register TCL_R2_TCL_STATUS2_RING_TP ////

#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_ADDR(x)                      (x+0x0000203c)
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_PHYS(x)                      (x+0x0000203c)
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_RMSK                         0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_SHFT                                  0
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_IN(x)                        \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS2_RING_TP_ADDR(x), HWIO_TCL_R2_TCL_STATUS2_RING_TP_RMSK)
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_INM(x, mask)                 \
	in_dword_masked ( HWIO_TCL_R2_TCL_STATUS2_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_OUT(x, val)                  \
	out_dword( HWIO_TCL_R2_TCL_STATUS2_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_OUTM(x, mask, val)           \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL_STATUS2_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_TCL_STATUS2_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_TAIL_PTR_BMSK                0x0000ffff
#define HWIO_TCL_R2_TCL_STATUS2_RING_TP_TAIL_PTR_SHFT                       0x0

//// Register TCL_R2_TCL2FW_RING_HP ////

#define HWIO_TCL_R2_TCL2FW_RING_HP_ADDR(x)                           (x+0x00002040)
#define HWIO_TCL_R2_TCL2FW_RING_HP_PHYS(x)                           (x+0x00002040)
#define HWIO_TCL_R2_TCL2FW_RING_HP_RMSK                              0x0000ffff
#define HWIO_TCL_R2_TCL2FW_RING_HP_SHFT                                       0
#define HWIO_TCL_R2_TCL2FW_RING_HP_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R2_TCL2FW_RING_HP_ADDR(x), HWIO_TCL_R2_TCL2FW_RING_HP_RMSK)
#define HWIO_TCL_R2_TCL2FW_RING_HP_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R2_TCL2FW_RING_HP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL2FW_RING_HP_OUT(x, val)                       \
	out_dword( HWIO_TCL_R2_TCL2FW_RING_HP_ADDR(x), val)
#define HWIO_TCL_R2_TCL2FW_RING_HP_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL2FW_RING_HP_ADDR(x), mask, val, HWIO_TCL_R2_TCL2FW_RING_HP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL2FW_RING_HP_HEAD_PTR_BMSK                     0x0000ffff
#define HWIO_TCL_R2_TCL2FW_RING_HP_HEAD_PTR_SHFT                            0x0

//// Register TCL_R2_TCL2FW_RING_TP ////

#define HWIO_TCL_R2_TCL2FW_RING_TP_ADDR(x)                           (x+0x00002044)
#define HWIO_TCL_R2_TCL2FW_RING_TP_PHYS(x)                           (x+0x00002044)
#define HWIO_TCL_R2_TCL2FW_RING_TP_RMSK                              0x0000ffff
#define HWIO_TCL_R2_TCL2FW_RING_TP_SHFT                                       0
#define HWIO_TCL_R2_TCL2FW_RING_TP_IN(x)                             \
	in_dword_masked ( HWIO_TCL_R2_TCL2FW_RING_TP_ADDR(x), HWIO_TCL_R2_TCL2FW_RING_TP_RMSK)
#define HWIO_TCL_R2_TCL2FW_RING_TP_INM(x, mask)                      \
	in_dword_masked ( HWIO_TCL_R2_TCL2FW_RING_TP_ADDR(x), mask) 
#define HWIO_TCL_R2_TCL2FW_RING_TP_OUT(x, val)                       \
	out_dword( HWIO_TCL_R2_TCL2FW_RING_TP_ADDR(x), val)
#define HWIO_TCL_R2_TCL2FW_RING_TP_OUTM(x, mask, val)                \
	do {\
		HWIO_INTLOCK(); \
		out_dword_masked_ns(HWIO_TCL_R2_TCL2FW_RING_TP_ADDR(x), mask, val, HWIO_TCL_R2_TCL2FW_RING_TP_IN(x)); \
		HWIO_INTFREE();\
	} while (0) 

#define HWIO_TCL_R2_TCL2FW_RING_TP_TAIL_PTR_BMSK                     0x0000ffff
#define HWIO_TCL_R2_TCL2FW_RING_TP_TAIL_PTR_SHFT                            0x0


#endif
