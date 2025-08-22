const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#24252d", /* black   */
  [1] = "#2BA8DA", /* red     */
  [2] = "#57B3CC", /* green   */
  [3] = "#F0A8A4", /* yellow  */
  [4] = "#F6E8AA", /* blue    */
  [5] = "#BBBAC7", /* magenta */
  [6] = "#FBCED1", /* cyan    */
  [7] = "#e8e8e7", /* white   */

  /* 8 bright colors */
  [8]  = "#a2a2a1",  /* black   */
  [9]  = "#2BA8DA",  /* red     */
  [10] = "#57B3CC", /* green   */
  [11] = "#F0A8A4", /* yellow  */
  [12] = "#F6E8AA", /* blue    */
  [13] = "#BBBAC7", /* magenta */
  [14] = "#FBCED1", /* cyan    */
  [15] = "#e8e8e7", /* white   */

  /* special colors */
  [256] = "#24252d", /* background */
  [257] = "#e8e8e7", /* foreground */
  [258] = "#e8e8e7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
