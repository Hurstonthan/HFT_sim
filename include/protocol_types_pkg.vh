/*
  all types used to make life easier.
  
*/

`ifndef CPU_TYPES_PKG_VH
`define CPU_TYPES_PKG_VH
package cpu_types_pkg;

  // word width and size
  parameter WORD_W    = 32;
  parameter WBYTES    = WORD_W/8;

  // instruction format widths
  parameter OP_W      = 6;
  parameter REG_W     = 5;
  parameter SHAM_W    = REG_W;
  parameter FUNC_W    = OP_W;
  parameter IMM_W     = 16;
  parameter ADDR_W    = 26;

  // alu op width
  parameter AOP_W     = 4;

  // icache format widths
  parameter ITAG_W    = 26;
  parameter IIDX_W    = 4;
  parameter IBLK_W    = 0; // <- important
  parameter IBYT_W    = 2;

  // dcache format widths
  parameter DTAG_W    = 26;
  parameter DIDX_W    = 3;
  parameter DBLK_W    = 1;
  parameter DBYT_W    = 2;
  parameter DWAY_ASS  = 2;

// opcodes
  // opcode type
  typedef enum logic [OP_W-1:0] {
  } opcode_t;

  // rtype funct op type
  typedef enum logic [FUNC_W-1:0] {
  } funct_t;

  // alu op type
  typedef enum logic [AOP_W-1:0] {
  } aluop_t;

// instruction format types
  // register bits types
  typedef logic [REG_W-1:0] regbits_t;

  // j type
  typedef struct packed {
    opcode_t            opcode;
    logic [ADDR_W-1:0]  addr;
  } j_t;
  // i type
  typedef struct packed {
    opcode_t            opcode;
    regbits_t           rs;
    regbits_t           rt;
    logic [IMM_W-1:0]   imm;
  } i_t;
  // r type
  typedef struct packed {
    opcode_t            opcode;
    regbits_t           rs;
    regbits_t           rt;
    regbits_t           rd;
    logic [SHAM_W-1:0]  shamt;
    funct_t             funct;
  } r_t;

// cache address format types
  // icache format type
  typedef struct packed {
    logic [ITAG_W-1:0]  tag;
    logic [IIDX_W-1:0]  idx;
    logic [IBYT_W-1:0]  bytoff;
  } icachef_t;

  // dcache format type
  typedef struct packed {
    logic [DTAG_W-1:0]  tag;    // 26
    logic [DIDX_W-1:0]  idx;    // 3
    logic [DBLK_W-1:0]  blkoff; // 1
    logic [DBYT_W-1:0]  bytoff; // 2
  } dcachef_t;

// word_t
  typedef logic [WORD_W-1:0] word_t;

// memory state
  // ramstate
  typedef enum logic [1:0] {
    FREE,
    BUSY,
    ACCESS,ERROR
  } ramstate_t;

// cache frame structs
  //dcache frame
  typedef struct packed {
	logic valid;
	logic dirty;
	logic [DTAG_W - 1:0] tag;
	word_t [1:0] data;
  } dcache_frame;

  //icache frame  
  typedef struct packed {
	logic valid;
	logic [ITAG_W - 1:0] tag;
	word_t data;
  } icache_frame;

endpackage
`endif //CPU_TYPES_PKG_VH