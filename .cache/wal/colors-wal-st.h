const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#3c2424", /* black   */
  [1] = "#BABBB1", /* red     */
  [2] = "#F3E1A9", /* green   */
  [3] = "#AED0CE", /* yellow  */
  [4] = "#A0D2D0", /* blue    */
  [5] = "#BBEAE7", /* magenta */
  [6] = "#E5D9D6", /* cyan    */
  [7] = "#e5eded", /* white   */

  /* 8 bright colors */
  [8]  = "#a0a5a5",  /* black   */
  [9]  = "#BABBB1",  /* red     */
  [10] = "#F3E1A9", /* green   */
  [11] = "#AED0CE", /* yellow  */
  [12] = "#A0D2D0", /* blue    */
  [13] = "#BBEAE7", /* magenta */
  [14] = "#E5D9D6", /* cyan    */
  [15] = "#e5eded", /* white   */

  /* special colors */
  [256] = "#3c2424", /* background */
  [257] = "#e5eded", /* foreground */
  [258] = "#e5eded",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
