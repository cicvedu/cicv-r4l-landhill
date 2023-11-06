/* SPDX-License-Identifier: GPL-2.0
 *
 * Copyright 2016-2020 HabanaLabs, Ltd.
 * All Rights Reserved.
 *
 */

/************************************
 ** This is an auto-generated file **
 **       DO NOT EDIT BELOW        **
 ************************************/

#ifndef ASIC_REG_ARC_FARM_KDMA_CTX_MASKS_H_
#define ASIC_REG_ARC_FARM_KDMA_CTX_MASKS_H_

/*
 *****************************************
 *   ARC_FARM_KDMA_CTX
 *   (Prototype: DMA_CORE_CTX)
 *****************************************
 */

/* ARC_FARM_KDMA_CTX_RATE_LIM_TKN */
#define ARC_FARM_KDMA_CTX_RATE_LIM_TKN_RD_SHIFT 0
#define ARC_FARM_KDMA_CTX_RATE_LIM_TKN_RD_MASK 0xFF
#define ARC_FARM_KDMA_CTX_RATE_LIM_TKN_WR_SHIFT 16
#define ARC_FARM_KDMA_CTX_RATE_LIM_TKN_WR_MASK 0xFF0000

/* ARC_FARM_KDMA_CTX_PWRLP */
#define ARC_FARM_KDMA_CTX_PWRLP_DATA_SHIFT 0
#define ARC_FARM_KDMA_CTX_PWRLP_DATA_MASK 0xFF
#define ARC_FARM_KDMA_CTX_PWRLP_EN_SHIFT 8
#define ARC_FARM_KDMA_CTX_PWRLP_EN_MASK 0x100

/* ARC_FARM_KDMA_CTX_TE_NUMROWS */
#define ARC_FARM_KDMA_CTX_TE_NUMROWS_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_TE_NUMROWS_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_IDX */
#define ARC_FARM_KDMA_CTX_IDX_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_IDX_VAL_MASK 0xFFFF

/* ARC_FARM_KDMA_CTX_IDX_INC */
#define ARC_FARM_KDMA_CTX_IDX_INC_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_IDX_INC_VAL_MASK 0xFF

/* ARC_FARM_KDMA_CTX_CTRL */
#define ARC_FARM_KDMA_CTX_CTRL_TRANSPOSE_SHIFT 0
#define ARC_FARM_KDMA_CTX_CTRL_TRANSPOSE_MASK 0x1
#define ARC_FARM_KDMA_CTX_CTRL_DTYPE_SHIFT 4
#define ARC_FARM_KDMA_CTX_CTRL_DTYPE_MASK 0x30
#define ARC_FARM_KDMA_CTX_CTRL_COMPRESS_SHIFT 8
#define ARC_FARM_KDMA_CTX_CTRL_COMPRESS_MASK 0x100
#define ARC_FARM_KDMA_CTX_CTRL_DECOMPRESS_SHIFT 9
#define ARC_FARM_KDMA_CTX_CTRL_DECOMPRESS_MASK 0x200
#define ARC_FARM_KDMA_CTX_CTRL_RD_UNCACHEABLE_SHIFT 12
#define ARC_FARM_KDMA_CTX_CTRL_RD_UNCACHEABLE_MASK 0x1000

/* ARC_FARM_KDMA_CTX_SRC_TSIZE_0 */
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_0_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_0_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_TSIZE_1 */
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_1_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_1_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_STRIDE_1 */
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_1_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_1_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_TSIZE_2 */
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_2_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_2_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_STRIDE_2 */
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_2_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_2_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_TSIZE_3 */
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_3_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_3_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_STRIDE_3 */
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_3_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_3_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_TSIZE_4 */
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_4_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_TSIZE_4_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_STRIDE_4 */
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_4_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_STRIDE_4_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_TSIZE_1 */
#define ARC_FARM_KDMA_CTX_DST_TSIZE_1_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_TSIZE_1_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_STRIDE_1 */
#define ARC_FARM_KDMA_CTX_DST_STRIDE_1_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_STRIDE_1_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_TSIZE_2 */
#define ARC_FARM_KDMA_CTX_DST_TSIZE_2_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_TSIZE_2_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_STRIDE_2 */
#define ARC_FARM_KDMA_CTX_DST_STRIDE_2_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_STRIDE_2_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_TSIZE_3 */
#define ARC_FARM_KDMA_CTX_DST_TSIZE_3_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_TSIZE_3_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_STRIDE_3 */
#define ARC_FARM_KDMA_CTX_DST_STRIDE_3_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_STRIDE_3_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_TSIZE_4 */
#define ARC_FARM_KDMA_CTX_DST_TSIZE_4_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_TSIZE_4_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_STRIDE_4 */
#define ARC_FARM_KDMA_CTX_DST_STRIDE_4_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_STRIDE_4_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_WR_COMP_ADDR_HI */
#define ARC_FARM_KDMA_CTX_WR_COMP_ADDR_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_WR_COMP_ADDR_HI_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_WR_COMP_ADDR_LO */
#define ARC_FARM_KDMA_CTX_WR_COMP_ADDR_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_WR_COMP_ADDR_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_WR_COMP_WDATA */
#define ARC_FARM_KDMA_CTX_WR_COMP_WDATA_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_WR_COMP_WDATA_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_OFFSET_LO */
#define ARC_FARM_KDMA_CTX_SRC_OFFSET_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_OFFSET_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_OFFSET_HI */
#define ARC_FARM_KDMA_CTX_SRC_OFFSET_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_OFFSET_HI_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_OFFSET_LO */
#define ARC_FARM_KDMA_CTX_DST_OFFSET_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_OFFSET_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_OFFSET_HI */
#define ARC_FARM_KDMA_CTX_DST_OFFSET_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_OFFSET_HI_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_BASE_LO */
#define ARC_FARM_KDMA_CTX_SRC_BASE_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_BASE_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_SRC_BASE_HI */
#define ARC_FARM_KDMA_CTX_SRC_BASE_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_SRC_BASE_HI_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_BASE_LO */
#define ARC_FARM_KDMA_CTX_DST_BASE_LO_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_BASE_LO_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_BASE_HI */
#define ARC_FARM_KDMA_CTX_DST_BASE_HI_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_BASE_HI_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_DST_TSIZE_0 */
#define ARC_FARM_KDMA_CTX_DST_TSIZE_0_VAL_SHIFT 0
#define ARC_FARM_KDMA_CTX_DST_TSIZE_0_VAL_MASK 0xFFFFFFFF

/* ARC_FARM_KDMA_CTX_COMMIT */
#define ARC_FARM_KDMA_CTX_COMMIT_WR_COMP_EN_SHIFT 0
#define ARC_FARM_KDMA_CTX_COMMIT_WR_COMP_EN_MASK 0x1
#define ARC_FARM_KDMA_CTX_COMMIT_ENDIAN_SWAP_SHIFT 1
#define ARC_FARM_KDMA_CTX_COMMIT_ENDIAN_SWAP_MASK 0x6
#define ARC_FARM_KDMA_CTX_COMMIT_MEM_SET_SHIFT 4
#define ARC_FARM_KDMA_CTX_COMMIT_MEM_SET_MASK 0x10
#define ARC_FARM_KDMA_CTX_COMMIT_BF16_SHIFT 6
#define ARC_FARM_KDMA_CTX_COMMIT_BF16_MASK 0x40
#define ARC_FARM_KDMA_CTX_COMMIT_FP16_SHIFT 7
#define ARC_FARM_KDMA_CTX_COMMIT_FP16_MASK 0x80
#define ARC_FARM_KDMA_CTX_COMMIT_CTX_ID_INC_SHIFT 8
#define ARC_FARM_KDMA_CTX_COMMIT_CTX_ID_INC_MASK 0x100
#define ARC_FARM_KDMA_CTX_COMMIT_ADD_OFFSET_0_SHIFT 9
#define ARC_FARM_KDMA_CTX_COMMIT_ADD_OFFSET_0_MASK 0x200
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE0_FROM_DST_SIZE0_SHIFT 10
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE0_FROM_DST_SIZE0_MASK 0x400
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_OFST_FROM_DST_OFST_SHIFT 11
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_OFST_FROM_DST_OFST_MASK 0x800
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM1_SHIFT 12
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM1_MASK 0x1000
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM2_SHIFT 13
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM2_MASK 0x2000
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM3_SHIFT 14
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM3_MASK 0x4000
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM4_SHIFT 15
#define ARC_FARM_KDMA_CTX_COMMIT_DISABLE_DIM4_MASK 0x8000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE1_FROM_DST_SIZE1_SHIFT 16
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE1_FROM_DST_SIZE1_MASK 0x10000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE2_FROM_DST_SIZE2_SHIFT 17
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE2_FROM_DST_SIZE2_MASK 0x20000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE3_FROM_DST_SIZE3_SHIFT 18
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE3_FROM_DST_SIZE3_MASK 0x40000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE4_FROM_DST_SIZE4_SHIFT 19
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_SIZE4_FROM_DST_SIZE4_MASK 0x80000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD1_FROM_DST_STRD1_SHIFT 20
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD1_FROM_DST_STRD1_MASK 0x100000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD2_FROM_DST_STRD2_SHIFT 21
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD2_FROM_DST_STRD2_MASK 0x200000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD3_FROM_DST_STRD3_SHIFT 22
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD3_FROM_DST_STRD3_MASK 0x400000
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD4_FROM_DST_STRD4_SHIFT 23
#define ARC_FARM_KDMA_CTX_COMMIT_SRC_STRD4_FROM_DST_STRD4_MASK 0x800000
#define ARC_FARM_KDMA_CTX_COMMIT_LIN_SHIFT 31
#define ARC_FARM_KDMA_CTX_COMMIT_LIN_MASK 0x80000000

#endif /* ASIC_REG_ARC_FARM_KDMA_CTX_MASKS_H_ */