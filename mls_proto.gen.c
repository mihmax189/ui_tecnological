/*
 * C implementation for rlmc/generated/mls_proto.json codogram module.
 * Version: v0.9.0-3-g38b0680
 *
 * Auto-generated file! DO NOT MODIFY!
 */

#include <string.h>
#ifndef WIN32
  #include <arpa/inet.h>
#elif WIN32
  #include <ws2spi.h>
#endif


#include "mls_proto.gen.h"

#define MASK(start, end) ( \
  (((1 << (start - end + 1)) - 1) << end) \
)


int Marshal_regime_key_fap(regime_key_fap *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->addr = 255;
  c->bit_rec_trans = 0;
  c->sub_addr = 1;
  c->count_word = 27;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->N_strobe_contr<<4)&MASK(7, 4);
  ch[2] |= (c->N_k_t<<0)&MASK(3, 0);
  ch[3] |= (c->regime<<3)&MASK(7, 3);
  ch[3] |= (c->R_P<<0)&MASK(2, 0);
  ch[4] |= (c->N_col_kuk>>1)&MASK(4, 0);
  ch[5] |= (c->N_col_kuk<<7)&MASK(7, 7);
  ch[5] |= (c->N_row_kuk<<4)&MASK(6, 4);
  ch[5] |= (c->N_fr_kuk<<0)&MASK(3, 0);
  ch[6] |= (c->N_col_fap<<2)&MASK(7, 2);
  ch[6] |= (c->N_row_fap>>1)&MASK(1, 0);
  ch[7] |= (c->N_row_fap<<7)&MASK(7, 7);
  ch[7] |= (c->N_work_put_fap<<0)&MASK(6, 0);
  ch[8] |= (c->mshu_ok_et_unsel<<7)&MASK(7, 7);
  ch[8] |= (c->delta_fap_pr_l_ok0<<1)&MASK(6, 1);
  ch[8] |= (c->K_att_ok0>>2)&MASK(0, 0);
  ch[9] |= (c->K_att_ok0<<6)&MASK(7, 6);
  ch[9] |= (c->delta_fap_ok0<<0)&MASK(5, 0);
  ch[10] |= (c->mshu_ok_dist_unsel<<7)&MASK(7, 7);
  ch[10] |= (c->delta_fap_pr_l_ok1<<1)&MASK(6, 1);
  ch[10] |= (c->K_att_ok1>>2)&MASK(0, 0);
  ch[11] |= (c->K_att_ok1<<6)&MASK(7, 6);
  ch[11] |= (c->delta_fap_ok1<<0)&MASK(5, 0);
  ch[12] |= (c->mshu_ok_fap_unsel<<7)&MASK(7, 7);
  ch[12] |= (c->delta_fap_pr_l_ok2<<1)&MASK(6, 1);
  ch[12] |= (c->K_att_ok2>>2)&MASK(0, 0);
  ch[13] |= (c->K_att_ok2<<6)&MASK(7, 6);
  ch[13] |= (c->delta_fap_ok2<<0)&MASK(5, 0);
  ch[14] |= (c->mshu_ok_caru_unsel<<7)&MASK(7, 7);
  ch[14] |= (c->delta_fap_pr_l_ok3<<1)&MASK(6, 1);
  ch[14] |= (c->K_att_ok3>>2)&MASK(0, 0);
  ch[15] |= (c->K_att_ok3<<6)&MASK(7, 6);
  ch[15] |= (c->delta_fap_ok3<<0)&MASK(5, 0);
  ch[16] |= (c->mshu_ok_et_sel<<7)&MASK(7, 7);
  ch[16] |= (c->delta_fap_pr_l_ok4<<1)&MASK(6, 1);
  ch[16] |= (c->K_att_ok4>>2)&MASK(0, 0);
  ch[17] |= (c->K_att_ok4<<6)&MASK(7, 6);
  ch[17] |= (c->delta_fap_ok4<<0)&MASK(5, 0);
  ch[18] |= (c->mshu_ok_dist_sel<<7)&MASK(7, 7);
  ch[18] |= (c->delta_fap_pr_l_ok5<<1)&MASK(6, 1);
  ch[18] |= (c->K_att_ok5>>2)&MASK(0, 0);
  ch[19] |= (c->K_att_ok5<<6)&MASK(7, 6);
  ch[19] |= (c->delta_fap_ok5<<0)&MASK(5, 0);
  ch[20] |= (c->mshu_ok_fap_sel<<7)&MASK(7, 7);
  ch[20] |= (c->delta_fap_pr_l_ok6<<1)&MASK(6, 1);
  ch[20] |= (c->K_att_ok6>>2)&MASK(0, 0);
  ch[21] |= (c->K_att_ok6<<6)&MASK(7, 6);
  ch[21] |= (c->delta_fap_ok6<<0)&MASK(5, 0);
  ch[22] |= (c->mshu_ok_caru_sel<<7)&MASK(7, 7);
  ch[22] |= (c->delta_fap_pr_l_ok7<<1)&MASK(6, 1);
  ch[22] |= (c->K_att_ok7>>2)&MASK(0, 0);
  ch[23] |= (c->K_att_ok7<<6)&MASK(7, 6);
  ch[23] |= (c->delta_fap_ok7<<0)&MASK(5, 0);
  ch[24] |= (c->key_dist_unsel<<7)&MASK(7, 7);
  ch[24] |= (c->delta_fap_pr_l_ok8<<1)&MASK(6, 1);
  ch[24] |= (c->K_att_ok8>>2)&MASK(0, 0);
  ch[25] |= (c->K_att_ok8<<6)&MASK(7, 6);
  ch[25] |= (c->delta_fap_ok8<<0)&MASK(5, 0);
  ch[26] |= (c->key_fap_unsel<<7)&MASK(7, 7);
  ch[26] |= (c->delta_fap_pr_l_ok9<<1)&MASK(6, 1);
  ch[26] |= (c->K_att_ok9>>2)&MASK(0, 0);
  ch[27] |= (c->K_att_ok9<<6)&MASK(7, 6);
  ch[27] |= (c->delta_fap_ok9<<0)&MASK(5, 0);
  ch[28] |= (c->key_caru_unsel<<7)&MASK(7, 7);
  ch[28] |= (c->delta_fap_pr_l_ok10<<1)&MASK(6, 1);
  ch[28] |= (c->K_att_ok10>>2)&MASK(0, 0);
  ch[29] |= (c->K_att_ok10<<6)&MASK(7, 6);
  ch[29] |= (c->delta_fap_ok10<<0)&MASK(5, 0);
  ch[30] |= (c->key_dist_sel<<7)&MASK(7, 7);
  ch[30] |= (c->delta_fap_pr_l_ok11<<1)&MASK(6, 1);
  ch[30] |= (c->K_att_ok11>>2)&MASK(0, 0);
  ch[31] |= (c->K_att_ok11<<6)&MASK(7, 6);
  ch[31] |= (c->delta_fap_ok11<<0)&MASK(5, 0);
  ch[32] |= (c->key_fap_sel<<7)&MASK(7, 7);
  ch[32] |= (c->delta_fap_pr_l_ok12<<1)&MASK(6, 1);
  ch[32] |= (c->K_att_ok12>>2)&MASK(0, 0);
  ch[33] |= (c->K_att_ok12<<6)&MASK(7, 6);
  ch[33] |= (c->delta_fap_ok12<<0)&MASK(5, 0);
  ch[34] |= (c->key_caru_sel<<7)&MASK(7, 7);
  ch[34] |= (c->delta_fap_pr_l_ok13<<1)&MASK(6, 1);
  ch[34] |= (c->K_att_ok13>>2)&MASK(0, 0);
  ch[35] |= (c->K_att_ok13<<6)&MASK(7, 6);
  ch[35] |= (c->delta_fap_ok13<<0)&MASK(5, 0);
  ch[36] |= (c->mod_et_unsel<<7)&MASK(7, 7);
  ch[36] |= (c->delta_fap_pr_l_ok14<<1)&MASK(6, 1);
  ch[36] |= (c->K_att_ok14>>2)&MASK(0, 0);
  ch[37] |= (c->K_att_ok14<<6)&MASK(7, 6);
  ch[37] |= (c->delta_fap_ok14<<0)&MASK(5, 0);
  ch[38] |= (c->mod_et_sel<<7)&MASK(7, 7);
  ch[38] |= (c->delta_fap_pr_l_ok15<<1)&MASK(6, 1);
  ch[38] |= (c->K_att_ok15>>2)&MASK(0, 0);
  ch[39] |= (c->K_att_ok15<<6)&MASK(7, 6);
  ch[39] |= (c->delta_fap_ok15<<0)&MASK(5, 0);
  ch[40] |= (c->mshu_kk_col0<<7)&MASK(7, 7);
  ch[40] |= (c->K_att_kk0<<4)&MASK(6, 4);
  ch[40] |= (c->delta_fap_kk0>>2)&MASK(3, 0);
  ch[41] |= (c->delta_fap_kk0<<6)&MASK(7, 6);
  ch[41] |= (c->delta_fap_pd0<<0)&MASK(5, 0);
  ch[42] |= (c->mshu_kk_col1<<7)&MASK(7, 7);
  ch[42] |= (c->K_att_kk1<<4)&MASK(6, 4);
  ch[42] |= (c->delta_fap_kk1>>2)&MASK(3, 0);
  ch[43] |= (c->delta_fap_kk1<<6)&MASK(7, 6);
  ch[43] |= (c->delta_fap_pd1<<0)&MASK(5, 0);
  ch[44] |= (c->mshu_kk_col2<<7)&MASK(7, 7);
  ch[44] |= (c->K_att_kk2<<4)&MASK(6, 4);
  ch[44] |= (c->delta_fap_kk2>>2)&MASK(3, 0);
  ch[45] |= (c->delta_fap_kk2<<6)&MASK(7, 6);
  ch[45] |= (c->delta_fap_pd2<<0)&MASK(5, 0);
  ch[46] |= (c->mshu_kk_col3<<7)&MASK(7, 7);
  ch[46] |= (c->K_att_kk3<<4)&MASK(6, 4);
  ch[46] |= (c->delta_fap_kk3>>2)&MASK(3, 0);
  ch[47] |= (c->delta_fap_kk3<<6)&MASK(7, 6);
  ch[47] |= (c->sel_enter_AK_5_0<<0)&MASK(5, 0);
  ch[48] |= (c->mshu_kk_col4<<7)&MASK(7, 7);
  ch[48] |= (c->K_att_kk4<<4)&MASK(6, 4);
  ch[48] |= (c->delta_fap_kk4>>2)&MASK(3, 0);
  ch[49] |= (c->delta_fap_kk4<<6)&MASK(7, 6);
  ch[49] |= (c->sel_enter_AK_6<<0)&MASK(5, 0);
  ch[50] |= (c->mshu_kk_col5<<7)&MASK(7, 7);
  ch[50] |= (c->K_att_kk5<<4)&MASK(6, 4);
  ch[50] |= (c->delta_fap_kk5>>2)&MASK(3, 0);
  ch[51] |= (c->delta_fap_kk5<<6)&MASK(7, 6);
  ch[51] |= (c->sel_control_com_5_0<<0)&MASK(5, 0);
  ch[52] |= (c->mshu_kk_col6<<7)&MASK(7, 7);
  ch[52] |= (c->K_att_kk6<<4)&MASK(6, 4);
  ch[52] |= (c->delta_fap_kk6>>2)&MASK(3, 0);
  ch[53] |= (c->delta_fap_kk6<<6)&MASK(7, 6);
  ch[53] |= (c->sel_control_com_6<<0)&MASK(5, 0);
  ch[54] |= (c->mshu_kk_col7<<7)&MASK(7, 7);
  ch[54] |= (c->K_att_kk7<<4)&MASK(6, 4);
  ch[54] |= (c->delta_fap_kk7>>2)&MASK(3, 0);
  ch[55] |= (c->delta_fap_kk7<<6)&MASK(7, 6);


  return 0;
}

int Unmarshal_regime_key_fap(regime_key_fap *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->N_strobe_contr |= (ch[2]>>4)&MASK(3, 0);
  c->N_k_t |= (ch[2]>>0)&MASK(3, 0);
  c->regime |= (ch[3]>>3)&MASK(4, 0);
  c->R_P |= (ch[3]>>0)&MASK(2, 0);
  c->N_col_kuk |= (ch[4]<<1)&MASK(5, 1);
  c->N_col_kuk |= (ch[5]>>7)&MASK(0, 0);
  c->N_row_kuk |= (ch[5]>>4)&MASK(2, 0);
  c->N_fr_kuk |= (ch[5]>>0)&MASK(3, 0);
  c->N_col_fap |= (ch[6]>>2)&MASK(5, 0);
  c->N_row_fap |= (ch[6]<<1)&MASK(2, 1);
  c->N_row_fap |= (ch[7]>>7)&MASK(0, 0);
  c->N_work_put_fap |= (ch[7]>>0)&MASK(6, 0);
  c->mshu_ok_et_unsel |= (ch[8]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok0 |= (ch[8]>>1)&MASK(5, 0);
  c->K_att_ok0 |= (ch[8]<<2)&MASK(2, 2);
  c->K_att_ok0 |= (ch[9]>>6)&MASK(1, 0);
  c->delta_fap_ok0 |= (ch[9]>>0)&MASK(5, 0);
  c->mshu_ok_dist_unsel |= (ch[10]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok1 |= (ch[10]>>1)&MASK(5, 0);
  c->K_att_ok1 |= (ch[10]<<2)&MASK(2, 2);
  c->K_att_ok1 |= (ch[11]>>6)&MASK(1, 0);
  c->delta_fap_ok1 |= (ch[11]>>0)&MASK(5, 0);
  c->mshu_ok_fap_unsel |= (ch[12]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok2 |= (ch[12]>>1)&MASK(5, 0);
  c->K_att_ok2 |= (ch[12]<<2)&MASK(2, 2);
  c->K_att_ok2 |= (ch[13]>>6)&MASK(1, 0);
  c->delta_fap_ok2 |= (ch[13]>>0)&MASK(5, 0);
  c->mshu_ok_caru_unsel |= (ch[14]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok3 |= (ch[14]>>1)&MASK(5, 0);
  c->K_att_ok3 |= (ch[14]<<2)&MASK(2, 2);
  c->K_att_ok3 |= (ch[15]>>6)&MASK(1, 0);
  c->delta_fap_ok3 |= (ch[15]>>0)&MASK(5, 0);
  c->mshu_ok_et_sel |= (ch[16]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok4 |= (ch[16]>>1)&MASK(5, 0);
  c->K_att_ok4 |= (ch[16]<<2)&MASK(2, 2);
  c->K_att_ok4 |= (ch[17]>>6)&MASK(1, 0);
  c->delta_fap_ok4 |= (ch[17]>>0)&MASK(5, 0);
  c->mshu_ok_dist_sel |= (ch[18]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok5 |= (ch[18]>>1)&MASK(5, 0);
  c->K_att_ok5 |= (ch[18]<<2)&MASK(2, 2);
  c->K_att_ok5 |= (ch[19]>>6)&MASK(1, 0);
  c->delta_fap_ok5 |= (ch[19]>>0)&MASK(5, 0);
  c->mshu_ok_fap_sel |= (ch[20]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok6 |= (ch[20]>>1)&MASK(5, 0);
  c->K_att_ok6 |= (ch[20]<<2)&MASK(2, 2);
  c->K_att_ok6 |= (ch[21]>>6)&MASK(1, 0);
  c->delta_fap_ok6 |= (ch[21]>>0)&MASK(5, 0);
  c->mshu_ok_caru_sel |= (ch[22]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok7 |= (ch[22]>>1)&MASK(5, 0);
  c->K_att_ok7 |= (ch[22]<<2)&MASK(2, 2);
  c->K_att_ok7 |= (ch[23]>>6)&MASK(1, 0);
  c->delta_fap_ok7 |= (ch[23]>>0)&MASK(5, 0);
  c->key_dist_unsel |= (ch[24]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok8 |= (ch[24]>>1)&MASK(5, 0);
  c->K_att_ok8 |= (ch[24]<<2)&MASK(2, 2);
  c->K_att_ok8 |= (ch[25]>>6)&MASK(1, 0);
  c->delta_fap_ok8 |= (ch[25]>>0)&MASK(5, 0);
  c->key_fap_unsel |= (ch[26]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok9 |= (ch[26]>>1)&MASK(5, 0);
  c->K_att_ok9 |= (ch[26]<<2)&MASK(2, 2);
  c->K_att_ok9 |= (ch[27]>>6)&MASK(1, 0);
  c->delta_fap_ok9 |= (ch[27]>>0)&MASK(5, 0);
  c->key_caru_unsel |= (ch[28]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok10 |= (ch[28]>>1)&MASK(5, 0);
  c->K_att_ok10 |= (ch[28]<<2)&MASK(2, 2);
  c->K_att_ok10 |= (ch[29]>>6)&MASK(1, 0);
  c->delta_fap_ok10 |= (ch[29]>>0)&MASK(5, 0);
  c->key_dist_sel |= (ch[30]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok11 |= (ch[30]>>1)&MASK(5, 0);
  c->K_att_ok11 |= (ch[30]<<2)&MASK(2, 2);
  c->K_att_ok11 |= (ch[31]>>6)&MASK(1, 0);
  c->delta_fap_ok11 |= (ch[31]>>0)&MASK(5, 0);
  c->key_fap_sel |= (ch[32]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok12 |= (ch[32]>>1)&MASK(5, 0);
  c->K_att_ok12 |= (ch[32]<<2)&MASK(2, 2);
  c->K_att_ok12 |= (ch[33]>>6)&MASK(1, 0);
  c->delta_fap_ok12 |= (ch[33]>>0)&MASK(5, 0);
  c->key_caru_sel |= (ch[34]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok13 |= (ch[34]>>1)&MASK(5, 0);
  c->K_att_ok13 |= (ch[34]<<2)&MASK(2, 2);
  c->K_att_ok13 |= (ch[35]>>6)&MASK(1, 0);
  c->delta_fap_ok13 |= (ch[35]>>0)&MASK(5, 0);
  c->mod_et_unsel |= (ch[36]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok14 |= (ch[36]>>1)&MASK(5, 0);
  c->K_att_ok14 |= (ch[36]<<2)&MASK(2, 2);
  c->K_att_ok14 |= (ch[37]>>6)&MASK(1, 0);
  c->delta_fap_ok14 |= (ch[37]>>0)&MASK(5, 0);
  c->mod_et_sel |= (ch[38]>>7)&MASK(0, 0);
  c->delta_fap_pr_l_ok15 |= (ch[38]>>1)&MASK(5, 0);
  c->K_att_ok15 |= (ch[38]<<2)&MASK(2, 2);
  c->K_att_ok15 |= (ch[39]>>6)&MASK(1, 0);
  c->delta_fap_ok15 |= (ch[39]>>0)&MASK(5, 0);
  c->mshu_kk_col0 |= (ch[40]>>7)&MASK(0, 0);
  c->K_att_kk0 |= (ch[40]>>4)&MASK(2, 0);
  c->delta_fap_kk0 |= (ch[40]<<2)&MASK(5, 2);
  c->delta_fap_kk0 |= (ch[41]>>6)&MASK(1, 0);
  c->delta_fap_pd0 |= (ch[41]>>0)&MASK(5, 0);
  c->mshu_kk_col1 |= (ch[42]>>7)&MASK(0, 0);
  c->K_att_kk1 |= (ch[42]>>4)&MASK(2, 0);
  c->delta_fap_kk1 |= (ch[42]<<2)&MASK(5, 2);
  c->delta_fap_kk1 |= (ch[43]>>6)&MASK(1, 0);
  c->delta_fap_pd1 |= (ch[43]>>0)&MASK(5, 0);
  c->mshu_kk_col2 |= (ch[44]>>7)&MASK(0, 0);
  c->K_att_kk2 |= (ch[44]>>4)&MASK(2, 0);
  c->delta_fap_kk2 |= (ch[44]<<2)&MASK(5, 2);
  c->delta_fap_kk2 |= (ch[45]>>6)&MASK(1, 0);
  c->delta_fap_pd2 |= (ch[45]>>0)&MASK(5, 0);
  c->mshu_kk_col3 |= (ch[46]>>7)&MASK(0, 0);
  c->K_att_kk3 |= (ch[46]>>4)&MASK(2, 0);
  c->delta_fap_kk3 |= (ch[46]<<2)&MASK(5, 2);
  c->delta_fap_kk3 |= (ch[47]>>6)&MASK(1, 0);
  c->sel_enter_AK_5_0 |= (ch[47]>>0)&MASK(5, 0);
  c->mshu_kk_col4 |= (ch[48]>>7)&MASK(0, 0);
  c->K_att_kk4 |= (ch[48]>>4)&MASK(2, 0);
  c->delta_fap_kk4 |= (ch[48]<<2)&MASK(5, 2);
  c->delta_fap_kk4 |= (ch[49]>>6)&MASK(1, 0);
  c->sel_enter_AK_6 |= (ch[49]>>0)&MASK(5, 0);
  c->mshu_kk_col5 |= (ch[50]>>7)&MASK(0, 0);
  c->K_att_kk5 |= (ch[50]>>4)&MASK(2, 0);
  c->delta_fap_kk5 |= (ch[50]<<2)&MASK(5, 2);
  c->delta_fap_kk5 |= (ch[51]>>6)&MASK(1, 0);
  c->sel_control_com_5_0 |= (ch[51]>>0)&MASK(5, 0);
  c->mshu_kk_col6 |= (ch[52]>>7)&MASK(0, 0);
  c->K_att_kk6 |= (ch[52]>>4)&MASK(2, 0);
  c->delta_fap_kk6 |= (ch[52]<<2)&MASK(5, 2);
  c->delta_fap_kk6 |= (ch[53]>>6)&MASK(1, 0);
  c->sel_control_com_6 |= (ch[53]>>0)&MASK(5, 0);
  c->mshu_kk_col7 |= (ch[54]>>7)&MASK(0, 0);
  c->K_att_kk7 |= (ch[54]>>4)&MASK(2, 0);
  c->delta_fap_kk7 |= (ch[54]<<2)&MASK(5, 2);
  c->delta_fap_kk7 |= (ch[55]>>6)&MASK(1, 0);


  return 0;
}


int Is_regime_key_fap(void *buff, size_t size) {
  uint8_t addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return 0;

  addr |= (ch[0]>>3)&MASK(4, 0);
  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (addr == 255 && bit_rec_trans == 0 && sub_addr == 1 && count_word == 27) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_front_0_2(front_0_2 *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->addr = 255;
  c->bit_rec_trans = 0;
  c->sub_addr = 2;
  c->count_word = 27;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->delta_fx0_kk0>>2)&MASK(6, 0);
  ch[3] |= (c->delta_fx0_kk0<<6)&MASK(7, 6);
  c->delta_fy0_pm_splitted0 = (c->delta_fy0_pm>>0)&MASK(5, 0);
  c->delta_fy0_pm_splitted1 = (c->delta_fy0_pm>>6)&MASK(5, 0);
  ch[3] |= (c->delta_fy0_pm_splitted0<<0)&MASK(5, 0);
  ch[4] |= (c->delta_fx0_kk1>>2)&MASK(6, 0);
  ch[5] |= (c->delta_fx0_kk1<<6)&MASK(7, 6);
  ch[5] |= (c->delta_fy0_pm_splitted1<<0)&MASK(5, 0);
  ch[6] |= (c->delta_fx0_kk2>>2)&MASK(6, 0);
  ch[7] |= (c->delta_fx0_kk2<<6)&MASK(7, 6);
  c->delta_fy0_pdm_splitted0 = (c->delta_fy0_pdm>>0)&MASK(5, 0);
  c->delta_fy0_pdm_splitted1 = (c->delta_fy0_pdm>>6)&MASK(5, 0);
  ch[7] |= (c->delta_fy0_pdm_splitted0<<0)&MASK(5, 0);
  ch[8] |= (c->delta_fx0_kk3>>2)&MASK(6, 0);
  ch[9] |= (c->delta_fx0_kk3<<6)&MASK(7, 6);
  ch[9] |= (c->delta_fy0_pdm_splitted1<<0)&MASK(5, 0);
  ch[10] |= (c->delta_fx0_kk4>>2)&MASK(6, 0);
  ch[11] |= (c->delta_fx0_kk4<<6)&MASK(7, 6);
  c->delta_fy0_pkm_splitted0 = (c->delta_fy0_pkm>>0)&MASK(5, 0);
  c->delta_fy0_pkm_splitted1 = (c->delta_fy0_pkm>>6)&MASK(5, 0);
  ch[11] |= (c->delta_fy0_pkm_splitted0<<0)&MASK(5, 0);
  ch[12] |= (c->delta_fx0_kk5>>2)&MASK(6, 0);
  ch[13] |= (c->delta_fx0_kk5<<6)&MASK(7, 6);
  ch[13] |= (c->delta_fy0_pkm_splitted1<<0)&MASK(5, 0);
  ch[14] |= (c->delta_fx0_kk6>>2)&MASK(6, 0);
  ch[15] |= (c->delta_fx0_kk6<<6)&MASK(7, 6);
  c->delta_fx0_ok_splitted0 = (c->delta_fx0_ok>>0)&MASK(5, 0);
  c->delta_fx0_ok_splitted1 = (c->delta_fx0_ok>>6)&MASK(5, 0);
  ch[15] |= (c->delta_fx0_ok_splitted0<<0)&MASK(5, 0);
  ch[16] |= (c->delta_fx0_kk7>>2)&MASK(6, 0);
  ch[17] |= (c->delta_fx0_kk7<<6)&MASK(7, 6);
  ch[17] |= (c->delta_fx0_ok_splitted1<<0)&MASK(5, 0);
  ch[18] |= (c->N_work_put_0<<1)&MASK(7, 1);
  ch[18] |= (c->delta_fx0_pr_l>>8)&MASK(0, 0);
  ch[19] |= (c->delta_fx0_pr_l<<0)&MASK(7, 0);
  ch[20] |= (c->delta_fx1_kk0>>2)&MASK(6, 0);
  ch[21] |= (c->delta_fx1_kk0<<6)&MASK(7, 6);
  c->delta_fy1_pm_splitted0 = (c->delta_fy1_pm>>0)&MASK(5, 0);
  c->delta_fy1_pm_splitted1 = (c->delta_fy1_pm>>6)&MASK(5, 0);
  ch[21] |= (c->delta_fy1_pm_splitted0<<0)&MASK(5, 0);
  ch[22] |= (c->delta_fx1_kk1>>2)&MASK(6, 0);
  ch[23] |= (c->delta_fx1_kk1<<6)&MASK(7, 6);
  ch[23] |= (c->delta_fy1_pm_splitted1<<0)&MASK(5, 0);
  ch[24] |= (c->delta_fx1_kk2>>2)&MASK(6, 0);
  ch[25] |= (c->delta_fx1_kk2<<6)&MASK(7, 6);
  c->delta_fy1_pdm_splitted0 = (c->delta_fy1_pdm>>0)&MASK(5, 0);
  c->delta_fy1_pdm_splitted1 = (c->delta_fy1_pdm>>6)&MASK(5, 0);
  ch[25] |= (c->delta_fy1_pdm_splitted0<<0)&MASK(5, 0);
  ch[26] |= (c->delta_fx1_kk3>>2)&MASK(6, 0);
  ch[27] |= (c->delta_fx1_kk3<<6)&MASK(7, 6);
  ch[27] |= (c->delta_fy1_pdm_splitted1<<0)&MASK(5, 0);
  ch[28] |= (c->delta_fx1_kk4>>2)&MASK(6, 0);
  ch[29] |= (c->delta_fx1_kk4<<6)&MASK(7, 6);
  c->delta_fy1_pkm_splitted0 = (c->delta_fy1_pkm>>0)&MASK(5, 0);
  c->delta_fy1_pkm_splitted1 = (c->delta_fy1_pkm>>6)&MASK(5, 0);
  ch[29] |= (c->delta_fy1_pkm_splitted0<<0)&MASK(5, 0);
  ch[30] |= (c->delta_fx1_kk5>>2)&MASK(6, 0);
  ch[31] |= (c->delta_fx1_kk5<<6)&MASK(7, 6);
  ch[31] |= (c->delta_fy1_pkm_splitted1<<0)&MASK(5, 0);
  ch[32] |= (c->delta_fx1_kk6>>2)&MASK(6, 0);
  ch[33] |= (c->delta_fx1_kk6<<6)&MASK(7, 6);
  c->delta_fx1_ok_splitted0 = (c->delta_fx1_ok>>0)&MASK(5, 0);
  c->delta_fx1_ok_splitted1 = (c->delta_fx1_ok>>6)&MASK(5, 0);
  ch[33] |= (c->delta_fx1_ok_splitted0<<0)&MASK(5, 0);
  ch[34] |= (c->delta_fx1_kk7>>2)&MASK(6, 0);
  ch[35] |= (c->delta_fx1_kk7<<6)&MASK(7, 6);
  ch[35] |= (c->delta_fx1_ok_splitted1<<0)&MASK(5, 0);
  ch[36] |= (c->N_work_put_1<<1)&MASK(7, 1);
  ch[36] |= (c->delta_fx1_pr_l>>8)&MASK(0, 0);
  ch[37] |= (c->delta_fx1_pr_l<<0)&MASK(7, 0);
  ch[38] |= (c->delta_fx2_kk0>>2)&MASK(6, 0);
  ch[39] |= (c->delta_fx2_kk0<<6)&MASK(7, 6);
  c->delta_fy2_pm_splitted0 = (c->delta_fy2_pm>>0)&MASK(5, 0);
  c->delta_fy2_pm_splitted1 = (c->delta_fy2_pm>>6)&MASK(5, 0);
  ch[39] |= (c->delta_fy2_pm_splitted0<<0)&MASK(5, 0);
  ch[40] |= (c->delta_fx2_kk1>>2)&MASK(6, 0);
  ch[41] |= (c->delta_fx2_kk1<<6)&MASK(7, 6);
  ch[41] |= (c->delta_fy2_pm_splitted1<<0)&MASK(5, 0);
  ch[42] |= (c->delta_fx2_kk2>>2)&MASK(6, 0);
  ch[43] |= (c->delta_fx2_kk2<<6)&MASK(7, 6);
  c->delta_fy2_pdm_splitted0 = (c->delta_fy2_pdm>>0)&MASK(5, 0);
  c->delta_fy2_pdm_splitted1 = (c->delta_fy2_pdm>>6)&MASK(5, 0);
  ch[43] |= (c->delta_fy2_pdm_splitted0<<0)&MASK(5, 0);
  ch[44] |= (c->delta_fx2_kk3>>2)&MASK(6, 0);
  ch[45] |= (c->delta_fx2_kk3<<6)&MASK(7, 6);
  ch[45] |= (c->delta_fy2_pdm_splitted1<<0)&MASK(5, 0);
  ch[46] |= (c->delta_fx2_kk4>>2)&MASK(6, 0);
  ch[47] |= (c->delta_fx2_kk4<<6)&MASK(7, 6);
  c->delta_fy2_pkm_splitted0 = (c->delta_fy2_pkm>>0)&MASK(5, 0);
  c->delta_fy2_pkm_splitted1 = (c->delta_fy2_pkm>>6)&MASK(5, 0);
  ch[47] |= (c->delta_fy2_pkm_splitted0<<0)&MASK(5, 0);
  ch[48] |= (c->delta_fx2_kk5>>2)&MASK(6, 0);
  ch[49] |= (c->delta_fx2_kk5<<6)&MASK(7, 6);
  ch[49] |= (c->delta_fy2_pkm_splitted1<<0)&MASK(5, 0);
  ch[50] |= (c->delta_fx2_kk6>>2)&MASK(6, 0);
  ch[51] |= (c->delta_fx2_kk6<<6)&MASK(7, 6);
  c->delta_fx2_ok_splitted0 = (c->delta_fx2_ok>>0)&MASK(5, 0);
  c->delta_fx2_ok_splitted1 = (c->delta_fx2_ok>>6)&MASK(5, 0);
  ch[51] |= (c->delta_fx2_ok_splitted0<<0)&MASK(5, 0);
  ch[52] |= (c->delta_fx2_kk7>>2)&MASK(6, 0);
  ch[53] |= (c->delta_fx2_kk7<<6)&MASK(7, 6);
  ch[53] |= (c->delta_fx2_ok_splitted1<<0)&MASK(5, 0);
  ch[54] |= (c->N_work_put_2<<1)&MASK(7, 1);
  ch[54] |= (c->delta_fx2_pr_l>>8)&MASK(0, 0);
  ch[55] |= (c->delta_fx2_pr_l<<0)&MASK(7, 0);


  return 0;
}

int Unmarshal_front_0_2(front_0_2 *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->delta_fx0_kk0 |= (ch[2]<<2)&MASK(8, 2);
  c->delta_fx0_kk0 |= (ch[3]>>6)&MASK(1, 0);
  c->delta_fy0_pm_splitted0 |= (ch[3]>>0)&MASK(5, 0);
  c->delta_fx0_kk1 |= (ch[4]<<2)&MASK(8, 2);
  c->delta_fx0_kk1 |= (ch[5]>>6)&MASK(1, 0);
  c->delta_fy0_pm_splitted1 |= (ch[5]>>0)&MASK(5, 0);
  c->delta_fx0_kk2 |= (ch[6]<<2)&MASK(8, 2);
  c->delta_fx0_kk2 |= (ch[7]>>6)&MASK(1, 0);
  c->delta_fy0_pdm_splitted0 |= (ch[7]>>0)&MASK(5, 0);
  c->delta_fx0_kk3 |= (ch[8]<<2)&MASK(8, 2);
  c->delta_fx0_kk3 |= (ch[9]>>6)&MASK(1, 0);
  c->delta_fy0_pdm_splitted1 |= (ch[9]>>0)&MASK(5, 0);
  c->delta_fx0_kk4 |= (ch[10]<<2)&MASK(8, 2);
  c->delta_fx0_kk4 |= (ch[11]>>6)&MASK(1, 0);
  c->delta_fy0_pkm_splitted0 |= (ch[11]>>0)&MASK(5, 0);
  c->delta_fx0_kk5 |= (ch[12]<<2)&MASK(8, 2);
  c->delta_fx0_kk5 |= (ch[13]>>6)&MASK(1, 0);
  c->delta_fy0_pkm_splitted1 |= (ch[13]>>0)&MASK(5, 0);
  c->delta_fx0_kk6 |= (ch[14]<<2)&MASK(8, 2);
  c->delta_fx0_kk6 |= (ch[15]>>6)&MASK(1, 0);
  c->delta_fx0_ok_splitted0 |= (ch[15]>>0)&MASK(5, 0);
  c->delta_fx0_kk7 |= (ch[16]<<2)&MASK(8, 2);
  c->delta_fx0_kk7 |= (ch[17]>>6)&MASK(1, 0);
  c->delta_fx0_ok_splitted1 |= (ch[17]>>0)&MASK(5, 0);
  c->N_work_put_0 |= (ch[18]>>1)&MASK(6, 0);
  c->delta_fx0_pr_l |= (ch[18]<<8)&MASK(8, 8);
  c->delta_fx0_pr_l |= (ch[19]>>0)&MASK(7, 0);
  c->delta_fx1_kk0 |= (ch[20]<<2)&MASK(8, 2);
  c->delta_fx1_kk0 |= (ch[21]>>6)&MASK(1, 0);
  c->delta_fy1_pm_splitted0 |= (ch[21]>>0)&MASK(5, 0);
  c->delta_fx1_kk1 |= (ch[22]<<2)&MASK(8, 2);
  c->delta_fx1_kk1 |= (ch[23]>>6)&MASK(1, 0);
  c->delta_fy1_pm_splitted1 |= (ch[23]>>0)&MASK(5, 0);
  c->delta_fx1_kk2 |= (ch[24]<<2)&MASK(8, 2);
  c->delta_fx1_kk2 |= (ch[25]>>6)&MASK(1, 0);
  c->delta_fy1_pdm_splitted0 |= (ch[25]>>0)&MASK(5, 0);
  c->delta_fx1_kk3 |= (ch[26]<<2)&MASK(8, 2);
  c->delta_fx1_kk3 |= (ch[27]>>6)&MASK(1, 0);
  c->delta_fy1_pdm_splitted1 |= (ch[27]>>0)&MASK(5, 0);
  c->delta_fx1_kk4 |= (ch[28]<<2)&MASK(8, 2);
  c->delta_fx1_kk4 |= (ch[29]>>6)&MASK(1, 0);
  c->delta_fy1_pkm_splitted0 |= (ch[29]>>0)&MASK(5, 0);
  c->delta_fx1_kk5 |= (ch[30]<<2)&MASK(8, 2);
  c->delta_fx1_kk5 |= (ch[31]>>6)&MASK(1, 0);
  c->delta_fy1_pkm_splitted1 |= (ch[31]>>0)&MASK(5, 0);
  c->delta_fx1_kk6 |= (ch[32]<<2)&MASK(8, 2);
  c->delta_fx1_kk6 |= (ch[33]>>6)&MASK(1, 0);
  c->delta_fx1_ok_splitted0 |= (ch[33]>>0)&MASK(5, 0);
  c->delta_fx1_kk7 |= (ch[34]<<2)&MASK(8, 2);
  c->delta_fx1_kk7 |= (ch[35]>>6)&MASK(1, 0);
  c->delta_fx1_ok_splitted1 |= (ch[35]>>0)&MASK(5, 0);
  c->N_work_put_1 |= (ch[36]>>1)&MASK(6, 0);
  c->delta_fx1_pr_l |= (ch[36]<<8)&MASK(8, 8);
  c->delta_fx1_pr_l |= (ch[37]>>0)&MASK(7, 0);
  c->delta_fx2_kk0 |= (ch[38]<<2)&MASK(8, 2);
  c->delta_fx2_kk0 |= (ch[39]>>6)&MASK(1, 0);
  c->delta_fy2_pm_splitted0 |= (ch[39]>>0)&MASK(5, 0);
  c->delta_fx2_kk1 |= (ch[40]<<2)&MASK(8, 2);
  c->delta_fx2_kk1 |= (ch[41]>>6)&MASK(1, 0);
  c->delta_fy2_pm_splitted1 |= (ch[41]>>0)&MASK(5, 0);
  c->delta_fx2_kk2 |= (ch[42]<<2)&MASK(8, 2);
  c->delta_fx2_kk2 |= (ch[43]>>6)&MASK(1, 0);
  c->delta_fy2_pdm_splitted0 |= (ch[43]>>0)&MASK(5, 0);
  c->delta_fx2_kk3 |= (ch[44]<<2)&MASK(8, 2);
  c->delta_fx2_kk3 |= (ch[45]>>6)&MASK(1, 0);
  c->delta_fy2_pdm_splitted1 |= (ch[45]>>0)&MASK(5, 0);
  c->delta_fx2_kk4 |= (ch[46]<<2)&MASK(8, 2);
  c->delta_fx2_kk4 |= (ch[47]>>6)&MASK(1, 0);
  c->delta_fy2_pkm_splitted0 |= (ch[47]>>0)&MASK(5, 0);
  c->delta_fx2_kk5 |= (ch[48]<<2)&MASK(8, 2);
  c->delta_fx2_kk5 |= (ch[49]>>6)&MASK(1, 0);
  c->delta_fy2_pkm_splitted1 |= (ch[49]>>0)&MASK(5, 0);
  c->delta_fx2_kk6 |= (ch[50]<<2)&MASK(8, 2);
  c->delta_fx2_kk6 |= (ch[51]>>6)&MASK(1, 0);
  c->delta_fx2_ok_splitted0 |= (ch[51]>>0)&MASK(5, 0);
  c->delta_fx2_kk7 |= (ch[52]<<2)&MASK(8, 2);
  c->delta_fx2_kk7 |= (ch[53]>>6)&MASK(1, 0);
  c->delta_fx2_ok_splitted1 |= (ch[53]>>0)&MASK(5, 0);
  c->N_work_put_2 |= (ch[54]>>1)&MASK(6, 0);
  c->delta_fx2_pr_l |= (ch[54]<<8)&MASK(8, 8);
  c->delta_fx2_pr_l |= (ch[55]>>0)&MASK(7, 0);
  c->delta_fy0_pm |= (c->delta_fy0_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy0_pm |= (c->delta_fy0_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy0_pdm |= (c->delta_fy0_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy0_pdm |= (c->delta_fy0_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy0_pkm |= (c->delta_fy0_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy0_pkm |= (c->delta_fy0_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx0_ok |= (c->delta_fx0_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx0_ok |= (c->delta_fx0_ok_splitted1<<6)&MASK(11, 6);
  c->delta_fy1_pm |= (c->delta_fy1_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy1_pm |= (c->delta_fy1_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy1_pdm |= (c->delta_fy1_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy1_pdm |= (c->delta_fy1_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy1_pkm |= (c->delta_fy1_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy1_pkm |= (c->delta_fy1_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx1_ok |= (c->delta_fx1_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx1_ok |= (c->delta_fx1_ok_splitted1<<6)&MASK(11, 6);
  c->delta_fy2_pm |= (c->delta_fy2_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy2_pm |= (c->delta_fy2_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy2_pdm |= (c->delta_fy2_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy2_pdm |= (c->delta_fy2_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy2_pkm |= (c->delta_fy2_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy2_pkm |= (c->delta_fy2_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx2_ok |= (c->delta_fx2_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx2_ok |= (c->delta_fx2_ok_splitted1<<6)&MASK(11, 6);


  return 0;
}


int Is_front_0_2(void *buff, size_t size) {
  uint8_t addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return 0;

  addr |= (ch[0]>>3)&MASK(4, 0);
  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (addr == 255 && bit_rec_trans == 0 && sub_addr == 2 && count_word == 27) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_front_3_5(front_3_5 *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->addr = 255;
  c->bit_rec_trans = 0;
  c->sub_addr = 3;
  c->count_word = 27;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->delta_fx3_kk0>>2)&MASK(6, 0);
  ch[3] |= (c->delta_fx3_kk0<<6)&MASK(7, 6);
  c->delta_fy3_pm_splitted0 = (c->delta_fy3_pm>>0)&MASK(5, 0);
  c->delta_fy3_pm_splitted1 = (c->delta_fy3_pm>>6)&MASK(5, 0);
  ch[3] |= (c->delta_fy3_pm_splitted0<<0)&MASK(5, 0);
  ch[4] |= (c->delta_fx3_kk1>>2)&MASK(6, 0);
  ch[5] |= (c->delta_fx3_kk1<<6)&MASK(7, 6);
  ch[5] |= (c->delta_fy3_pm_splitted1<<0)&MASK(5, 0);
  ch[6] |= (c->delta_fx3_kk2>>2)&MASK(6, 0);
  ch[7] |= (c->delta_fx3_kk2<<6)&MASK(7, 6);
  c->delta_fy3_pdm_splitted0 = (c->delta_fy3_pdm>>0)&MASK(5, 0);
  c->delta_fy3_pdm_splitted1 = (c->delta_fy3_pdm>>6)&MASK(5, 0);
  ch[7] |= (c->delta_fy3_pdm_splitted0<<0)&MASK(5, 0);
  ch[8] |= (c->delta_fx3_kk3>>2)&MASK(6, 0);
  ch[9] |= (c->delta_fx3_kk3<<6)&MASK(7, 6);
  ch[9] |= (c->delta_fy3_pdm_splitted1<<0)&MASK(5, 0);
  ch[10] |= (c->delta_fx3_kk4>>2)&MASK(6, 0);
  ch[11] |= (c->delta_fx3_kk4<<6)&MASK(7, 6);
  c->delta_fy3_pkm_splitted0 = (c->delta_fy3_pkm>>0)&MASK(5, 0);
  c->delta_fy3_pkm_splitted1 = (c->delta_fy3_pkm>>6)&MASK(5, 0);
  ch[11] |= (c->delta_fy3_pkm_splitted0<<0)&MASK(5, 0);
  ch[12] |= (c->delta_fx3_kk5>>2)&MASK(6, 0);
  ch[13] |= (c->delta_fx3_kk5<<6)&MASK(7, 6);
  ch[13] |= (c->delta_fy3_pkm_splitted1<<0)&MASK(5, 0);
  ch[14] |= (c->delta_fx3_kk6>>2)&MASK(6, 0);
  ch[15] |= (c->delta_fx3_kk6<<6)&MASK(7, 6);
  c->delta_fx3_ok_splitted0 = (c->delta_fx3_ok>>0)&MASK(5, 0);
  c->delta_fx3_ok_splitted1 = (c->delta_fx3_ok>>6)&MASK(5, 0);
  ch[15] |= (c->delta_fx3_ok_splitted0<<0)&MASK(5, 0);
  ch[16] |= (c->delta_fx3_kk7>>2)&MASK(6, 0);
  ch[17] |= (c->delta_fx3_kk7<<6)&MASK(7, 6);
  ch[17] |= (c->delta_fx3_ok_splitted1<<0)&MASK(5, 0);
  ch[18] |= (c->N_work_put_3<<1)&MASK(7, 1);
  ch[18] |= (c->delta_fx3_pr_l>>8)&MASK(0, 0);
  ch[19] |= (c->delta_fx3_pr_l<<0)&MASK(7, 0);
  ch[20] |= (c->delta_fx4_kk0>>2)&MASK(6, 0);
  ch[21] |= (c->delta_fx4_kk0<<6)&MASK(7, 6);
  c->delta_fy4_pm_splitted0 = (c->delta_fy4_pm>>0)&MASK(5, 0);
  c->delta_fy4_pm_splitted1 = (c->delta_fy4_pm>>6)&MASK(5, 0);
  ch[21] |= (c->delta_fy4_pm_splitted0<<0)&MASK(5, 0);
  ch[22] |= (c->delta_fx4_kk1>>2)&MASK(6, 0);
  ch[23] |= (c->delta_fx4_kk1<<6)&MASK(7, 6);
  ch[23] |= (c->delta_fy4_pm_splitted1<<0)&MASK(5, 0);
  ch[24] |= (c->delta_fx4_kk2>>2)&MASK(6, 0);
  ch[25] |= (c->delta_fx4_kk2<<6)&MASK(7, 6);
  c->delta_fy4_pdm_splitted0 = (c->delta_fy4_pdm>>0)&MASK(5, 0);
  c->delta_fy4_pdm_splitted1 = (c->delta_fy4_pdm>>6)&MASK(5, 0);
  ch[25] |= (c->delta_fy4_pdm_splitted0<<0)&MASK(5, 0);
  ch[26] |= (c->delta_fx4_kk3>>2)&MASK(6, 0);
  ch[27] |= (c->delta_fx4_kk3<<6)&MASK(7, 6);
  ch[27] |= (c->delta_fy4_pdm_splitted1<<0)&MASK(5, 0);
  ch[28] |= (c->delta_fx4_kk4>>2)&MASK(6, 0);
  ch[29] |= (c->delta_fx4_kk4<<6)&MASK(7, 6);
  c->delta_fy4_pkm_splitted0 = (c->delta_fy4_pkm>>0)&MASK(5, 0);
  c->delta_fy4_pkm_splitted1 = (c->delta_fy4_pkm>>6)&MASK(5, 0);
  ch[29] |= (c->delta_fy4_pkm_splitted0<<0)&MASK(5, 0);
  ch[30] |= (c->delta_fx4_kk5>>2)&MASK(6, 0);
  ch[31] |= (c->delta_fx4_kk5<<6)&MASK(7, 6);
  ch[31] |= (c->delta_fy4_pkm_splitted1<<0)&MASK(5, 0);
  ch[32] |= (c->delta_fx4_kk6>>2)&MASK(6, 0);
  ch[33] |= (c->delta_fx4_kk6<<6)&MASK(7, 6);
  c->delta_fx4_ok_splitted0 = (c->delta_fx4_ok>>0)&MASK(5, 0);
  c->delta_fx4_ok_splitted1 = (c->delta_fx4_ok>>6)&MASK(5, 0);
  ch[33] |= (c->delta_fx4_ok_splitted0<<0)&MASK(5, 0);
  ch[34] |= (c->delta_fx4_kk7>>2)&MASK(6, 0);
  ch[35] |= (c->delta_fx4_kk7<<6)&MASK(7, 6);
  ch[35] |= (c->delta_fx4_ok_splitted1<<0)&MASK(5, 0);
  ch[36] |= (c->N_work_put_4<<1)&MASK(7, 1);
  ch[36] |= (c->delta_fx4_pr_l>>8)&MASK(0, 0);
  ch[37] |= (c->delta_fx4_pr_l<<0)&MASK(7, 0);
  ch[38] |= (c->delta_fx5_kk0>>2)&MASK(6, 0);
  ch[39] |= (c->delta_fx5_kk0<<6)&MASK(7, 6);
  c->delta_fy5_pm_splitted0 = (c->delta_fy5_pm>>0)&MASK(5, 0);
  c->delta_fy5_pm_splitted1 = (c->delta_fy5_pm>>6)&MASK(5, 0);
  ch[39] |= (c->delta_fy5_pm_splitted0<<0)&MASK(5, 0);
  ch[40] |= (c->delta_fx5_kk1>>2)&MASK(6, 0);
  ch[41] |= (c->delta_fx5_kk1<<6)&MASK(7, 6);
  ch[41] |= (c->delta_fy5_pm_splitted1<<0)&MASK(5, 0);
  ch[42] |= (c->delta_fx5_kk2>>2)&MASK(6, 0);
  ch[43] |= (c->delta_fx5_kk2<<6)&MASK(7, 6);
  c->delta_fy5_pdm_splitted0 = (c->delta_fy5_pdm>>0)&MASK(5, 0);
  c->delta_fy5_pdm_splitted1 = (c->delta_fy5_pdm>>6)&MASK(5, 0);
  ch[43] |= (c->delta_fy5_pdm_splitted0<<0)&MASK(5, 0);
  ch[44] |= (c->delta_fx5_kk3>>2)&MASK(6, 0);
  ch[45] |= (c->delta_fx5_kk3<<6)&MASK(7, 6);
  ch[45] |= (c->delta_fy5_pdm_splitted1<<0)&MASK(5, 0);
  ch[46] |= (c->delta_fx5_kk4>>2)&MASK(6, 0);
  ch[47] |= (c->delta_fx5_kk4<<6)&MASK(7, 6);
  c->delta_fy5_pkm_splitted0 = (c->delta_fy5_pkm>>0)&MASK(5, 0);
  c->delta_fy5_pkm_splitted1 = (c->delta_fy5_pkm>>6)&MASK(5, 0);
  ch[47] |= (c->delta_fy5_pkm_splitted0<<0)&MASK(5, 0);
  ch[48] |= (c->delta_fx5_kk5>>2)&MASK(6, 0);
  ch[49] |= (c->delta_fx5_kk5<<6)&MASK(7, 6);
  ch[49] |= (c->delta_fy5_pkm_splitted1<<0)&MASK(5, 0);
  ch[50] |= (c->delta_fx5_kk6>>2)&MASK(6, 0);
  ch[51] |= (c->delta_fx5_kk6<<6)&MASK(7, 6);
  c->delta_fx5_ok_splitted0 = (c->delta_fx5_ok>>0)&MASK(5, 0);
  c->delta_fx5_ok_splitted1 = (c->delta_fx5_ok>>6)&MASK(5, 0);
  ch[51] |= (c->delta_fx5_ok_splitted0<<0)&MASK(5, 0);
  ch[52] |= (c->delta_fx5_kk7>>2)&MASK(6, 0);
  ch[53] |= (c->delta_fx5_kk7<<6)&MASK(7, 6);
  ch[53] |= (c->delta_fx5_ok_splitted1<<0)&MASK(5, 0);
  ch[54] |= (c->N_work_put_5<<1)&MASK(7, 1);
  ch[54] |= (c->delta_fx5_pr_l>>8)&MASK(0, 0);
  ch[55] |= (c->delta_fx5_pr_l<<0)&MASK(7, 0);


  return 0;
}

int Unmarshal_front_3_5(front_3_5 *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->delta_fx3_kk0 |= (ch[2]<<2)&MASK(8, 2);
  c->delta_fx3_kk0 |= (ch[3]>>6)&MASK(1, 0);
  c->delta_fy3_pm_splitted0 |= (ch[3]>>0)&MASK(5, 0);
  c->delta_fx3_kk1 |= (ch[4]<<2)&MASK(8, 2);
  c->delta_fx3_kk1 |= (ch[5]>>6)&MASK(1, 0);
  c->delta_fy3_pm_splitted1 |= (ch[5]>>0)&MASK(5, 0);
  c->delta_fx3_kk2 |= (ch[6]<<2)&MASK(8, 2);
  c->delta_fx3_kk2 |= (ch[7]>>6)&MASK(1, 0);
  c->delta_fy3_pdm_splitted0 |= (ch[7]>>0)&MASK(5, 0);
  c->delta_fx3_kk3 |= (ch[8]<<2)&MASK(8, 2);
  c->delta_fx3_kk3 |= (ch[9]>>6)&MASK(1, 0);
  c->delta_fy3_pdm_splitted1 |= (ch[9]>>0)&MASK(5, 0);
  c->delta_fx3_kk4 |= (ch[10]<<2)&MASK(8, 2);
  c->delta_fx3_kk4 |= (ch[11]>>6)&MASK(1, 0);
  c->delta_fy3_pkm_splitted0 |= (ch[11]>>0)&MASK(5, 0);
  c->delta_fx3_kk5 |= (ch[12]<<2)&MASK(8, 2);
  c->delta_fx3_kk5 |= (ch[13]>>6)&MASK(1, 0);
  c->delta_fy3_pkm_splitted1 |= (ch[13]>>0)&MASK(5, 0);
  c->delta_fx3_kk6 |= (ch[14]<<2)&MASK(8, 2);
  c->delta_fx3_kk6 |= (ch[15]>>6)&MASK(1, 0);
  c->delta_fx3_ok_splitted0 |= (ch[15]>>0)&MASK(5, 0);
  c->delta_fx3_kk7 |= (ch[16]<<2)&MASK(8, 2);
  c->delta_fx3_kk7 |= (ch[17]>>6)&MASK(1, 0);
  c->delta_fx3_ok_splitted1 |= (ch[17]>>0)&MASK(5, 0);
  c->N_work_put_3 |= (ch[18]>>1)&MASK(6, 0);
  c->delta_fx3_pr_l |= (ch[18]<<8)&MASK(8, 8);
  c->delta_fx3_pr_l |= (ch[19]>>0)&MASK(7, 0);
  c->delta_fx4_kk0 |= (ch[20]<<2)&MASK(8, 2);
  c->delta_fx4_kk0 |= (ch[21]>>6)&MASK(1, 0);
  c->delta_fy4_pm_splitted0 |= (ch[21]>>0)&MASK(5, 0);
  c->delta_fx4_kk1 |= (ch[22]<<2)&MASK(8, 2);
  c->delta_fx4_kk1 |= (ch[23]>>6)&MASK(1, 0);
  c->delta_fy4_pm_splitted1 |= (ch[23]>>0)&MASK(5, 0);
  c->delta_fx4_kk2 |= (ch[24]<<2)&MASK(8, 2);
  c->delta_fx4_kk2 |= (ch[25]>>6)&MASK(1, 0);
  c->delta_fy4_pdm_splitted0 |= (ch[25]>>0)&MASK(5, 0);
  c->delta_fx4_kk3 |= (ch[26]<<2)&MASK(8, 2);
  c->delta_fx4_kk3 |= (ch[27]>>6)&MASK(1, 0);
  c->delta_fy4_pdm_splitted1 |= (ch[27]>>0)&MASK(5, 0);
  c->delta_fx4_kk4 |= (ch[28]<<2)&MASK(8, 2);
  c->delta_fx4_kk4 |= (ch[29]>>6)&MASK(1, 0);
  c->delta_fy4_pkm_splitted0 |= (ch[29]>>0)&MASK(5, 0);
  c->delta_fx4_kk5 |= (ch[30]<<2)&MASK(8, 2);
  c->delta_fx4_kk5 |= (ch[31]>>6)&MASK(1, 0);
  c->delta_fy4_pkm_splitted1 |= (ch[31]>>0)&MASK(5, 0);
  c->delta_fx4_kk6 |= (ch[32]<<2)&MASK(8, 2);
  c->delta_fx4_kk6 |= (ch[33]>>6)&MASK(1, 0);
  c->delta_fx4_ok_splitted0 |= (ch[33]>>0)&MASK(5, 0);
  c->delta_fx4_kk7 |= (ch[34]<<2)&MASK(8, 2);
  c->delta_fx4_kk7 |= (ch[35]>>6)&MASK(1, 0);
  c->delta_fx4_ok_splitted1 |= (ch[35]>>0)&MASK(5, 0);
  c->N_work_put_4 |= (ch[36]>>1)&MASK(6, 0);
  c->delta_fx4_pr_l |= (ch[36]<<8)&MASK(8, 8);
  c->delta_fx4_pr_l |= (ch[37]>>0)&MASK(7, 0);
  c->delta_fx5_kk0 |= (ch[38]<<2)&MASK(8, 2);
  c->delta_fx5_kk0 |= (ch[39]>>6)&MASK(1, 0);
  c->delta_fy5_pm_splitted0 |= (ch[39]>>0)&MASK(5, 0);
  c->delta_fx5_kk1 |= (ch[40]<<2)&MASK(8, 2);
  c->delta_fx5_kk1 |= (ch[41]>>6)&MASK(1, 0);
  c->delta_fy5_pm_splitted1 |= (ch[41]>>0)&MASK(5, 0);
  c->delta_fx5_kk2 |= (ch[42]<<2)&MASK(8, 2);
  c->delta_fx5_kk2 |= (ch[43]>>6)&MASK(1, 0);
  c->delta_fy5_pdm_splitted0 |= (ch[43]>>0)&MASK(5, 0);
  c->delta_fx5_kk3 |= (ch[44]<<2)&MASK(8, 2);
  c->delta_fx5_kk3 |= (ch[45]>>6)&MASK(1, 0);
  c->delta_fy5_pdm_splitted1 |= (ch[45]>>0)&MASK(5, 0);
  c->delta_fx5_kk4 |= (ch[46]<<2)&MASK(8, 2);
  c->delta_fx5_kk4 |= (ch[47]>>6)&MASK(1, 0);
  c->delta_fy5_pkm_splitted0 |= (ch[47]>>0)&MASK(5, 0);
  c->delta_fx5_kk5 |= (ch[48]<<2)&MASK(8, 2);
  c->delta_fx5_kk5 |= (ch[49]>>6)&MASK(1, 0);
  c->delta_fy5_pkm_splitted1 |= (ch[49]>>0)&MASK(5, 0);
  c->delta_fx5_kk6 |= (ch[50]<<2)&MASK(8, 2);
  c->delta_fx5_kk6 |= (ch[51]>>6)&MASK(1, 0);
  c->delta_fx5_ok_splitted0 |= (ch[51]>>0)&MASK(5, 0);
  c->delta_fx5_kk7 |= (ch[52]<<2)&MASK(8, 2);
  c->delta_fx5_kk7 |= (ch[53]>>6)&MASK(1, 0);
  c->delta_fx5_ok_splitted1 |= (ch[53]>>0)&MASK(5, 0);
  c->N_work_put_5 |= (ch[54]>>1)&MASK(6, 0);
  c->delta_fx5_pr_l |= (ch[54]<<8)&MASK(8, 8);
  c->delta_fx5_pr_l |= (ch[55]>>0)&MASK(7, 0);
  c->delta_fy3_pm |= (c->delta_fy3_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy3_pm |= (c->delta_fy3_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy3_pdm |= (c->delta_fy3_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy3_pdm |= (c->delta_fy3_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy3_pkm |= (c->delta_fy3_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy3_pkm |= (c->delta_fy3_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx3_ok |= (c->delta_fx3_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx3_ok |= (c->delta_fx3_ok_splitted1<<6)&MASK(11, 6);
  c->delta_fy4_pm |= (c->delta_fy4_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy4_pm |= (c->delta_fy4_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy4_pdm |= (c->delta_fy4_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy4_pdm |= (c->delta_fy4_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy4_pkm |= (c->delta_fy4_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy4_pkm |= (c->delta_fy4_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx4_ok |= (c->delta_fx4_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx4_ok |= (c->delta_fx4_ok_splitted1<<6)&MASK(11, 6);
  c->delta_fy5_pm |= (c->delta_fy5_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy5_pm |= (c->delta_fy5_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy5_pdm |= (c->delta_fy5_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy5_pdm |= (c->delta_fy5_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy5_pkm |= (c->delta_fy5_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy5_pkm |= (c->delta_fy5_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx5_ok |= (c->delta_fx5_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx5_ok |= (c->delta_fx5_ok_splitted1<<6)&MASK(11, 6);


  return 0;
}


int Is_front_3_5(void *buff, size_t size) {
  uint8_t addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 56 || buff == NULL) return 0;

  addr |= (ch[0]>>3)&MASK(4, 0);
  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (addr == 255 && bit_rec_trans == 0 && sub_addr == 3 && count_word == 27) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_front_6_7(front_6_7 *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 38 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->addr = 255;
  c->bit_rec_trans = 0;
  c->sub_addr = 4;
  c->count_word = 18;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->delta_fx6_kk0>>2)&MASK(6, 0);
  ch[3] |= (c->delta_fx6_kk0<<6)&MASK(7, 6);
  c->delta_fy6_pm_splitted0 = (c->delta_fy6_pm>>0)&MASK(5, 0);
  c->delta_fy6_pm_splitted1 = (c->delta_fy6_pm>>6)&MASK(5, 0);
  ch[3] |= (c->delta_fy6_pm_splitted0<<0)&MASK(5, 0);
  ch[4] |= (c->delta_fx6_kk1>>2)&MASK(6, 0);
  ch[5] |= (c->delta_fx6_kk1<<6)&MASK(7, 6);
  ch[5] |= (c->delta_fy6_pm_splitted1<<0)&MASK(5, 0);
  ch[6] |= (c->delta_fx6_kk2>>2)&MASK(6, 0);
  ch[7] |= (c->delta_fx6_kk2<<6)&MASK(7, 6);
  c->delta_fy6_pdm_splitted0 = (c->delta_fy6_pdm>>0)&MASK(5, 0);
  c->delta_fy6_pdm_splitted1 = (c->delta_fy6_pdm>>6)&MASK(5, 0);
  ch[7] |= (c->delta_fy6_pdm_splitted0<<0)&MASK(5, 0);
  ch[8] |= (c->delta_fx6_kk3>>2)&MASK(6, 0);
  ch[9] |= (c->delta_fx6_kk3<<6)&MASK(7, 6);
  ch[9] |= (c->delta_fy6_pdm_splitted1<<0)&MASK(5, 0);
  ch[10] |= (c->delta_fx6_kk4>>2)&MASK(6, 0);
  ch[11] |= (c->delta_fx6_kk4<<6)&MASK(7, 6);
  c->delta_fy6_pkm_splitted0 = (c->delta_fy6_pkm>>0)&MASK(5, 0);
  c->delta_fy6_pkm_splitted1 = (c->delta_fy6_pkm>>6)&MASK(5, 0);
  ch[11] |= (c->delta_fy6_pkm_splitted0<<0)&MASK(5, 0);
  ch[12] |= (c->delta_fx6_kk5>>2)&MASK(6, 0);
  ch[13] |= (c->delta_fx6_kk5<<6)&MASK(7, 6);
  ch[13] |= (c->delta_fy6_pkm_splitted1<<0)&MASK(5, 0);
  ch[14] |= (c->delta_fx6_kk6>>2)&MASK(6, 0);
  ch[15] |= (c->delta_fx6_kk6<<6)&MASK(7, 6);
  c->delta_fx6_ok_splitted0 = (c->delta_fx6_ok>>0)&MASK(5, 0);
  c->delta_fx6_ok_splitted1 = (c->delta_fx6_ok>>6)&MASK(5, 0);
  ch[15] |= (c->delta_fx6_ok_splitted0<<0)&MASK(5, 0);
  ch[16] |= (c->delta_fx6_kk7>>2)&MASK(6, 0);
  ch[17] |= (c->delta_fx6_kk7<<6)&MASK(7, 6);
  ch[17] |= (c->delta_fx6_ok_splitted1<<0)&MASK(5, 0);
  ch[18] |= (c->N_work_put_6<<1)&MASK(7, 1);
  ch[18] |= (c->delta_fx6_pr_l>>8)&MASK(0, 0);
  ch[19] |= (c->delta_fx6_pr_l<<0)&MASK(7, 0);
  ch[20] |= (c->delta_fx7_kk0>>2)&MASK(6, 0);
  ch[21] |= (c->delta_fx7_kk0<<6)&MASK(7, 6);
  c->delta_fy7_pm_splitted0 = (c->delta_fy7_pm>>0)&MASK(5, 0);
  c->delta_fy7_pm_splitted1 = (c->delta_fy7_pm>>6)&MASK(5, 0);
  ch[21] |= (c->delta_fy7_pm_splitted0<<0)&MASK(5, 0);
  ch[22] |= (c->delta_fx7_kk1>>2)&MASK(6, 0);
  ch[23] |= (c->delta_fx7_kk1<<6)&MASK(7, 6);
  ch[23] |= (c->delta_fy7_pm_splitted1<<0)&MASK(5, 0);
  ch[24] |= (c->delta_fx7_kk2>>2)&MASK(6, 0);
  ch[25] |= (c->delta_fx7_kk2<<6)&MASK(7, 6);
  c->delta_fy7_pdm_splitted0 = (c->delta_fy7_pdm>>0)&MASK(5, 0);
  c->delta_fy7_pdm_splitted1 = (c->delta_fy7_pdm>>6)&MASK(5, 0);
  ch[25] |= (c->delta_fy7_pdm_splitted0<<0)&MASK(5, 0);
  ch[26] |= (c->delta_fx7_kk3>>2)&MASK(6, 0);
  ch[27] |= (c->delta_fx7_kk3<<6)&MASK(7, 6);
  ch[27] |= (c->delta_fy7_pdm_splitted1<<0)&MASK(5, 0);
  ch[28] |= (c->delta_fx7_kk4>>2)&MASK(6, 0);
  ch[29] |= (c->delta_fx7_kk4<<6)&MASK(7, 6);
  c->delta_fy7_pkm_splitted0 = (c->delta_fy7_pkm>>0)&MASK(5, 0);
  c->delta_fy7_pkm_splitted1 = (c->delta_fy7_pkm>>6)&MASK(5, 0);
  ch[29] |= (c->delta_fy7_pkm_splitted0<<0)&MASK(5, 0);
  ch[30] |= (c->delta_fx7_kk5>>2)&MASK(6, 0);
  ch[31] |= (c->delta_fx7_kk5<<6)&MASK(7, 6);
  ch[31] |= (c->delta_fy7_pkm_splitted1<<0)&MASK(5, 0);
  ch[32] |= (c->delta_fx7_kk6>>2)&MASK(6, 0);
  ch[33] |= (c->delta_fx7_kk6<<6)&MASK(7, 6);
  c->delta_fx7_ok_splitted0 = (c->delta_fx7_ok>>0)&MASK(5, 0);
  c->delta_fx7_ok_splitted1 = (c->delta_fx7_ok>>6)&MASK(5, 0);
  ch[33] |= (c->delta_fx7_ok_splitted0<<0)&MASK(5, 0);
  ch[34] |= (c->delta_fx7_kk7>>2)&MASK(6, 0);
  ch[35] |= (c->delta_fx7_kk7<<6)&MASK(7, 6);
  ch[35] |= (c->delta_fx7_ok_splitted1<<0)&MASK(5, 0);
  ch[36] |= (c->N_work_put_7<<1)&MASK(7, 1);
  ch[36] |= (c->delta_fx7_pr_l>>8)&MASK(0, 0);
  ch[37] |= (c->delta_fx7_pr_l<<0)&MASK(7, 0);


  return 0;
}

int Unmarshal_front_6_7(front_6_7 *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 38 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->delta_fx6_kk0 |= (ch[2]<<2)&MASK(8, 2);
  c->delta_fx6_kk0 |= (ch[3]>>6)&MASK(1, 0);
  c->delta_fy6_pm_splitted0 |= (ch[3]>>0)&MASK(5, 0);
  c->delta_fx6_kk1 |= (ch[4]<<2)&MASK(8, 2);
  c->delta_fx6_kk1 |= (ch[5]>>6)&MASK(1, 0);
  c->delta_fy6_pm_splitted1 |= (ch[5]>>0)&MASK(5, 0);
  c->delta_fx6_kk2 |= (ch[6]<<2)&MASK(8, 2);
  c->delta_fx6_kk2 |= (ch[7]>>6)&MASK(1, 0);
  c->delta_fy6_pdm_splitted0 |= (ch[7]>>0)&MASK(5, 0);
  c->delta_fx6_kk3 |= (ch[8]<<2)&MASK(8, 2);
  c->delta_fx6_kk3 |= (ch[9]>>6)&MASK(1, 0);
  c->delta_fy6_pdm_splitted1 |= (ch[9]>>0)&MASK(5, 0);
  c->delta_fx6_kk4 |= (ch[10]<<2)&MASK(8, 2);
  c->delta_fx6_kk4 |= (ch[11]>>6)&MASK(1, 0);
  c->delta_fy6_pkm_splitted0 |= (ch[11]>>0)&MASK(5, 0);
  c->delta_fx6_kk5 |= (ch[12]<<2)&MASK(8, 2);
  c->delta_fx6_kk5 |= (ch[13]>>6)&MASK(1, 0);
  c->delta_fy6_pkm_splitted1 |= (ch[13]>>0)&MASK(5, 0);
  c->delta_fx6_kk6 |= (ch[14]<<2)&MASK(8, 2);
  c->delta_fx6_kk6 |= (ch[15]>>6)&MASK(1, 0);
  c->delta_fx6_ok_splitted0 |= (ch[15]>>0)&MASK(5, 0);
  c->delta_fx6_kk7 |= (ch[16]<<2)&MASK(8, 2);
  c->delta_fx6_kk7 |= (ch[17]>>6)&MASK(1, 0);
  c->delta_fx6_ok_splitted1 |= (ch[17]>>0)&MASK(5, 0);
  c->N_work_put_6 |= (ch[18]>>1)&MASK(6, 0);
  c->delta_fx6_pr_l |= (ch[18]<<8)&MASK(8, 8);
  c->delta_fx6_pr_l |= (ch[19]>>0)&MASK(7, 0);
  c->delta_fx7_kk0 |= (ch[20]<<2)&MASK(8, 2);
  c->delta_fx7_kk0 |= (ch[21]>>6)&MASK(1, 0);
  c->delta_fy7_pm_splitted0 |= (ch[21]>>0)&MASK(5, 0);
  c->delta_fx7_kk1 |= (ch[22]<<2)&MASK(8, 2);
  c->delta_fx7_kk1 |= (ch[23]>>6)&MASK(1, 0);
  c->delta_fy7_pm_splitted1 |= (ch[23]>>0)&MASK(5, 0);
  c->delta_fx7_kk2 |= (ch[24]<<2)&MASK(8, 2);
  c->delta_fx7_kk2 |= (ch[25]>>6)&MASK(1, 0);
  c->delta_fy7_pdm_splitted0 |= (ch[25]>>0)&MASK(5, 0);
  c->delta_fx7_kk3 |= (ch[26]<<2)&MASK(8, 2);
  c->delta_fx7_kk3 |= (ch[27]>>6)&MASK(1, 0);
  c->delta_fy7_pdm_splitted1 |= (ch[27]>>0)&MASK(5, 0);
  c->delta_fx7_kk4 |= (ch[28]<<2)&MASK(8, 2);
  c->delta_fx7_kk4 |= (ch[29]>>6)&MASK(1, 0);
  c->delta_fy7_pkm_splitted0 |= (ch[29]>>0)&MASK(5, 0);
  c->delta_fx7_kk5 |= (ch[30]<<2)&MASK(8, 2);
  c->delta_fx7_kk5 |= (ch[31]>>6)&MASK(1, 0);
  c->delta_fy7_pkm_splitted1 |= (ch[31]>>0)&MASK(5, 0);
  c->delta_fx7_kk6 |= (ch[32]<<2)&MASK(8, 2);
  c->delta_fx7_kk6 |= (ch[33]>>6)&MASK(1, 0);
  c->delta_fx7_ok_splitted0 |= (ch[33]>>0)&MASK(5, 0);
  c->delta_fx7_kk7 |= (ch[34]<<2)&MASK(8, 2);
  c->delta_fx7_kk7 |= (ch[35]>>6)&MASK(1, 0);
  c->delta_fx7_ok_splitted1 |= (ch[35]>>0)&MASK(5, 0);
  c->N_work_put_7 |= (ch[36]>>1)&MASK(6, 0);
  c->delta_fx7_pr_l |= (ch[36]<<8)&MASK(8, 8);
  c->delta_fx7_pr_l |= (ch[37]>>0)&MASK(7, 0);
  c->delta_fy6_pm |= (c->delta_fy6_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy6_pm |= (c->delta_fy6_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy6_pdm |= (c->delta_fy6_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy6_pdm |= (c->delta_fy6_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy6_pkm |= (c->delta_fy6_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy6_pkm |= (c->delta_fy6_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx6_ok |= (c->delta_fx6_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx6_ok |= (c->delta_fx6_ok_splitted1<<6)&MASK(11, 6);
  c->delta_fy7_pm |= (c->delta_fy7_pm_splitted0<<0)&MASK(5, 0);
  c->delta_fy7_pm |= (c->delta_fy7_pm_splitted1<<6)&MASK(11, 6);
  c->delta_fy7_pdm |= (c->delta_fy7_pdm_splitted0<<0)&MASK(5, 0);
  c->delta_fy7_pdm |= (c->delta_fy7_pdm_splitted1<<6)&MASK(11, 6);
  c->delta_fy7_pkm |= (c->delta_fy7_pkm_splitted0<<0)&MASK(5, 0);
  c->delta_fy7_pkm |= (c->delta_fy7_pkm_splitted1<<6)&MASK(11, 6);
  c->delta_fx7_ok |= (c->delta_fx7_ok_splitted0<<0)&MASK(5, 0);
  c->delta_fx7_ok |= (c->delta_fx7_ok_splitted1<<6)&MASK(11, 6);


  return 0;
}


int Is_front_6_7(void *buff, size_t size) {
  uint8_t addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 38 || buff == NULL) return 0;

  addr |= (ch[0]>>3)&MASK(4, 0);
  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (addr == 255 && bit_rec_trans == 0 && sub_addr == 4 && count_word == 18) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_response_words(response_words *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->bit_rec_trans = 1;
  c->sub_addr = 1;
  c->count_word = 2;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->word_1>>8)&MASK(7, 0);
  ch[3] |= (c->word_1<<0)&MASK(7, 0);
  ch[4] |= (c->word_2>>8)&MASK(7, 0);
  ch[5] |= (c->word_2<<0)&MASK(7, 0);


  return 0;
}

int Unmarshal_response_words(response_words *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->word_1 |= (ch[2]<<8)&MASK(15, 8);
  c->word_1 |= (ch[3]>>0)&MASK(7, 0);
  c->word_2 |= (ch[4]<<8)&MASK(15, 8);
  c->word_2 |= (ch[5]>>0)&MASK(7, 0);


  return 0;
}


int Is_response_words(void *buff, size_t size) {
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 6 || buff == NULL) return 0;

  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (bit_rec_trans == 1 && sub_addr == 1 && count_word == 2) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_manage_time_distribution(manage_time_distribution *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 10 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->count_word = 4;
  c->sub_addr = 16;
  c->bit_rec_trans = 0;
  c->addr = 255;
  ch[0] |= (c->count_word<<3)&MASK(7, 3);
  ch[0] |= (c->sub_addr>>2)&MASK(2, 0);
  ch[1] |= (c->sub_addr<<6)&MASK(7, 6);
  ch[1] |= (c->bit_rec_trans<<5)&MASK(5, 5);
  ch[1] |= (c->addr<<0)&MASK(4, 0);
  ch[3] |= (c->sel_enter_AK<<0)&MASK(6, 0);
  ch[4] |= (c->strobe<<0)&MASK(3, 0);
  ch[5] |= (c->regime<<3)&MASK(7, 3);
  ch[5] |= (c->R_P<<0)&MASK(2, 0);
  ch[6] |= (c->strobe_length>>8)&MASK(7, 0);
  ch[7] |= (c->strobe_length<<0)&MASK(7, 0);
  ch[8] |= (c->write_flash>>1)&MASK(2, 0);
  ch[9] |= (c->write_flash<<7)&MASK(7, 7);
  ch[9] |= (c->rw<<6)&MASK(6, 6);
  ch[9] |= (c->N_mod<<0)&MASK(5, 0);


  return 0;
}

int Unmarshal_manage_time_distribution(manage_time_distribution *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 10 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->count_word |= (ch[0]>>3)&MASK(4, 0);
  c->sub_addr |= (ch[0]<<2)&MASK(4, 2);
  c->sub_addr |= (ch[1]>>6)&MASK(1, 0);
  c->bit_rec_trans |= (ch[1]>>5)&MASK(0, 0);
  c->addr |= (ch[1]>>0)&MASK(4, 0);
  c->sel_enter_AK |= (ch[3]>>0)&MASK(6, 0);
  c->strobe |= (ch[4]>>0)&MASK(3, 0);
  c->regime |= (ch[5]>>3)&MASK(4, 0);
  c->R_P |= (ch[5]>>0)&MASK(2, 0);
  c->strobe_length |= (ch[6]<<8)&MASK(15, 8);
  c->strobe_length |= (ch[7]>>0)&MASK(7, 0);
  c->write_flash |= (ch[8]<<1)&MASK(3, 1);
  c->write_flash |= (ch[9]>>7)&MASK(0, 0);
  c->rw |= (ch[9]>>6)&MASK(0, 0);
  c->N_mod |= (ch[9]>>0)&MASK(5, 0);


  return 0;
}


int Is_manage_time_distribution(void *buff, size_t size) {
  uint8_t count_word = 0;
  uint8_t sub_addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t addr = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 10 || buff == NULL) return 0;

  count_word |= (ch[0]>>3)&MASK(4, 0);
  sub_addr |= (ch[0]<<2)&MASK(4, 2);
  sub_addr |= (ch[1]>>6)&MASK(1, 0);
  bit_rec_trans |= (ch[1]>>5)&MASK(0, 0);
  addr |= (ch[1]>>0)&MASK(4, 0);

  if (count_word == 4 && sub_addr == 16 && bit_rec_trans == 0 && addr == 255) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_manage_factory_fap(manage_factory_fap *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->addr = 255;
  c->bit_rec_trans = 0;
  c->sub_addr = 17;
  c->count_word = 3;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->sel_enter_AK<<1)&MASK(7, 1);
  ch[2] |= (c->N_fr>>4)&MASK(0, 0);
  ch[3] |= (c->N_fr<<4)&MASK(7, 4);
  ch[4] |= (c->R_P<<5)&MASK(7, 5);
  ch[4] |= (c->delta_fap>>1)&MASK(4, 0);
  ch[5] |= (c->delta_fap<<7)&MASK(7, 7);
  ch[5] |= (c->Nf<<4)&MASK(6, 4);
  ch[6] |= (c->N_row<<5)&MASK(7, 5);
  ch[6] |= (c->N_col>>1)&MASK(4, 0);
  ch[7] |= (c->N_col<<7)&MASK(7, 7);
  ch[7] |= (c->rw<<6)&MASK(6, 6);
  ch[7] |= (c->write_flash<<2)&MASK(5, 2);


  return 0;
}

int Unmarshal_manage_factory_fap(manage_factory_fap *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->sel_enter_AK |= (ch[2]>>1)&MASK(6, 0);
  c->N_fr |= (ch[2]<<4)&MASK(4, 4);
  c->N_fr |= (ch[3]>>4)&MASK(3, 0);
  c->R_P |= (ch[4]>>5)&MASK(2, 0);
  c->delta_fap |= (ch[4]<<1)&MASK(5, 1);
  c->delta_fap |= (ch[5]>>7)&MASK(0, 0);
  c->Nf |= (ch[5]>>4)&MASK(2, 0);
  c->N_row |= (ch[6]>>5)&MASK(2, 0);
  c->N_col |= (ch[6]<<1)&MASK(5, 1);
  c->N_col |= (ch[7]>>7)&MASK(0, 0);
  c->rw |= (ch[7]>>6)&MASK(0, 0);
  c->write_flash |= (ch[7]>>2)&MASK(3, 0);


  return 0;
}


int Is_manage_factory_fap(void *buff, size_t size) {
  uint8_t addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 8 || buff == NULL) return 0;

  addr |= (ch[0]>>3)&MASK(4, 0);
  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (addr == 255 && bit_rec_trans == 0 && sub_addr == 17 && count_word == 3) {
    return 1;
  } else {
    return 0;
  }
}


int Marshal_manage_regular_fap(manage_regular_fap *c, void *buff, size_t size) {
  uint8_t *ch = (uint8_t*)buff;

  if (size < 10 || buff == NULL) return -1;

  memset(buff, 0, size);
  c->addr = 255;
  c->bit_rec_trans = 0;
  c->sub_addr = 18;
  c->count_word = 4;
  ch[0] |= (c->addr<<3)&MASK(7, 3);
  ch[0] |= (c->bit_rec_trans<<2)&MASK(2, 2);
  ch[0] |= (c->sub_addr>>3)&MASK(1, 0);
  ch[1] |= (c->sub_addr<<5)&MASK(7, 5);
  ch[1] |= (c->count_word<<0)&MASK(4, 0);
  ch[2] |= (c->sel_enter_AK<<1)&MASK(7, 1);
  ch[2] |= (c->N_fr>>4)&MASK(0, 0);
  ch[3] |= (c->N_fr<<4)&MASK(7, 4);
  ch[4] |= (c->R_P<<5)&MASK(7, 5);
  ch[4] |= (c->delta_fap>>1)&MASK(4, 0);
  ch[5] |= (c->delta_fap<<7)&MASK(7, 7);
  ch[5] |= (c->K_att<<4)&MASK(6, 4);
  ch[6] |= (c->delta_fap_pr_l<<2)&MASK(7, 2);
  ch[6] |= (c->N_wp>>4)&MASK(1, 0);
  ch[7] |= (c->N_wp<<4)&MASK(7, 4);
  ch[7] |= (c->N_row<<1)&MASK(3, 1);
  ch[8] |= (c->N_col<<2)&MASK(7, 2);
  ch[8] |= (c->rw<<1)&MASK(1, 1);
  ch[8] |= (c->write_flash>>3)&MASK(0, 0);
  ch[9] |= (c->write_flash<<5)&MASK(7, 5);


  return 0;
}

int Unmarshal_manage_regular_fap(manage_regular_fap *c, const void *buff, size_t size) {
  const uint8_t *ch = (uint8_t*)buff;

  if (size < 10 || buff == NULL) return -1;

  memset(c, 0, sizeof(*c));
  c->addr |= (ch[0]>>3)&MASK(4, 0);
  c->bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  c->sub_addr |= (ch[0]<<3)&MASK(4, 3);
  c->sub_addr |= (ch[1]>>5)&MASK(2, 0);
  c->count_word |= (ch[1]>>0)&MASK(4, 0);
  c->sel_enter_AK |= (ch[2]>>1)&MASK(6, 0);
  c->N_fr |= (ch[2]<<4)&MASK(4, 4);
  c->N_fr |= (ch[3]>>4)&MASK(3, 0);
  c->R_P |= (ch[4]>>5)&MASK(2, 0);
  c->delta_fap |= (ch[4]<<1)&MASK(5, 1);
  c->delta_fap |= (ch[5]>>7)&MASK(0, 0);
  c->K_att |= (ch[5]>>4)&MASK(2, 0);
  c->delta_fap_pr_l |= (ch[6]>>2)&MASK(5, 0);
  c->N_wp |= (ch[6]<<4)&MASK(5, 4);
  c->N_wp |= (ch[7]>>4)&MASK(3, 0);
  c->N_row |= (ch[7]>>1)&MASK(2, 0);
  c->N_col |= (ch[8]>>2)&MASK(5, 0);
  c->rw |= (ch[8]>>1)&MASK(0, 0);
  c->write_flash |= (ch[8]<<3)&MASK(3, 3);
  c->write_flash |= (ch[9]>>5)&MASK(2, 0);


  return 0;
}


int Is_manage_regular_fap(void *buff, size_t size) {
  uint8_t addr = 0;
  uint8_t bit_rec_trans = 0;
  uint8_t sub_addr = 0;
  uint8_t count_word = 0;
  uint8_t *ch = (uint8_t*)buff;

  if (size < 10 || buff == NULL) return 0;

  addr |= (ch[0]>>3)&MASK(4, 0);
  bit_rec_trans |= (ch[0]>>2)&MASK(0, 0);
  sub_addr |= (ch[0]<<3)&MASK(4, 3);
  sub_addr |= (ch[1]>>5)&MASK(2, 0);
  count_word |= (ch[1]>>0)&MASK(4, 0);

  if (addr == 255 && bit_rec_trans == 0 && sub_addr == 18 && count_word == 4) {
    return 1;
  } else {
    return 0;
  }
}


