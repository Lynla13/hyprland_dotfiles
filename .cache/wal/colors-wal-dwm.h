static const char norm_fg[] = "#f1ede2";
static const char norm_bg[] = "#1c1234";
static const char norm_border[] = "#a8a59e";

static const char sel_fg[] = "#f1ede2";
static const char sel_bg[] = "#AA78A0";
static const char sel_border[] = "#f1ede2";

static const char urg_fg[] = "#f1ede2";
static const char urg_bg[] = "#546BA4";
static const char urg_border[] = "#546BA4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
