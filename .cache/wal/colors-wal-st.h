const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#251e1a", /* black   */
  [1] = "#5E7887", /* red     */
  [2] = "#71878C", /* green   */
  [3] = "#788EA4", /* yellow  */
  [4] = "#6C8BC3", /* blue    */
  [5] = "#929C9F", /* magenta */
  [6] = "#D8C4AB", /* cyan    */
  [7] = "#eae7e0", /* white   */

  /* 8 bright colors */
  [8]  = "#a3a19c",  /* black   */
  [9]  = "#5E7887",  /* red     */
  [10] = "#71878C", /* green   */
  [11] = "#788EA4", /* yellow  */
  [12] = "#6C8BC3", /* blue    */
  [13] = "#929C9F", /* magenta */
  [14] = "#D8C4AB", /* cyan    */
  [15] = "#eae7e0", /* white   */

  /* special colors */
  [256] = "#251e1a", /* background */
  [257] = "#eae7e0", /* foreground */
  [258] = "#eae7e0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
