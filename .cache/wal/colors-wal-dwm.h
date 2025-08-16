static const char norm_fg[] = "#f3e3c7";
static const char norm_bg[] = "#2e1b25";
static const char norm_border[] = "#aa9e8b";

static const char sel_fg[] = "#f3e3c7";
static const char sel_bg[] = "#E09D69";
static const char sel_border[] = "#f3e3c7";

static const char urg_fg[] = "#f3e3c7";
static const char urg_bg[] = "#B38B66";
static const char urg_border[] = "#B38B66";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
