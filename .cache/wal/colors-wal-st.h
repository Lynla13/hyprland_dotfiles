const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1c1234", /* black   */
  [1] = "#546BA4", /* red     */
  [2] = "#AA78A0", /* green   */
  [3] = "#6A99B9", /* yellow  */
  [4] = "#B5B2B3", /* blue    */
  [5] = "#A1CDD0", /* magenta */
  [6] = "#DDD5D3", /* cyan    */
  [7] = "#f1ede2", /* white   */

  /* 8 bright colors */
  [8]  = "#a8a59e",  /* black   */
  [9]  = "#546BA4",  /* red     */
  [10] = "#AA78A0", /* green   */
  [11] = "#6A99B9", /* yellow  */
  [12] = "#B5B2B3", /* blue    */
  [13] = "#A1CDD0", /* magenta */
  [14] = "#DDD5D3", /* cyan    */
  [15] = "#f1ede2", /* white   */

  /* special colors */
  [256] = "#1c1234", /* background */
  [257] = "#f1ede2", /* foreground */
  [258] = "#f1ede2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
