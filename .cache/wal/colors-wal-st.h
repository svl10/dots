const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#040403", /* black   */
  [1] = "#4F4737", /* red     */
  [2] = "#675336", /* green   */
  [3] = "#606152", /* yellow  */
  [4] = "#916E4C", /* blue    */
  [5] = "#78876A", /* magenta */
  [6] = "#9C946D", /* cyan    */
  [7] = "#c0c0c0", /* white   */

  /* 8 bright colors */
  [8]  = "#424242",  /* black   */
  [9]  = "#4F4737",  /* red     */
  [10] = "#675336", /* green   */
  [11] = "#606152", /* yellow  */
  [12] = "#916E4C", /* blue    */
  [13] = "#78876A", /* magenta */
  [14] = "#9C946D", /* cyan    */
  [15] = "#c0c0c0", /* white   */

  /* special colors */
  [256] = "#040403", /* background */
  [257] = "#c0c0c0", /* foreground */
  [258] = "#c0c0c0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
