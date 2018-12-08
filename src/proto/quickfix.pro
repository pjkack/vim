/* quickfix.c */
int qf_init(win_T *wp, char_u *efile, char_u *errorformat, int newlist, char_u *qf_title, char_u *enc);
void qf_free_all(win_T *wp);
void check_quickfix_busy(void);
void copy_loclist_stack(win_T *from, win_T *to);
void qf_jump(qf_info_T *qi, int dir, int errornr, int forceit);
void qf_jump_newwin(qf_info_T *qi, int dir, int errornr, int forceit, int newwin);
void qf_list(exarg_T *eap);
void qf_age(exarg_T *eap);
void qf_history(exarg_T *eap);
void qf_mark_adjust(win_T *wp, linenr_T line1, linenr_T line2, long amount, long amount_after);
void qf_view_result(int split);
void ex_ctoggle(exarg_T *eap);
void ex_cwindow(exarg_T *eap);
void ex_cclose(exarg_T *eap);
void ex_copen(exarg_T *eap);
void ex_cbottom(exarg_T *eap);
linenr_T qf_current_entry(win_T *wp);
int grep_internal(cmdidx_T cmdidx);
void ex_make(exarg_T *eap);
int qf_get_size(exarg_T *eap);
int qf_get_cur_idx(exarg_T *eap);
int qf_get_cur_valid_idx(exarg_T *eap);
void ex_cc(exarg_T *eap);
void ex_cnext(exarg_T *eap);
void ex_cfile(exarg_T *eap);
void ex_vimgrep(exarg_T *eap);
int get_errorlist(qf_info_T *qi_arg, win_T *wp, int qf_idx, list_T *list);
int qf_get_properties(win_T *wp, dict_T *what, dict_T *retdict);
int set_errorlist(win_T *wp, list_T *list, int action, char_u *title, dict_T *what);
int set_ref_in_quickfix(int copyID);
void ex_cbuffer(exarg_T *eap);
void ex_cexpr(exarg_T *eap);
void ex_helpgrep(exarg_T *eap);
/* vim: set ft=c : */
