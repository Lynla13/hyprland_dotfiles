static const char norm_fg[] = "#e8e8e7";
static const char norm_bg[] = "#24252d";
static const char norm_border[] = "#a2a2a1";

static const char sel_fg[] = "#e8e8e7";
static const char sel_bg[] = "#57B3CC";
static const char sel_border[] = "#e8e8e7";

static const char urg_fg[] = "#e8e8e7";
static const char urg_bg[] = "#2BA8DA";
static const char urg_border[] = "#2BA8DA";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
