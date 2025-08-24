static const char norm_fg[] = "#eae7e0";
static const char norm_bg[] = "#251e1a";
static const char norm_border[] = "#a3a19c";

static const char sel_fg[] = "#eae7e0";
static const char sel_bg[] = "#71878C";
static const char sel_border[] = "#eae7e0";

static const char urg_fg[] = "#eae7e0";
static const char urg_bg[] = "#5E7887";
static const char urg_border[] = "#5E7887";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
