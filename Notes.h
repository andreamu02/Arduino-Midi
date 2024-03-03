#ifndef NOTES_H_
#define NOTES_H_

#include "config.h"

class Notes{
    public:
        Notes(){}
        const int n_do[10] = {16, 33, 65, 131, 262, 523, 1047, 2093, 4186, 8372};
        const int n_do_d[10] = {};
        const int n_re[10] = {17, 35, 69, 139, 277, 554, 1109, 2217, 4435, 8870};
        const int n_re_d[10] = {};
        const int n_mi[10] = {};
        const int n_fa[10] = {};
        const int n_fa_d[10] = {};
        const int n_sol[10] = {};
        const int n_sol_d[10] = {};
        const int n_la[10] = {};
        const int n_la_d[10] = {};
        const int n_si[10] = {};

        const int& n_re_b = *n_do_d;
        const int& n_mi_b = *n_re_d;
        const int& n_sol_b = *n_fa_d;
        const int& n_la_b = *n_sol_d;
        const int& n_si_b = *n_la_d;

        enum class NOTES{
            DO,
            DO_D,
            RE_B,
            RE,
            RE_D,
            MI_B,
            MI,
            FA,
            FA_D,
            SOL_B,
            SOL,
            SOL_D,
            LA_B,
            LA,
            LA_D,
            SI_B,
            SI
        };

    uint32_t get_frequency();
    uint32_t get_f(NOTES note, uint8_t octave);


    private:
        NOTES next_note;
        uint64_t next_duration;
    
        inline void set_next_frequency();

        inline void set_next_note();
};

#endif 