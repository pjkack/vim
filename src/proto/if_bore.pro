/* if_bore.c */
char_u* bore_statusline(int flags);
void bore_sortfilenames(char_u** files, int count, char_u* current);
void ex_borefind(exarg_T *eap);
void ex_boresln(exarg_T *eap);
void ex_boreopen(exarg_T *eap);
void ex_boretoggle(exarg_T *eap);
void ex_borebuild(exarg_T *eap);
void ex_boreproj(exarg_T *eap);
void ex_boreconfig(exarg_T *eap);
void ex_Boreopenselection(exarg_T *eap);
/* vim: set ft=c : */
