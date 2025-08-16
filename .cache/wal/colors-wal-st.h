const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2e1b25", /* black   */
  [1] = "#B38B66", /* red     */
  [2] = "#E09D69", /* green   */
  [3] = "#F7CA75", /* yellow  */
  [4] = "#937988", /* blue    */
  [5] = "#AE9894", /* magenta */
  [6] = "#DFAF8F", /* cyan    */
  [7] = "#f3e3c7", /* white   */

  /* 8 bright colors */
  [8]  = "#aa9e8b",  /* black   */
  [9]  = "#B38B66",  /* red     */
  [10] = "#E09D69", /* green   */
  [11] = "#F7CA75", /* yellow  */
  [12] = "#937988", /* blue    */
  [13] = "#AE9894", /* magenta */
  [14] = "#DFAF8F", /* cyan    */
  [15] = "#f3e3c7", /* white   */

  /* special colors */
  [256] = "#2e1b25", /* background */
  [257] = "#f3e3c7", /* foreground */
  [258] = "#f3e3c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
