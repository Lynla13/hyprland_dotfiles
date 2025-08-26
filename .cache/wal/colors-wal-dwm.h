static const char norm_fg[] = "#e5eded";
static const char norm_bg[] = "#3c2424";
static const char norm_border[] = "#a0a5a5";

static const char sel_fg[] = "#e5eded";
static const char sel_bg[] = "#F3E1A9";
static const char sel_border[] = "#e5eded";

static const char urg_fg[] = "#e5eded";
static const char urg_bg[] = "#BABBB1";
static const char urg_border[] = "#BABBB1";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
