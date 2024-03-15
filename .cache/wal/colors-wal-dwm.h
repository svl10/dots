static const char norm_fg[] = "#c0c0c0";
static const char norm_bg[] = "#040403";
static const char norm_border[] = "#424242";

static const char sel_fg[] = "#c0c0c0";
static const char sel_bg[] = "#675336";
static const char sel_border[] = "#c0c0c0";

static const char urg_fg[] = "#c0c0c0";
static const char urg_bg[] = "#4F4737";
static const char urg_border[] = "#4F4737";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
