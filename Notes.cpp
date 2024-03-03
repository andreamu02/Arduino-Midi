#include "Notes.h"

uint32_t Notes::get_f(NOTES note, uint8_t octave){
    switch(note){
        case Notes::NOTES::DO: return n_do[octave]; break;
        case Notes::NOTES::RE_B:
        case Notes::NOTES::DO_D: return n_do_d[octave]; break;
        case Notes::NOTES::RE: return n_re[octave]; break;
        case Notes::NOTES::RE_D:
        case Notes::NOTES::MI_B: return n_re_d[octave]; break;
        case Notes::NOTES::MI: return n_mi[octave]; break;
        case Notes::NOTES::FA: return n_fa[octave]; break;
        case Notes::NOTES::FA_D:
        case Notes::NOTES::SOL_B: return n_fa_d[octave]; break;
        case Notes::NOTES::SOL: return n_sol[octave]; break;
        case Notes::NOTES::SOL_D:
        case Notes::NOTES::LA_B: return n_sol_d[octave]; break;
        case Notes::NOTES::LA: return n_la[octave]; break;
        case Notes::NOTES::LA_D:
        case Notes::NOTES::SI_B: return n_la_d[octave]; break;
        case Notes::NOTES::SI: return n_si[octave]; break;
        default: break;
    }
}

uint32_t Notes::get_frequency(){
    uint32_t frequency = get_f(next_note, next_duration);
    set_next_note();
    set_next_frequency();
    return frequency;
}

Notes::~Notes(){
    // do nothing
}