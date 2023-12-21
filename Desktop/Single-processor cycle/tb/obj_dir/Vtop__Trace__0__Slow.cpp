// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_fst_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+1618,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1620,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1621,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1622,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1623,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1624,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1625,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1626,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1627,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1628,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1629,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1630,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1631,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1632,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1618,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1620,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1621,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1622,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1623,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1624,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1625,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1626,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1627,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1628,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1629,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1630,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1631,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1632,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("dut ");
    tracep->declBus(c+1620,"io_sw_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1618,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1621,"pc_debug_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1622,"io_lcd_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1623,"io_ledg_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1624,"io_ledr_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1625,"io_hex0_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1626,"io_hex1_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1627,"io_hex2_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1628,"io_hex3_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1629,"io_hex4_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1630,"io_hex5_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1631,"io_hex6_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1632,"io_hex7_o",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"br_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1049,"rd_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+2,"br_unsigned",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1050,"op_a_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBit(c+1051,"op_b_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1052,"mem_wren",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+3,"br_eq",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+4,"br_lt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1053,"immsel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1054,"alu_op",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 3,0);
    tracep->declBus(c+1055,"wb_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1056,"inst",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBit(c+1057,"sb_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1058,"sh_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1059,"sw_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1060,"lb_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1061,"lh_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1062,"lbu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1063,"lhu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1064,"lw_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1065,"inst_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->pushNamePrefix("ctr_inst ");
    tracep->declBus(c+1065,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 10,0);
    tracep->declBit(c+3,"br_eq",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"br_lt",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"pc_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1053,"imm_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+2,"br_unsigned",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1050,"op_a_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1051,"op_b_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1054,"alu_op",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1052,"mem_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"rd_wren",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1055,"wb_sel",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1057,"sb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"sh_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1059,"sw_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"lb_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"lh_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"lbu_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"lhu_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"lw_en",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1066,"opcode_dif",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1067,"funct3",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->declBit(c+1068,"funct7_dif",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1069,"rv32i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1070,"r_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1071,"i_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1072,"l_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1073,"s_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1074,"b_type",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1075,"add_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1076,"sub_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1077,"sll_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1078,"slt_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1079,"sltu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1080,"xor_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1081,"srl_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1082,"sra_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1083,"or_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1084,"and_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1085,"addi_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1086,"slli_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1087,"slti_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1088,"sltiu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1089,"xori_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1090,"srli_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1091,"srai_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1092,"ori_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1093,"andi_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1094,"beq_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1095,"bne_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1096,"blt_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1097,"bge_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1098,"bltu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1099,"bgeu_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1100,"jal_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1101,"jalr_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1102,"lui_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1103,"auipc_en",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("datapath_inst ");
    tracep->declBit(c+1618,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1,"br_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1049,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+2,"br_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1053,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1050,"op_a_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1051,"op_b_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1054,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBit(c+1052,"mem_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1620,"sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1055,"wb_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBit(c+1057,"sb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"sh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1059,"sw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"lb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"lh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"lbu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"lhu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"lw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1621,"pc_debug",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1056,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+4,"br_lt",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"br_eq",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1622,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1623,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1624,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1625,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1626,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1627,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1628,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1629,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1630,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1631,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1632,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+5,"nxt_pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"pc_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1104,"pc",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+7,"pc_four",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1105,"rs1_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1106,"rs2_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+1107,"rd_addr",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->declBus(c+520,"rd_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1108,"rs1_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1109,"rs2_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1110,"inst_imm",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 24,0);
    tracep->declBus(c+1111,"imm_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+6,"alu_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1112,"operand_a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1113,"operand_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+8,"ld_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+520,"wb_data",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("FA_inst ");
    tracep->declBus(c+1104,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1633,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1634,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+7,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+9,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBit(c+1114,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+10,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+521,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1114,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+521,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_fulladder32_low[0] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1115,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+11,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+522,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+523,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1115,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+522,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[10] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1116,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+12,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+524,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+525,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1116,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+524,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[11] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1117,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+13,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+526,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+527,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1117,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+526,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[12] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1118,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+14,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+528,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+529,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1118,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+528,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[13] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1119,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+15,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+530,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+531,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1119,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+530,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[14] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1120,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+16,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+532,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+533,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1120,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+532,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[15] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1121,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+17,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+534,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+535,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1121,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+534,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[16] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1122,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+18,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+536,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+537,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1122,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+536,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[17] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1123,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+19,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+538,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+539,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1123,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+538,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[18] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1124,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+20,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+540,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+541,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1124,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+540,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[19] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1125,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+21,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+542,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+543,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1125,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+542,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[1] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1126,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+22,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+544,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+545,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1126,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+544,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[20] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1127,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+23,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+546,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+547,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1127,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+546,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[21] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1128,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+24,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+548,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+549,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1128,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+548,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[22] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1129,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+25,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+550,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+551,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1129,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+550,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[23] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1130,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+26,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+552,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+553,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1130,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+552,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[24] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1131,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+27,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+554,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+555,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1131,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+554,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[25] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1132,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+28,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+556,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+557,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1132,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+556,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[26] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1133,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+29,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+558,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+559,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1133,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+558,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[27] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1134,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+30,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+560,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+561,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1134,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+560,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[28] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1135,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+31,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+562,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+563,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1135,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+562,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[29] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1136,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+32,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+564,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+565,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1136,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+564,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[2] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1137,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1635,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+33,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+566,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+567,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1138,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+566,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1137,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[30] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1139,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+34,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+568,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+569,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1139,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+568,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[3] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1140,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+35,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+570,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+571,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1140,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+570,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[4] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1141,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+36,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+572,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+573,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1141,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+572,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[5] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1142,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+37,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+574,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+575,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1142,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+574,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[6] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1143,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+38,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+576,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+577,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1143,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+576,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[7] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1144,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+39,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+578,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+579,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1144,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+578,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[8] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1145,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+40,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+580,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+581,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1145,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+580,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[9] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1146,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+41,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+582,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+583,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1146,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+582,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1634,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("Mux_br_sel ");
    tracep->declBus(c+7,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+5,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("PC_inst ");
    tracep->declBus(c+5,"D",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1618,"clk",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1104,"Q",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("alu_inst ");
    tracep->declBus(c+1112,"operand_a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"operand_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1054,"alu_op",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"alu_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"add",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+43,"sub",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+44,"slt",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+45,"sltu",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1147,"xor_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1148,"and_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1149,"or_",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,"sll",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+47,"srl",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+48,"sra",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("add_func ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+42,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("add_inst ");
    tracep->declBus(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1634,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+42,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+49,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBit(c+1150,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+50,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+584,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1152,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+584,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_fulladder32_low[0] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1154,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+51,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+585,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+586,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1155,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+585,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1156,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[10] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1157,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1158,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+52,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+587,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+588,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1159,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+587,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1160,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[11] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1161,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1162,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+53,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+589,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+590,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1163,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+589,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1164,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[12] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1165,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+54,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+591,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+592,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1167,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+591,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1168,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[13] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1169,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1170,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+55,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+593,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+594,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1171,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+593,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1172,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[14] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1173,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1174,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+56,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+595,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+596,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1175,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+595,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1176,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[15] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1177,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1178,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+57,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+597,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+598,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1179,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+597,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1180,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[16] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1181,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1182,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+58,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+599,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+600,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1183,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+599,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1184,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[17] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1185,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+59,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+601,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+602,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1187,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+601,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1188,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[18] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+60,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+603,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+604,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1191,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+603,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1192,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[19] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1193,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1194,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+61,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+605,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+606,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1195,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+605,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1196,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[1] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1197,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+62,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+607,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+608,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1199,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+607,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1200,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[20] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1201,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1202,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+63,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+609,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+610,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1203,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+609,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1204,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[21] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1205,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1206,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+64,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+611,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+612,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1207,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+611,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1208,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[22] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1210,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+65,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+613,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+614,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1211,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+613,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1212,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[23] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1213,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1214,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+66,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+615,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+616,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1215,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+615,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1216,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[24] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1217,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+67,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+617,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+618,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1219,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+617,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1220,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[25] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1221,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+68,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+619,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+620,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1223,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+619,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1224,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[26] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1225,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1226,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+69,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+621,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+622,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1227,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+621,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1228,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[27] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1229,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1230,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+70,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+623,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+624,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1231,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+623,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1232,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[28] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1233,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1234,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+71,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+625,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+626,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1235,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+625,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1236,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[29] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1237,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1238,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+72,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+627,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+628,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1239,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+627,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1240,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[2] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1241,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1242,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+73,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+629,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+630,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1243,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+629,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1244,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[30] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1245,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1246,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+74,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+631,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+632,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1247,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+631,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1248,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[3] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1249,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+75,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+633,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+634,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1251,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+633,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1252,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[4] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1253,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+76,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+635,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+636,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1255,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+635,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1256,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[5] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1257,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1258,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+77,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+637,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+638,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1259,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+637,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1260,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[6] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1261,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1262,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+78,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+639,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+640,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1263,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+639,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1264,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[7] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1265,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+79,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+641,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+642,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1267,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+641,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1268,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[8] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1269,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+80,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+643,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+644,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1271,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+643,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1272,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[9] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1273,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1274,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+81,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+645,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+646,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1275,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+645,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1276,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(4);
    tracep->pushNamePrefix("and_func ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1148,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("and_inst ");
    tracep->declBus(c+1112,"data_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"data_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1148,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("or_func ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1149,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("or_inst ");
    tracep->declBus(c+1112,"data_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"data_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1149,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("select_inst ");
    tracep->declBus(c+42,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"a3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1147,"a4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1149,"a5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1148,"a6",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"a7",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"a8",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"a9",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1054,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 3,0);
    tracep->declBus(c+6,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift_comp ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+46,"data_out_sll",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"data_out_srl",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"data_out_sra",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1277,"sll_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1278,"sra_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1279,"srl_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("result_inst ");
    tracep->declBus(c+1277,"sll",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1278,"sra",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"srl",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"rs1_sign",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"sll_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+48,"sra_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+47,"srl_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+82,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+83,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+84,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+85,"overflow_signal",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1280,"overflow_value",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("check_inst ");
    tracep->declBus(c+1113,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1636,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+82,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+83,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+84,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+86,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+87,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+88,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1246,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+89,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+90,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+647,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+648,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+91,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1202,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+92,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+93,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+649,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+650,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+94,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1194,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+95,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+96,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+651,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+652,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+97,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1190,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+98,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+99,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+653,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+654,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+100,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1186,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+101,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+102,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+655,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+656,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+103,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1182,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+104,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+105,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+657,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+658,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+106,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1178,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+107,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+108,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+659,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+660,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+109,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1174,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+110,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+111,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+661,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+662,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+112,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1170,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+113,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+114,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+663,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+664,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+115,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1166,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+116,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+117,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+665,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+666,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+118,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1162,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+119,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+120,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+667,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+668,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+121,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1238,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+122,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+123,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+669,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+670,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+124,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1158,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+125,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+126,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+671,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+672,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+127,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1274,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+128,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+129,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+673,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+674,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+130,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1270,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+131,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+132,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+675,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+676,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+133,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1266,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+134,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+135,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+677,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+678,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+136,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1262,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+137,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+138,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+679,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+680,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+139,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1258,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1635,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+140,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+142,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+681,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+141,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+682,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1254,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+143,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+144,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+683,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+684,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+145,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1250,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+146,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+147,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+685,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+686,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+148,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1242,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+149,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+150,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+687,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+688,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+151,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1198,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+152,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+153,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+689,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+690,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+154,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1234,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+155,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+156,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+691,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+692,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+157,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[30] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1154,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+158,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+159,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+693,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+694,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+160,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1230,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+161,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+162,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+695,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+696,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+163,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1226,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+164,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+165,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+697,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+698,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+166,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1222,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+167,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+168,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+699,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+700,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+169,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1218,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+170,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+171,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+701,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+702,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+172,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1214,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+173,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+174,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+703,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+704,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+175,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1210,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+176,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+177,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+705,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+706,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+178,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1206,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+179,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+180,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+707,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+708,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+181,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1151,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1281,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("over_select ");
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1280,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("over_select ");
    tracep->declBus(c+1637,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1638,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1280,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sll_select ");
    tracep->declBus(c+1277,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1637,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+46,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("sra_select ");
    tracep->declBus(c+1278,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1280,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+48,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("srl_select ");
    tracep->declBus(c+1279,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1637,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+85,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+47,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sll_inst ");
    tracep->declBus(c+1112,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"shift_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1277,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1282,"shift_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1283,"shift_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1284,"shift_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1285,"shift_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1286,"shift_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1287,"shift1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1288,"shift2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1289,"shift4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1290,"shift8_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1277,"shift16_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("shift16_inst ");
    tracep->declBus(c+1290,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1286,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1254,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1277,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift1_inst ");
    tracep->declBus(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1282,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1154,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1287,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift2_inst ");
    tracep->declBus(c+1287,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1283,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1198,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1288,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift4_inst ");
    tracep->declBus(c+1288,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1284,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1242,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1289,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift8_inst ");
    tracep->declBus(c+1289,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1285,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1250,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1290,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("sra_inst ");
    tracep->declBus(c+1112,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"shift_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1278,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"shift_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1292,"shift1_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1293,"shift1_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1294,"shift_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1295,"shift2_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1296,"shift2_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1297,"shift_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1298,"shift4_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1299,"shift4_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1300,"shift_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1301,"shift8_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1302,"shift8_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1303,"shift_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1304,"shift16_0",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1305,"shift16_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1306,"shift1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1307,"shift2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1308,"shift4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1309,"shift8_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1278,"shift16_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("select_shift1 ");
    tracep->declBus(c+1292,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1293,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1291,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift16 ");
    tracep->declBus(c+1304,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1305,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1303,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift2 ");
    tracep->declBus(c+1295,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1296,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1294,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift4 ");
    tracep->declBus(c+1298,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1299,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1297,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_shift8 ");
    tracep->declBus(c+1301,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1302,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1300,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift16_inst ");
    tracep->declBus(c+1309,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1303,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1254,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1278,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift1_inst ");
    tracep->declBus(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1291,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1154,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1306,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift2_inst ");
    tracep->declBus(c+1306,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1294,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1198,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1307,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift4_inst ");
    tracep->declBus(c+1307,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1297,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1242,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1308,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift8_inst ");
    tracep->declBus(c+1308,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1300,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1250,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1309,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("srl_inst ");
    tracep->declBus(c+1112,"in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"shift_sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1279,"out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1292,"shift_1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1310,"shift_2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1311,"shift_4",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1312,"shift_8",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1313,"shift_16",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1314,"shift1_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1315,"shift2_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1316,"shift4_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1317,"shift8_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+1279,"shift16_out",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("shift16_inst ");
    tracep->declBus(c+1317,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1313,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1254,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1279,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift1_inst ");
    tracep->declBus(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1292,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1154,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1314,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift2_inst ");
    tracep->declBus(c+1314,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1310,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1198,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1315,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift4_inst ");
    tracep->declBus(c+1315,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1311,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1242,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1316,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("shift8_inst ");
    tracep->declBus(c+1316,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1312,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1250,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1317,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sl_func ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+44,"data_out_s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+45,"data_out_u",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1150,"a",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1151,"b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"c",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+183,"a_equal_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"a_less_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+184,"a_more_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+709,"out_s",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+182,"out_u",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->pushNamePrefix("comparator_inst ");
    tracep->declBus(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+183,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+184,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+182,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+185,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+186,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+187,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1245,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1246,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+188,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+189,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+190,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+710,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+711,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+712,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1201,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1202,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+191,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+192,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+193,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+713,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+714,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+715,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1193,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1194,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+194,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+195,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+196,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+716,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+717,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+718,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1190,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+197,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+198,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+199,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+719,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+720,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+721,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1185,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1186,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+200,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+201,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+202,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+722,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+723,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+724,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1181,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1182,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+203,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+204,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+205,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+725,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+726,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+727,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1177,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1178,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+206,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+207,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+208,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+728,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+729,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+730,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1173,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1174,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+209,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+210,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+211,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+731,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+732,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+733,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1169,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1170,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+212,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+213,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+214,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+734,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+735,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+736,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1165,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1166,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+215,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+216,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+217,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+737,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+738,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+739,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1161,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1162,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+218,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+219,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+220,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+740,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+741,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+742,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1237,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1238,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+221,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+222,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+223,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+743,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+744,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+745,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1157,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1158,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+224,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+225,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+226,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+746,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+747,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+748,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1273,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1274,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+227,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+228,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+229,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+749,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+750,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+751,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1269,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1270,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+230,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+231,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+232,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+752,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+753,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+754,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1265,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1266,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+233,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+234,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+235,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+755,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+756,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+757,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1261,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1262,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+236,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+237,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+238,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+758,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+759,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+760,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1257,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1258,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+239,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+240,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+241,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+761,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+762,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+763,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1253,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1254,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+242,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+243,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+244,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+764,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+765,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+766,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1249,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1250,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+245,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+246,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+247,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+767,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+768,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+769,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1241,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1242,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+248,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+249,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+250,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+770,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+771,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+772,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1197,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1198,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+251,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+252,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+253,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+773,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+774,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+775,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1233,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1234,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+254,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+255,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+256,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+776,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+777,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+778,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[30] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1154,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+257,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+258,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+259,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+779,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+780,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+781,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1229,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1230,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+260,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+261,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+262,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+782,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+783,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+784,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1225,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1226,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+263,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+264,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+265,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+785,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+786,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+787,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1221,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1222,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+266,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+267,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+268,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+788,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+789,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+790,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1217,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1218,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+269,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+270,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+271,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+791,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+792,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+793,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1213,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1214,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+272,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+273,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+274,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+794,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+795,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+796,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1210,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+275,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+276,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+277,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+797,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+798,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+799,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1205,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1206,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+278,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+279,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+280,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+800,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+801,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+802,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1150,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1151,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1318,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1319,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1320,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("sub_func ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+43,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"rs2_neg",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("add_inst ");
    tracep->declBus(c+1112,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1635,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+43,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+281,"c",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("adder_inst ");
    tracep->declBit(c+1150,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1322,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+282,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+803,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1323,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+803,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("gen_fulladder32_low[0] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1153,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1324,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+283,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+804,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+805,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1325,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+804,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1326,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[10] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1157,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1327,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+284,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+806,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+807,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1328,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+806,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1329,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[11] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1161,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1330,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+285,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+808,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+809,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1331,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+808,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1332,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[12] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1165,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1333,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+286,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+810,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+811,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1334,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+810,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1335,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[13] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1169,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1336,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+287,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+812,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+813,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1337,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+812,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1338,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[14] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1173,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1339,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+288,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+814,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+815,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1340,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+814,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1341,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[15] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1177,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1342,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+289,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+816,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+817,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1343,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+816,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1344,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[16] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1181,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1345,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+290,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+818,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+819,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1346,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+818,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1347,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[17] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1185,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1348,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+291,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+820,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+821,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1349,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+820,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1350,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[18] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1189,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1351,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+292,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+822,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+823,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1352,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+822,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1353,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[19] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1193,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1354,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+293,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+824,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+825,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1355,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+824,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1356,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[1] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1197,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1357,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+294,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+826,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+827,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1358,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+826,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1359,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[20] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1201,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1360,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+295,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+828,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+829,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1361,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+828,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1362,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[21] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1205,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1363,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+296,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+830,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+831,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1364,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+830,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1365,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[22] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1209,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1366,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+297,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+832,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+833,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1367,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+832,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1368,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[23] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1213,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1369,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+298,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+834,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+835,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1370,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+834,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1371,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[24] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1217,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1372,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+299,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+836,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+837,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1373,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+836,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1374,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[25] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1221,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1375,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+300,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+838,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+839,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1376,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+838,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1377,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[26] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1225,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1378,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+301,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+840,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+841,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1379,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+840,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1380,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[27] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1229,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1381,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+302,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+842,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+843,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1382,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+842,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1383,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[28] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1233,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1384,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+303,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+844,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+845,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1385,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+844,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1386,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[29] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1237,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1387,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+304,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+846,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+847,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1388,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+846,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1389,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[2] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1241,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1390,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+305,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+848,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+849,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1391,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+848,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1392,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[30] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1245,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1393,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+306,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+850,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+851,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1394,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+850,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1395,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[3] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1249,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1396,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+307,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+852,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+853,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1397,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+852,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1398,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[4] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1253,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1399,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+308,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+854,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+855,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1400,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+854,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1401,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[5] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1257,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1402,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+309,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+856,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+857,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1403,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+856,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1404,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[6] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1261,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1405,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+310,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+858,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+859,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1406,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+858,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1407,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[7] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1265,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1408,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+311,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+860,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+861,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1409,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+860,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1410,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[8] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1269,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1411,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+312,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+862,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+863,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1412,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+862,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1413,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_fulladder32_low[9] ");
    tracep->pushNamePrefix("fulladder_inst_0 ");
    tracep->declBit(c+1273,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1414,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+313,"cin",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+864,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+865,"cout",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1415,"xor1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+864,"xor2",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBit(c+1416,"and1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("inv_inst ");
    tracep->declBus(c+1113,"data_in",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1321,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("xor_func ");
    tracep->declBus(c+1112,"rs1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"rs2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1147,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->pushNamePrefix("xor_inst ");
    tracep->declBus(c+1112,"data_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1113,"data_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1147,"data_out",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("brc_inst ");
    tracep->declBus(c+1108,"rs1_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1109,"rs2_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+2,"br_unsigned",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+3,"br_equal",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+4,"br_less",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+314,"w0",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"w1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+316,"w2",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"w3",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1417,"diff_sign",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1418,"neg_rs1",-1, FST_VD_IMPLICIT,FST_VT_VCD_WIRE, false,-1);
    tracep->pushNamePrefix("Signed ");
    tracep->declBus(c+1419,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBus(c+1420,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 30,0);
    tracep->declBit(c+316,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+317,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+318,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+319,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->declBus(c+320,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 30,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1421,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1422,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+321,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+322,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+323,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+866,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+867,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+868,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1423,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1424,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+324,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+325,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+326,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+869,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+870,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+871,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1425,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1426,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+327,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+328,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+329,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+872,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+873,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+874,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1427,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1428,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+330,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+331,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+332,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+875,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+876,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+877,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1429,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1430,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+333,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+334,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+335,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+878,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+879,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+880,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1431,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1432,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+336,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+337,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+338,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+881,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+882,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+883,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1433,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1434,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+339,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+340,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+341,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+884,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+885,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+886,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1435,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1436,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+342,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+343,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+344,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+887,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+888,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+889,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1437,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1438,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+345,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+346,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+347,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+890,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+891,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+892,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1439,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1440,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+348,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+349,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+350,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+893,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+894,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+895,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1441,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1442,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+351,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+352,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+353,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+896,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+897,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+898,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1443,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1444,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+354,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+355,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+356,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+899,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+900,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+901,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1445,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1446,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+357,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+358,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+359,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+902,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+903,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+904,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1447,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1448,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+360,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+361,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+362,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+905,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+906,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+907,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1449,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1450,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+363,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+364,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+365,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+908,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+909,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+910,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1451,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1452,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+366,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+367,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+368,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+911,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+912,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+913,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1453,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1454,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+369,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+370,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+371,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+914,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+915,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+916,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1455,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1456,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+372,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+373,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+374,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+917,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+918,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+919,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1457,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1458,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+375,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+376,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+377,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+920,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+921,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+922,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1459,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1460,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+378,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+379,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+380,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+923,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+924,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+925,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1461,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1462,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+381,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+382,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+383,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+926,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+927,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+928,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1463,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1464,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+384,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+385,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+386,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+929,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+930,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+931,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1465,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1466,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+387,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+388,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+389,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+932,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+933,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+934,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1467,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1468,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+390,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+391,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+392,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+935,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+936,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+937,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1469,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1470,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+393,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+394,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+395,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+938,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+939,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+940,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1471,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1472,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+396,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+397,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+398,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+941,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+942,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+943,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1473,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1474,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+399,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+400,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+401,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+944,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+945,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+946,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1475,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1476,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+402,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+403,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+404,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+947,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+948,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+949,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1477,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1478,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+405,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+406,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+407,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+950,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+951,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+952,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1479,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1480,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+408,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+409,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+410,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+953,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+954,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+955,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1481,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1482,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1483,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1484,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1485,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("Unsigned ");
    tracep->declBus(c+1108,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1109,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+314,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+315,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+411,"a_e_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+412,"a_m_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+413,"a_l_b",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->pushNamePrefix("gen_compare32[0] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1486,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1487,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+414,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+415,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+416,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+956,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+957,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+958,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[10] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1488,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1489,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+417,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+418,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+419,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+959,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+960,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+961,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[11] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1490,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1491,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+420,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+421,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+422,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+962,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+963,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+964,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[12] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1492,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1493,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+423,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+424,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+425,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+965,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+966,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+967,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[13] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1494,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1495,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+426,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+427,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+428,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+968,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+969,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+970,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[14] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1496,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1497,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+429,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+430,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+431,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+971,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+972,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+973,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[15] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1498,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1499,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+432,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+433,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+434,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+974,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+975,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+976,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[16] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1500,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1501,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+435,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+436,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+437,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+977,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+978,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+979,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[17] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1502,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1503,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+438,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+439,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+440,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+980,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+981,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+982,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[18] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1504,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1505,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+441,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+442,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+443,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+983,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+984,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+985,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[19] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1506,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1507,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+444,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+445,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+446,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+986,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+987,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+988,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[1] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1508,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1509,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+447,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+448,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+449,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+989,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+990,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+991,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[20] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1510,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1511,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+450,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+451,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+452,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+992,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+993,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+994,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[21] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1512,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1513,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+453,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+454,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+455,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+995,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+996,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+997,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[22] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1514,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1515,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+456,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+457,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+458,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+998,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+999,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1000,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[23] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1516,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1517,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+459,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+460,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+461,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1001,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1002,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1003,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[24] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1518,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1519,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+462,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+463,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+464,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1004,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1005,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1006,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[25] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1520,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1521,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+465,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+466,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+467,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1007,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1008,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1009,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[26] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1522,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1523,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+468,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+469,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+470,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1010,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1011,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1012,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[27] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1524,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1525,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+471,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+472,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+473,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1013,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1014,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1015,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[28] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1526,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1527,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+474,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+475,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+476,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1016,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1017,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1018,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[29] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1528,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1529,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+477,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+478,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+479,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1019,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1020,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1021,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[2] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1530,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1531,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+480,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+481,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+482,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1022,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1023,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1024,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[30] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1532,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1533,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+483,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+484,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+485,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1025,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1026,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1027,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[3] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1534,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1535,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+486,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+487,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+488,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1028,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1029,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1030,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[4] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1536,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1537,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+489,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+490,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+491,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1031,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1032,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1033,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[5] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1538,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1539,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+492,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+493,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+494,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1034,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1035,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1036,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[6] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1540,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1541,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+495,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+496,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+497,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1037,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1038,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1039,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[7] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1542,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1543,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+498,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+499,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+500,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1040,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1041,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1042,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[8] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1544,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1545,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+501,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+502,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+503,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1043,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1044,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1045,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("gen_compare32[9] ");
    tracep->pushNamePrefix("slave_inst ");
    tracep->declBit(c+1546,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1547,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+504,"a_e_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+505,"a_m_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+506,"a_l_b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1046,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1047,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1048,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("master_inst ");
    tracep->declBit(c+1418,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1548,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1549,"a_equal_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1550,"a_more_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1551,"a_less_b",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(3);
    tracep->pushNamePrefix("dmem_inst ");
    tracep->declBit(c+1618,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+6,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1109,"st_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1620,"io_sw",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1052,"st_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1057,"sb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"sh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1059,"sw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"lb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"lh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"lbu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"lhu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1064,"lw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"ld_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1622,"io_lcd",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1623,"io_ledg",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1624,"io_ledr",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1625,"io_hex0",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1626,"io_hex1",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1627,"io_hex2",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1628,"io_hex3",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1629,"io_hex4",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1630,"io_hex5",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1631,"io_hex6",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1632,"io_hex7",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+507,"addr_sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1552,"st_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    tracep->declBus(c+508,"ld_data_mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 31,0);
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+509+i*1,"data_input",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+1553+i*1,"temp_st",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    for (int i = 0; i < 4; ++i) {
        tracep->declBus(c+513+i*1,"temp_ld",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 7,0);
    }
    tracep->declBus(c+1639,"HEX0_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1640,"HEX1_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1641,"HEX2_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1642,"HEX3_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1643,"HEX4_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1644,"HEX5_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1645,"HEX6_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1646,"HEX7_ADR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1647,"LEDR",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1648,"LEDG",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->declBus(c+1649,"LCD",-1, FST_VD_IMPLICIT,FST_VT_VCD_PARAMETER, false,-1, 31,0);
    tracep->pushNamePrefix("LOAD_DAT ");
    tracep->declBus(c+508,"load_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1064,"lw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1060,"lb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1061,"lh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1063,"lhu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1062,"lbu_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+8,"output_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1557,"sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 4,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1558,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1559,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1560,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1561,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("STORE_DAT ");
    tracep->declBus(c+1109,"store_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1059,"sw_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1057,"sb_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1058,"sh_en",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1552,"output_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1562,"sel",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 2,0);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1563,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1564,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1565,"h",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->declBus(c+1566,"j",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1567,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1568,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1569,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk5 ");
    tracep->declBus(c+517,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk6 ");
    tracep->declBus(c+518,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk7 ");
    tracep->declBus(c+519,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk8 ");
    tracep->declBus(c+1650,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("imem_inst ");
    tracep->declBus(c+1104,"addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1056,"inst",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1570,"pbyte",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 1,0);
    tracep->declBus(c+1571,"pword",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 10,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("imm_inst ");
    tracep->declBus(c+1053,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1110,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,7);
    tracep->declBus(c+1111,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1572,"w1",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1);
    tracep->declBus(c+1573,"inst_i",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, false,-1, 9,0);
    tracep->pushNamePrefix("Comp1 ");
    tracep->declBit(c+1574,"imm_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1574,"imm_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1575,"imm_in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1576,"imm_in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"imm_in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1053,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1572,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("Comp2 ");
    tracep->declBus(c+1573,"inst",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 9,0);
    tracep->declBus(c+1053,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1577,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->pushNamePrefix("IMM0 ");
    tracep->declBit(c+1578,"imm_in1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1579,"imm_in2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"imm_in3",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"imm_in4",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1634,"imm_in5",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1053,"immsel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1580,"imm",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1581,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk2 ");
    tracep->declBus(c+1582,"i",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk3 ");
    tracep->declBus(c+1583,"j",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("unnamedblk4 ");
    tracep->declBus(c+1584,"k",-1, FST_VD_IMPLICIT,FST_VT_SV_INT, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("regfile_inst ");
    tracep->declBus(c+1105,"rs1_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1106,"rs2_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBus(c+1107,"rd_addr",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 4,0);
    tracep->declBit(c+1049,"rd_wren",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1618,"clk_i",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBit(c+1619,"rst_ni",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+520,"rd_data",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1108,"rs1_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1109,"rs2_data",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+1585+i*1,"mem",-1, FST_VD_IMPLICIT,FST_VT_SV_LOGIC, true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("unnamedblk1 ");
    tracep->declBus(c+1617,"j",-1, FST_VD_IMPLICIT,FST_VT_VCD_INTEGER, false,-1, 31,0);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("select_a_inst ");
    tracep->declBus(c+1108,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1104,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1637,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1050,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+1112,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_b_inst ");
    tracep->declBus(c+1109,"a",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1111,"b",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBit(c+1051,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1);
    tracep->declBus(c+1113,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("select_inst ");
    tracep->declBus(c+8,"a0",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+6,"a1",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+7,"a2",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->declBus(c+1055,"sel",-1,FST_VD_INPUT,FST_VT_VCD_WIRE, false,-1, 1,0);
    tracep->declBus(c+520,"s",-1,FST_VD_OUTPUT,FST_VT_VCD_WIRE, false,-1, 31,0);
    tracep->popNamePrefix(4);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedFst::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedFst* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedFst* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedFst::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedFst::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__dut__DOT__br_sel));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__dut__DOT__br_unsigned));
    bufp->fullBit(oldp+3,(vlSelf->top__DOT__dut__DOT__br_eq));
    bufp->fullBit(oldp+4,(vlSelf->top__DOT__dut__DOT__br_lt));
    bufp->fullIData(oldp+5,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__nxt_pc),32);
    bufp->fullIData(oldp+6,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_data),32);
    bufp->fullIData(oldp+7,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc_four),32);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__ld_data),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c),32);
    bufp->fullBit(oldp+10,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                            >> 0x1fU)));
    bufp->fullBit(oldp+11,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c)));
    bufp->fullBit(oldp+12,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0xaU))));
    bufp->fullBit(oldp+13,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0xbU))));
    bufp->fullBit(oldp+14,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0xcU))));
    bufp->fullBit(oldp+15,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0xdU))));
    bufp->fullBit(oldp+16,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0xeU))));
    bufp->fullBit(oldp+17,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0xfU))));
    bufp->fullBit(oldp+18,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x10U))));
    bufp->fullBit(oldp+19,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x11U))));
    bufp->fullBit(oldp+20,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x12U))));
    bufp->fullBit(oldp+21,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x13U))));
    bufp->fullBit(oldp+22,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 1U))));
    bufp->fullBit(oldp+23,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x14U))));
    bufp->fullBit(oldp+24,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x15U))));
    bufp->fullBit(oldp+25,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x16U))));
    bufp->fullBit(oldp+26,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x17U))));
    bufp->fullBit(oldp+27,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x18U))));
    bufp->fullBit(oldp+28,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x19U))));
    bufp->fullBit(oldp+29,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+30,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+31,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+32,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+33,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 2U))));
    bufp->fullBit(oldp+34,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+35,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 3U))));
    bufp->fullBit(oldp+36,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 4U))));
    bufp->fullBit(oldp+37,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 5U))));
    bufp->fullBit(oldp+38,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 6U))));
    bufp->fullBit(oldp+39,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 7U))));
    bufp->fullBit(oldp+40,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 8U))));
    bufp->fullBit(oldp+41,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                  >> 9U))));
    bufp->fullIData(oldp+42,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add),32);
    bufp->fullIData(oldp+43,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub),32);
    bufp->fullIData(oldp+44,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__slt),32);
    bufp->fullIData(oldp+45,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sltu),32);
    bufp->fullIData(oldp+46,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sll),32);
    bufp->fullIData(oldp+47,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__srl),32);
    bufp->fullIData(oldp+48,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sra),32);
    bufp->fullIData(oldp+49,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c),32);
    bufp->fullBit(oldp+50,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                            >> 0x1fU)));
    bufp->fullBit(oldp+51,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)));
    bufp->fullBit(oldp+52,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xaU))));
    bufp->fullBit(oldp+53,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xbU))));
    bufp->fullBit(oldp+54,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xcU))));
    bufp->fullBit(oldp+55,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xdU))));
    bufp->fullBit(oldp+56,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xeU))));
    bufp->fullBit(oldp+57,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0xfU))));
    bufp->fullBit(oldp+58,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x10U))));
    bufp->fullBit(oldp+59,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x11U))));
    bufp->fullBit(oldp+60,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x12U))));
    bufp->fullBit(oldp+61,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x13U))));
    bufp->fullBit(oldp+62,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 1U))));
    bufp->fullBit(oldp+63,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x14U))));
    bufp->fullBit(oldp+64,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x15U))));
    bufp->fullBit(oldp+65,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x16U))));
    bufp->fullBit(oldp+66,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x17U))));
    bufp->fullBit(oldp+67,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x18U))));
    bufp->fullBit(oldp+68,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x19U))));
    bufp->fullBit(oldp+69,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1aU))));
    bufp->fullBit(oldp+70,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1bU))));
    bufp->fullBit(oldp+71,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1cU))));
    bufp->fullBit(oldp+72,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1dU))));
    bufp->fullBit(oldp+73,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 2U))));
    bufp->fullBit(oldp+74,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 0x1eU))));
    bufp->fullBit(oldp+75,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 3U))));
    bufp->fullBit(oldp+76,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 4U))));
    bufp->fullBit(oldp+77,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 5U))));
    bufp->fullBit(oldp+78,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 6U))));
    bufp->fullBit(oldp+79,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 7U))));
    bufp->fullBit(oldp+80,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 8U))));
    bufp->fullBit(oldp+81,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c 
                                  >> 9U))));
    bufp->fullBit(oldp+82,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b)));
    bufp->fullBit(oldp+83,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b)));
    bufp->fullBit(oldp+84,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b)));
    bufp->fullBit(oldp+85,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__overflow_signal));
    bufp->fullIData(oldp+86,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b),32);
    bufp->fullIData(oldp+87,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b),32);
    bufp->fullIData(oldp+88,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b),32);
    bufp->fullBit(oldp+89,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                            >> 0x1fU)));
    bufp->fullBit(oldp+90,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                            >> 0x1fU)));
    bufp->fullBit(oldp+91,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                            >> 0x1fU)));
    bufp->fullBit(oldp+92,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x15U))));
    bufp->fullBit(oldp+93,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x15U))));
    bufp->fullBit(oldp+94,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x15U))));
    bufp->fullBit(oldp+95,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x14U))));
    bufp->fullBit(oldp+96,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x14U))));
    bufp->fullBit(oldp+97,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                  >> 0x14U))));
    bufp->fullBit(oldp+98,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                  >> 0x13U))));
    bufp->fullBit(oldp+99,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                  >> 0x13U))));
    bufp->fullBit(oldp+100,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+101,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+102,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+103,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+104,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+105,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+106,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+107,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+108,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+109,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+110,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+111,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+112,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+113,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+114,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+115,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+116,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+117,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+118,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+119,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+120,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+121,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+122,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+123,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+124,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+125,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+126,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+127,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+128,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+129,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+130,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+131,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+132,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+133,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+134,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+135,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+136,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+137,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+138,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+139,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+140,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+141,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+142,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+143,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+144,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+145,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+146,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+147,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+148,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+149,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+150,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+151,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+152,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+153,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+154,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+155,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+156,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+157,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+158,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+159,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+160,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+161,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+162,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+163,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+164,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+165,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+166,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+167,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+168,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+169,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+170,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+171,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+172,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+173,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+174,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+175,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+176,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+177,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+178,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+179,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+180,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+181,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+182,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b)));
    bufp->fullBit(oldp+183,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b)));
    bufp->fullBit(oldp+184,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b)));
    bufp->fullIData(oldp+185,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b),32);
    bufp->fullIData(oldp+186,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b),32);
    bufp->fullIData(oldp+187,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b),32);
    bufp->fullBit(oldp+188,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+189,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+190,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+191,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+192,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+193,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+194,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+195,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+196,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+197,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+198,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+199,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+200,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+201,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+202,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+203,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+204,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+205,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+206,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+207,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+208,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+209,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+210,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+211,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+212,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+213,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+214,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+215,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+216,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+217,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+218,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+219,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+220,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+221,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+222,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+223,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+224,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+225,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+226,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+227,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+228,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+229,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+230,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+231,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+232,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+233,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+234,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+235,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+236,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+237,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+238,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+239,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+240,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+241,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+242,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+243,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+244,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+245,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+246,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+247,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+248,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+249,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+250,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+251,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+252,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+253,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+254,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+255,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+256,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+257,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+258,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+259,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+260,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+261,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+262,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+263,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+264,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+265,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+266,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+267,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+268,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+269,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+270,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+271,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+272,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+273,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+274,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+275,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+276,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+277,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+278,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+279,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+280,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullIData(oldp+281,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c),32);
    bufp->fullBit(oldp+282,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                             >> 0x1fU)));
    bufp->fullBit(oldp+283,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)));
    bufp->fullBit(oldp+284,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xaU))));
    bufp->fullBit(oldp+285,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xbU))));
    bufp->fullBit(oldp+286,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xcU))));
    bufp->fullBit(oldp+287,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xdU))));
    bufp->fullBit(oldp+288,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xeU))));
    bufp->fullBit(oldp+289,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0xfU))));
    bufp->fullBit(oldp+290,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x10U))));
    bufp->fullBit(oldp+291,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x11U))));
    bufp->fullBit(oldp+292,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x12U))));
    bufp->fullBit(oldp+293,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x13U))));
    bufp->fullBit(oldp+294,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 1U))));
    bufp->fullBit(oldp+295,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x14U))));
    bufp->fullBit(oldp+296,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x15U))));
    bufp->fullBit(oldp+297,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x16U))));
    bufp->fullBit(oldp+298,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x17U))));
    bufp->fullBit(oldp+299,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x18U))));
    bufp->fullBit(oldp+300,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x19U))));
    bufp->fullBit(oldp+301,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+302,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+303,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+304,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+305,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 2U))));
    bufp->fullBit(oldp+306,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+307,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 3U))));
    bufp->fullBit(oldp+308,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 4U))));
    bufp->fullBit(oldp+309,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 5U))));
    bufp->fullBit(oldp+310,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 6U))));
    bufp->fullBit(oldp+311,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 7U))));
    bufp->fullBit(oldp+312,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 8U))));
    bufp->fullBit(oldp+313,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c 
                                   >> 9U))));
    bufp->fullBit(oldp+314,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b)));
    bufp->fullBit(oldp+315,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b)));
    bufp->fullBit(oldp+316,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b)));
    bufp->fullBit(oldp+317,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b)));
    bufp->fullIData(oldp+318,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b),31);
    bufp->fullIData(oldp+319,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b),31);
    bufp->fullIData(oldp+320,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b),31);
    bufp->fullBit(oldp+321,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+322,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+323,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+324,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+325,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+326,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+327,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+328,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+329,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+330,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+331,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+332,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+333,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+334,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+335,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+336,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+337,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+338,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+339,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+340,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+341,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+342,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+343,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+344,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+345,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+346,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+347,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+348,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+349,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+350,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+351,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+352,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+353,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+354,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+355,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+356,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+357,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+358,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+359,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+360,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+361,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+362,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+363,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+364,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+365,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+366,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+367,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+368,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+369,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+370,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+371,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+372,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+373,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+374,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+375,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+376,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+377,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+378,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+379,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+380,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+381,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+382,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+383,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+384,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+385,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+386,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+387,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+388,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+389,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+390,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+391,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+392,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+393,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+394,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+395,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+396,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+397,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+398,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+399,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+400,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+401,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+402,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+403,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+404,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+405,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+406,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+407,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+408,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+409,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+410,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                   >> 0x15U))));
    bufp->fullIData(oldp+411,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b),32);
    bufp->fullIData(oldp+412,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b),32);
    bufp->fullIData(oldp+413,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b),32);
    bufp->fullBit(oldp+414,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+415,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+416,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                             >> 0x1fU)));
    bufp->fullBit(oldp+417,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+418,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+419,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x15U))));
    bufp->fullBit(oldp+420,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+421,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+422,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x14U))));
    bufp->fullBit(oldp+423,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+424,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+425,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x13U))));
    bufp->fullBit(oldp+426,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+427,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+428,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x12U))));
    bufp->fullBit(oldp+429,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+430,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+431,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x11U))));
    bufp->fullBit(oldp+432,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+433,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+434,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x10U))));
    bufp->fullBit(oldp+435,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+436,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+437,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xfU))));
    bufp->fullBit(oldp+438,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+439,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+440,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xeU))));
    bufp->fullBit(oldp+441,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+442,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+443,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xdU))));
    bufp->fullBit(oldp+444,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+445,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+446,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xcU))));
    bufp->fullBit(oldp+447,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+448,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+449,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+450,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+451,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+452,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xbU))));
    bufp->fullBit(oldp+453,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+454,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+455,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0xaU))));
    bufp->fullBit(oldp+456,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 9U))));
    bufp->fullBit(oldp+457,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 9U))));
    bufp->fullBit(oldp+458,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 9U))));
    bufp->fullBit(oldp+459,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 8U))));
    bufp->fullBit(oldp+460,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 8U))));
    bufp->fullBit(oldp+461,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 8U))));
    bufp->fullBit(oldp+462,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 7U))));
    bufp->fullBit(oldp+463,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 7U))));
    bufp->fullBit(oldp+464,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 7U))));
    bufp->fullBit(oldp+465,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 6U))));
    bufp->fullBit(oldp+466,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 6U))));
    bufp->fullBit(oldp+467,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 6U))));
    bufp->fullBit(oldp+468,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 5U))));
    bufp->fullBit(oldp+469,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 5U))));
    bufp->fullBit(oldp+470,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 5U))));
    bufp->fullBit(oldp+471,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 4U))));
    bufp->fullBit(oldp+472,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 4U))));
    bufp->fullBit(oldp+473,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 4U))));
    bufp->fullBit(oldp+474,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 3U))));
    bufp->fullBit(oldp+475,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 3U))));
    bufp->fullBit(oldp+476,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 3U))));
    bufp->fullBit(oldp+477,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 2U))));
    bufp->fullBit(oldp+478,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 2U))));
    bufp->fullBit(oldp+479,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 2U))));
    bufp->fullBit(oldp+480,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+481,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+482,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+483,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 1U))));
    bufp->fullBit(oldp+484,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 1U))));
    bufp->fullBit(oldp+485,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 1U))));
    bufp->fullBit(oldp+486,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+487,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+488,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+489,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+490,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+491,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+492,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+493,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+494,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+495,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+496,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+497,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x19U))));
    bufp->fullBit(oldp+498,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+499,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+500,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x18U))));
    bufp->fullBit(oldp+501,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+502,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+503,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x17U))));
    bufp->fullBit(oldp+504,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+505,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                   >> 0x16U))));
    bufp->fullBit(oldp+506,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                   >> 0x16U))));
    bufp->fullCData(oldp+507,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__addr_sel),2);
    bufp->fullIData(oldp+508,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__ld_data_mem),32);
    bufp->fullCData(oldp+509,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__data_input[0]),8);
    bufp->fullCData(oldp+510,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__data_input[1]),8);
    bufp->fullCData(oldp+511,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__data_input[2]),8);
    bufp->fullCData(oldp+512,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__data_input[3]),8);
    bufp->fullCData(oldp+513,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_ld[0]),8);
    bufp->fullCData(oldp+514,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_ld[1]),8);
    bufp->fullCData(oldp+515,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_ld[2]),8);
    bufp->fullCData(oldp+516,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_ld[3]),8);
    bufp->fullIData(oldp+517,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk5__DOT__k),32);
    bufp->fullIData(oldp+518,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk6__DOT__k),32);
    bufp->fullIData(oldp+519,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk7__DOT__k),32);
    bufp->fullIData(oldp+520,(((0U == (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                ? vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__ld_data
                                : ((1U == (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                    ? vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_data
                                    : ((2U == (IData)(vlSelf->top__DOT__dut__DOT__wb_sel))
                                        ? vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc_four
                                        : 0U)))),32);
    bufp->fullBit(oldp+521,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                              ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+522,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c))));
    bufp->fullBit(oldp+523,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                   & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c))));
    bufp->fullBit(oldp+524,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+525,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+526,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+527,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+528,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+529,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+530,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+531,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+532,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+533,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+534,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+535,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+536,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+537,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+538,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+539,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+540,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+541,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+542,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+543,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+544,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+545,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+546,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+547,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+548,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+549,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+550,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+551,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+552,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+553,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+554,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+555,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+556,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+557,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+558,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+559,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+560,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+561,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+562,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+563,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+564,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+565,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+566,((1U & ((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                       >> 2U)) ^ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c 
                                                  >> 2U)))));
    bufp->fullBit(oldp+567,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                     | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                        & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c)) 
                                    | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+568,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+569,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+570,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+571,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+572,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+573,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+574,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+575,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+576,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+577,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+578,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+579,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+580,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+581,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+582,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+583,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__FA_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+584,((((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                              ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+585,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c))));
    bufp->fullBit(oldp+586,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                      & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)))));
    bufp->fullBit(oldp+587,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+588,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+589,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+590,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+591,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+592,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+593,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+594,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+595,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+596,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+597,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+598,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+599,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+600,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+601,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+602,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+603,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+604,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+605,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+606,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+607,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+608,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 1U))));
    bufp->fullBit(oldp+609,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+610,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+611,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+612,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+613,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+614,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+615,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+616,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+617,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+618,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+619,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+620,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+621,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+622,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+623,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+624,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+625,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+626,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+627,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+628,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+629,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+630,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 2U))));
    bufp->fullBit(oldp+631,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+632,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+633,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+634,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 3U))));
    bufp->fullBit(oldp+635,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+636,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 4U))));
    bufp->fullBit(oldp+637,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+638,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 5U))));
    bufp->fullBit(oldp+639,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+640,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 6U))));
    bufp->fullBit(oldp+641,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+642,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 7U))));
    bufp->fullBit(oldp+643,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+644,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 8U))));
    bufp->fullBit(oldp+645,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+646,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__add_func__DOT__add_inst__DOT__c)) 
                                   >> 9U))));
    bufp->fullBit(oldp+647,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                              >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                              >> 0x1eU)))));
    bufp->fullBit(oldp+648,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1fU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1eU) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+649,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+650,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x15U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x14U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+651,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+652,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x14U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x13U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+653,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+654,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x13U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x12U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+655,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+656,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x12U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x11U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+657,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+658,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x11U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x10U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+659,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+660,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x10U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0xfU) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+661,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xfU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+662,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xfU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 0xeU) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+663,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xeU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+664,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xeU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 0xdU) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+665,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xdU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+666,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xdU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 0xcU) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+667,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xcU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+668,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xcU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 0xbU) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+669,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1eU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+670,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1eU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1dU) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+671,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xbU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+672,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xbU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 0xaU) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+673,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0xaU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 9U))))));
    bufp->fullBit(oldp+674,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0xaU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 9U) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+675,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 9U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+676,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 9U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 8U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+677,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 8U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+678,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 8U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 7U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+679,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 7U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+680,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 7U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 6U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+681,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 6U) & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                              >> 5U)))));
    bufp->fullBit(oldp+682,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_l_b 
                                    >> 6U) | ((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 5U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+683,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 5U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+684,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 5U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 4U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+685,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 4U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+686,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 4U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 3U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+687,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 3U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+688,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 3U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 2U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+689,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 2U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+690,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 2U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 1U) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+691,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1dU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+692,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1dU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1cU) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+693,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 1U) & (~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b)))));
    bufp->fullBit(oldp+694,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 1U) | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+695,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1cU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+696,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1cU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1bU) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+697,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1bU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+698,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1bU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x1aU) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+699,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x1aU) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+700,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x1aU) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x19U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+701,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x19U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+702,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x19U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x18U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+703,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x18U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+704,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x18U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x17U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+705,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x17U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+706,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x17U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x16U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+707,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                    >> 0x16U) & (~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+708,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_m_b 
                                    >> 0x16U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 0x15U) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__check_inst__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+709,((1U & ((((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                         >> 0x1fU)) 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b) 
                                    | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                        >> 0x1fU) & 
                                       (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                           >> 0x1fU)))) 
                                   | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                       >> 0x1fU) & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b)))));
    bufp->fullBit(oldp+710,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                              >> 0x1fU) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                               ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                              >> 0x1eU)))));
    bufp->fullBit(oldp+711,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1fU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x1eU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x1eU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+712,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1fU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x1eU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+713,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+714,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x15U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x14U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x14U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+715,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x15U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x14U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x14U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+716,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+717,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x14U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x13U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+718,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x14U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x13U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x13U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+719,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+720,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x13U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x12U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+721,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x13U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x12U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x12U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+722,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+723,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x12U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x11U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x11U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+724,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x12U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x11U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x11U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+725,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+726,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x11U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+727,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x11U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x10U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x10U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+728,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+729,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x10U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0xfU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+730,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x10U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0xfU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0xfU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+731,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xfU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+732,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xfU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  >> 0xeU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+733,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xfU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                    >> 0xeU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+734,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xeU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+735,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xeU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0xdU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+736,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xeU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                    >> 0xdU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+737,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xdU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+738,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xdU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  >> 0xcU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+739,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xdU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                    >> 0xcU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+740,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xcU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+741,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xcU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0xbU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+742,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xcU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                    >> 0xbU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+743,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1eU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+744,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1eU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x1dU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x1dU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+745,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1eU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+746,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xbU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+747,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xbU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0xaU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+748,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xbU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                    >> 0xaU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+749,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0xaU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                   >> 9U))))));
    bufp->fullBit(oldp+750,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0xaU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 9U))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+751,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0xaU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                    >> 9U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+752,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 9U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+753,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 9U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 8U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+754,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 9U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 8U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+755,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 8U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+756,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 8U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 7U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+757,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 8U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 7U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 7U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+758,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 7U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+759,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 7U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 6U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 6U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+760,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 7U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 6U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 6U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+761,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 6U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+762,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 6U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 5U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 5U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+763,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 6U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 5U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 5U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+764,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 5U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+765,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 5U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 4U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 4U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+766,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 5U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 4U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 4U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+767,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 4U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+768,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 4U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 3U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 3U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+769,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 4U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 3U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 3U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+770,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 3U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+771,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 3U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 2U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 2U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+772,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 3U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 2U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+773,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 2U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+774,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 2U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                >> 1U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                   >> 1U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+775,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 2U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 1U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                  >> 1U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+776,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1dU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+777,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1dU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x1cU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x1cU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+778,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1dU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x1cU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+779,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                 ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b))))));
    bufp->fullBit(oldp+780,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 1U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                               & (~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+781,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a) 
                                               & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+782,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1cU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+783,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1cU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x1bU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+784,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1cU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x1bU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x1bU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+785,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1bU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+786,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1bU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x1aU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x1aU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+787,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1bU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x1aU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+788,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x1aU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+789,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x1aU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x19U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x19U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+790,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x1aU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x19U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x19U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+791,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x19U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+792,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x19U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x18U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x18U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+793,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x19U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x18U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x18U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+794,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x18U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+795,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x18U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x17U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x17U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+796,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x18U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x17U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x17U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+797,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x17U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+798,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x17U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x16U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x16U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+799,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x17U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x16U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x16U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+800,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                    >> 0x16U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+801,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_m_b 
                                    >> 0x16U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                   >> 0x15U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                      >> 0x15U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+802,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_l_b 
                                    >> 0x16U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                                    >> 0x15U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                     >> 0x15U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sl_func__DOT__comparator_inst__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+803,((((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                              ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                             >> 0x1fU)));
    bufp->fullBit(oldp+804,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c))));
    bufp->fullBit(oldp+805,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                      & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)))));
    bufp->fullBit(oldp+806,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+807,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xaU))));
    bufp->fullBit(oldp+808,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+809,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xbU))));
    bufp->fullBit(oldp+810,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+811,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xcU))));
    bufp->fullBit(oldp+812,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+813,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xdU))));
    bufp->fullBit(oldp+814,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+815,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xeU))));
    bufp->fullBit(oldp+816,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+817,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0xfU))));
    bufp->fullBit(oldp+818,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+819,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x10U))));
    bufp->fullBit(oldp+820,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+821,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x11U))));
    bufp->fullBit(oldp+822,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+823,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x12U))));
    bufp->fullBit(oldp+824,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+825,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x13U))));
    bufp->fullBit(oldp+826,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 1U))));
    bufp->fullBit(oldp+827,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 1U))));
    bufp->fullBit(oldp+828,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+829,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x14U))));
    bufp->fullBit(oldp+830,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+831,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x15U))));
    bufp->fullBit(oldp+832,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+833,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x16U))));
    bufp->fullBit(oldp+834,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+835,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x17U))));
    bufp->fullBit(oldp+836,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+837,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x18U))));
    bufp->fullBit(oldp+838,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+839,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x19U))));
    bufp->fullBit(oldp+840,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+841,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1aU))));
    bufp->fullBit(oldp+842,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+843,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1bU))));
    bufp->fullBit(oldp+844,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+845,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1cU))));
    bufp->fullBit(oldp+846,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+847,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1dU))));
    bufp->fullBit(oldp+848,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 2U))));
    bufp->fullBit(oldp+849,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 2U))));
    bufp->fullBit(oldp+850,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+851,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 0x1eU))));
    bufp->fullBit(oldp+852,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 3U))));
    bufp->fullBit(oldp+853,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 3U))));
    bufp->fullBit(oldp+854,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 4U))));
    bufp->fullBit(oldp+855,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 4U))));
    bufp->fullBit(oldp+856,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 5U))));
    bufp->fullBit(oldp+857,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 5U))));
    bufp->fullBit(oldp+858,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 6U))));
    bufp->fullBit(oldp+859,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 6U))));
    bufp->fullBit(oldp+860,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 7U))));
    bufp->fullBit(oldp+861,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 7U))));
    bufp->fullBit(oldp+862,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 8U))));
    bufp->fullBit(oldp+863,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 8U))));
    bufp->fullBit(oldp+864,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c) 
                                   >> 9U))));
    bufp->fullBit(oldp+865,((1U & (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                        | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                    | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                       & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__add_inst__DOT__c)) 
                                   >> 9U))));
    bufp->fullBit(oldp+866,((IData)(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                      >> 0x1eU) & (~ 
                                                   ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+867,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1eU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x1dU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1dU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+868,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1eU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+869,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+870,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x14U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x13U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+871,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x14U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x13U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x13U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+872,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+873,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x13U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x12U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+874,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x13U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x12U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x12U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+875,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+876,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x12U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x11U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x11U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+877,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x12U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x11U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x11U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+878,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+879,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x11U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+880,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x11U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x10U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x10U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+881,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+882,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x10U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0xfU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+883,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x10U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0xfU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xfU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+884,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xfU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+885,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xfU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xeU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+886,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xfU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xeU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+887,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xeU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+888,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xeU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xdU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+889,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xeU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xdU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+890,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xdU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+891,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xdU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xcU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+892,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xdU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xcU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+893,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xcU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+894,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xcU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xbU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+895,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xcU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xbU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+896,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xbU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+897,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xbU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xaU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+898,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xbU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xaU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+899,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1dU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x1cU))))));
    bufp->fullBit(oldp+900,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1dU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x1cU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1cU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+901,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1dU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1cU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x1cU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1dU))))));
    bufp->fullBit(oldp+902,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0xaU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 9U))))));
    bufp->fullBit(oldp+903,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0xaU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 9U))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+904,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0xaU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 9U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+905,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 9U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+906,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 9U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 8U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+907,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 9U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 8U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 8U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+908,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 8U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 7U))))));
    bufp->fullBit(oldp+909,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 8U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 7U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 7U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+910,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 8U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 7U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 7U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 8U))))));
    bufp->fullBit(oldp+911,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 7U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 6U))))));
    bufp->fullBit(oldp+912,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 7U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 6U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 6U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+913,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 7U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 6U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 6U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 7U))))));
    bufp->fullBit(oldp+914,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 6U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 5U))))));
    bufp->fullBit(oldp+915,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 6U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 5U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 5U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+916,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 6U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 5U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 5U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 6U))))));
    bufp->fullBit(oldp+917,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 5U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 4U))))));
    bufp->fullBit(oldp+918,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 5U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 4U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 4U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+919,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 5U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 4U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 4U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 5U))))));
    bufp->fullBit(oldp+920,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 4U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 3U))))));
    bufp->fullBit(oldp+921,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 4U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 3U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 3U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+922,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 4U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 3U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 3U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 4U))))));
    bufp->fullBit(oldp+923,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 3U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 2U))))));
    bufp->fullBit(oldp+924,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 3U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 2U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 2U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+925,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 3U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 2U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 3U))))));
    bufp->fullBit(oldp+926,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 2U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 1U))))));
    bufp->fullBit(oldp+927,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 2U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 1U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 1U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+928,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 2U) | (((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 1U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                  >> 1U)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 2U))))));
    bufp->fullBit(oldp+929,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data))))));
    bufp->fullBit(oldp+930,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 1U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                               & (~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data)) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+931,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data) 
                                               & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                 >> 1U))))));
    bufp->fullBit(oldp+932,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1cU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x1bU))))));
    bufp->fullBit(oldp+933,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1cU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x1bU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1bU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+934,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1cU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1bU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x1bU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1cU))))));
    bufp->fullBit(oldp+935,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1bU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x1aU))))));
    bufp->fullBit(oldp+936,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1bU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x1aU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1aU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+937,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1bU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1aU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x1aU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1bU))))));
    bufp->fullBit(oldp+938,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x1aU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x19U))))));
    bufp->fullBit(oldp+939,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x1aU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x19U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x19U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+940,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x1aU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x19U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x19U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x1aU))))));
    bufp->fullBit(oldp+941,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x19U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x18U))))));
    bufp->fullBit(oldp+942,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x19U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x18U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x18U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+943,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x19U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x18U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x18U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x19U))))));
    bufp->fullBit(oldp+944,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x18U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x17U))))));
    bufp->fullBit(oldp+945,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x18U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x17U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x17U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+946,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x18U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x17U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x17U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x18U))))));
    bufp->fullBit(oldp+947,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x17U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x16U))))));
    bufp->fullBit(oldp+948,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x17U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x16U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x16U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+949,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x17U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x16U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x16U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x17U))))));
    bufp->fullBit(oldp+950,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x16U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x15U))))));
    bufp->fullBit(oldp+951,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x16U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x15U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x15U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+952,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x16U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x15U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x15U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x16U))))));
    bufp->fullBit(oldp+953,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+954,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_m_b 
                                    >> 0x15U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x14U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x14U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+955,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_l_b 
                                    >> 0x15U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x14U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x14U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Signed__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+956,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                              >> 0x1fU) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                               ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                              >> 0x1eU)))));
    bufp->fullBit(oldp+957,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x1fU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x1eU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1eU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+958,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x1fU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1eU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x1eU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1fU))))));
    bufp->fullBit(oldp+959,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x15U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x14U))))));
    bufp->fullBit(oldp+960,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x15U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x14U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x14U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+961,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x15U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x14U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x14U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x15U))))));
    bufp->fullBit(oldp+962,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x14U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x13U))))));
    bufp->fullBit(oldp+963,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x14U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x13U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x13U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+964,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x14U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x13U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x13U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x14U))))));
    bufp->fullBit(oldp+965,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x13U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x12U))))));
    bufp->fullBit(oldp+966,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x13U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x12U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x12U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+967,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x13U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x12U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x12U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x13U))))));
    bufp->fullBit(oldp+968,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x12U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x11U))))));
    bufp->fullBit(oldp+969,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x12U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x11U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x11U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+970,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x12U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x11U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x11U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x12U))))));
    bufp->fullBit(oldp+971,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x11U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x10U))))));
    bufp->fullBit(oldp+972,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x11U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x10U) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x10U))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+973,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x11U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x10U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x10U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x11U))))));
    bufp->fullBit(oldp+974,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x10U) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0xfU))))));
    bufp->fullBit(oldp+975,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x10U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xfU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0xfU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+976,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x10U) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0xfU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xfU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x10U))))));
    bufp->fullBit(oldp+977,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xfU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+978,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xfU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xeU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xeU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+979,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xfU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xeU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xeU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xfU))))));
    bufp->fullBit(oldp+980,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xeU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+981,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xeU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xdU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xdU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+982,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xeU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xdU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xdU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xeU))))));
    bufp->fullBit(oldp+983,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xdU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+984,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xdU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xcU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xcU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+985,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xdU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xcU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xcU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xdU))))));
    bufp->fullBit(oldp+986,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xcU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+987,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xcU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xbU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xbU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+988,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xcU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xbU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xbU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xcU))))));
    bufp->fullBit(oldp+989,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0x1eU) & (~ 
                                                 ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 0x1dU))))));
    bufp->fullBit(oldp+990,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0x1eU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0x1dU) 
                                                  & (~ 
                                                     (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1dU))) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+991,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0x1eU) | (((~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1dU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0x1dU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                    >> 0x1eU))))));
    bufp->fullBit(oldp+992,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xbU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+993,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xbU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 0xaU) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 0xaU))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+994,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xbU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 0xaU)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 0xaU)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xbU))))));
    bufp->fullBit(oldp+995,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 0xaU) & (~ (
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 9U))))));
    bufp->fullBit(oldp+996,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 0xaU) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 9U) 
                                                 & (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                     >> 9U))) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+997,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                    >> 0xaU) | (((~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   >> 9U)) 
                                                 & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 9U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                   >> 0xaU))))));
    bufp->fullBit(oldp+998,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                    >> 9U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                 >> 8U))))));
    bufp->fullBit(oldp+999,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                    >> 9U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                >> 8U) 
                                               & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 8U))) 
                                              & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                 >> 9U))))));
    bufp->fullBit(oldp+1000,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 9U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 8U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 8U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 9U))))));
    bufp->fullBit(oldp+1001,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 8U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 7U))))));
    bufp->fullBit(oldp+1002,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 8U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 7U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 7U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 8U))))));
    bufp->fullBit(oldp+1003,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 8U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 7U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 7U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 8U))))));
    bufp->fullBit(oldp+1004,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 7U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 6U))))));
    bufp->fullBit(oldp+1005,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 7U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 6U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 6U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 7U))))));
    bufp->fullBit(oldp+1006,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 7U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 6U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 6U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 7U))))));
    bufp->fullBit(oldp+1007,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 6U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 5U))))));
    bufp->fullBit(oldp+1008,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 6U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 5U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 5U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 6U))))));
    bufp->fullBit(oldp+1009,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 6U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 5U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 5U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 6U))))));
    bufp->fullBit(oldp+1010,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 5U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1011,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 5U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 4U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 4U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 5U))))));
    bufp->fullBit(oldp+1012,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 5U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 4U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 4U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 5U))))));
    bufp->fullBit(oldp+1013,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 4U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 3U))))));
    bufp->fullBit(oldp+1014,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 4U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 3U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 3U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1015,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 4U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 3U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 3U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 4U))))));
    bufp->fullBit(oldp+1016,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 3U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1017,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 3U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 2U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 2U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 3U))))));
    bufp->fullBit(oldp+1018,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 3U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 2U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 2U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 3U))))));
    bufp->fullBit(oldp+1019,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 2U) & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                   ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1020,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 2U) | (((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                 >> 1U) 
                                                & (~ 
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                    >> 1U))) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1021,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 2U) | (((~ 
                                                 (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  >> 1U)) 
                                                & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 1U)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 2U))))));
    bufp->fullBit(oldp+1022,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1dU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x1cU))))));
    bufp->fullBit(oldp+1023,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1dU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1cU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x1cU))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1dU))))));
    bufp->fullBit(oldp+1024,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1dU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x1cU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1cU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1dU))))));
    bufp->fullBit(oldp+1025,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 1U) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                  ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data))))));
    bufp->fullBit(oldp+1026,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 1U) | ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                & (~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data)) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1027,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 1U) | (((~ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data) 
                                                & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                               & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                  >> 1U))))));
    bufp->fullBit(oldp+1028,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1cU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x1bU))))));
    bufp->fullBit(oldp+1029,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1cU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1bU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x1bU))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1cU))))));
    bufp->fullBit(oldp+1030,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1cU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x1bU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1bU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1cU))))));
    bufp->fullBit(oldp+1031,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1bU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x1aU))))));
    bufp->fullBit(oldp+1032,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1bU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x1aU) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x1aU))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1bU))))));
    bufp->fullBit(oldp+1033,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1bU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x1aU)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x1aU)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1bU))))));
    bufp->fullBit(oldp+1034,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x1aU) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x19U))))));
    bufp->fullBit(oldp+1035,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x1aU) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x19U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x19U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+1036,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x1aU) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x19U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x19U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x1aU))))));
    bufp->fullBit(oldp+1037,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x19U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x18U))))));
    bufp->fullBit(oldp+1038,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x19U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x18U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x18U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x19U))))));
    bufp->fullBit(oldp+1039,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x19U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x18U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x18U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x19U))))));
    bufp->fullBit(oldp+1040,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x18U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x17U))))));
    bufp->fullBit(oldp+1041,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x18U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x17U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x17U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x18U))))));
    bufp->fullBit(oldp+1042,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x18U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x17U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x17U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x18U))))));
    bufp->fullBit(oldp+1043,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x17U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x16U))))));
    bufp->fullBit(oldp+1044,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x17U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x16U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x16U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x17U))))));
    bufp->fullBit(oldp+1045,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x17U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x16U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x16U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x17U))))));
    bufp->fullBit(oldp+1046,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                     >> 0x16U) & (~ 
                                                  ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                                   >> 0x15U))))));
    bufp->fullBit(oldp+1047,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_m_b 
                                     >> 0x16U) | ((
                                                   (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                    >> 0x15U) 
                                                   & (~ 
                                                      (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                       >> 0x15U))) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x16U))))));
    bufp->fullBit(oldp+1048,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_l_b 
                                     >> 0x16U) | ((
                                                   (~ 
                                                    (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                                     >> 0x15U)) 
                                                   & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                      >> 0x15U)) 
                                                  & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__Unsigned__DOT__a_e_b 
                                                     >> 0x16U))))));
    bufp->fullBit(oldp+1049,(vlSelf->top__DOT__dut__DOT__rd_wren));
    bufp->fullCData(oldp+1050,(vlSelf->top__DOT__dut__DOT__op_a_sel),2);
    bufp->fullBit(oldp+1051,(vlSelf->top__DOT__dut__DOT__op_b_sel));
    bufp->fullBit(oldp+1052,(vlSelf->top__DOT__dut__DOT__mem_wren));
    bufp->fullCData(oldp+1053,(vlSelf->top__DOT__dut__DOT__immsel),5);
    bufp->fullCData(oldp+1054,(vlSelf->top__DOT__dut__DOT__alu_op),4);
    bufp->fullCData(oldp+1055,(vlSelf->top__DOT__dut__DOT__wb_sel),2);
    bufp->fullIData(oldp+1056,(vlSelf->top__DOT__dut__DOT__inst),32);
    bufp->fullBit(oldp+1057,(vlSelf->top__DOT__dut__DOT__sb_en));
    bufp->fullBit(oldp+1058,(vlSelf->top__DOT__dut__DOT__sh_en));
    bufp->fullBit(oldp+1059,(vlSelf->top__DOT__dut__DOT__sw_en));
    bufp->fullBit(oldp+1060,(vlSelf->top__DOT__dut__DOT__lb_en));
    bufp->fullBit(oldp+1061,(vlSelf->top__DOT__dut__DOT__lh_en));
    bufp->fullBit(oldp+1062,(vlSelf->top__DOT__dut__DOT__lbu_en));
    bufp->fullBit(oldp+1063,(vlSelf->top__DOT__dut__DOT__lhu_en));
    bufp->fullBit(oldp+1064,(vlSelf->top__DOT__dut__DOT__lw_en));
    bufp->fullSData(oldp+1065,(vlSelf->top__DOT__dut__DOT__inst_i),11);
    bufp->fullCData(oldp+1066,((0x1fU & ((IData)(vlSelf->top__DOT__dut__DOT__inst_i) 
                                         >> 2U))),5);
    bufp->fullCData(oldp+1067,((7U & ((IData)(vlSelf->top__DOT__dut__DOT__inst_i) 
                                      >> 7U))),3);
    bufp->fullBit(oldp+1068,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__inst_i) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1069,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__rv32i));
    bufp->fullBit(oldp+1070,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type));
    bufp->fullBit(oldp+1071,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type));
    bufp->fullBit(oldp+1072,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__l_type));
    bufp->fullBit(oldp+1073,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__s_type));
    bufp->fullBit(oldp+1074,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__b_type));
    bufp->fullBit(oldp+1075,((((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                               & (~ (IData)((0U != 
                                             (0x380U 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))) 
                              & (~ ((IData)(vlSelf->top__DOT__dut__DOT__inst_i) 
                                    >> 0xaU)))));
    bufp->fullBit(oldp+1076,((((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                               & (~ (IData)((0U != 
                                             (0x380U 
                                              & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))) 
                              & ((IData)(vlSelf->top__DOT__dut__DOT__inst_i) 
                                 >> 0xaU))));
    bufp->fullBit(oldp+1077,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x80U == (0x380U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1078,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x100U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1079,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x180U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1080,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x200U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1081,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (0x280U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__inst_i))))));
    bufp->fullBit(oldp+1082,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (0x680U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__inst_i))))));
    bufp->fullBit(oldp+1083,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x300U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1084,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__r_type) 
                              & (IData)((0x380U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1085,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (~ (IData)((0U != (0x380U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__inst_i))))))));
    bufp->fullBit(oldp+1086,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x80U == (0x380U 
                                                   & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1087,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x100U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1088,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x180U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1089,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x200U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1090,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (0x280U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__inst_i))))));
    bufp->fullBit(oldp+1091,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (0x680U == (0x780U 
                                            & (IData)(vlSelf->top__DOT__dut__DOT__inst_i))))));
    bufp->fullBit(oldp+1092,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x300U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1093,(((IData)(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__i_type) 
                              & (IData)((0x380U == 
                                         (0x380U & (IData)(vlSelf->top__DOT__dut__DOT__inst_i)))))));
    bufp->fullBit(oldp+1094,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__beq_en));
    bufp->fullBit(oldp+1095,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__bne_en));
    bufp->fullBit(oldp+1096,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__blt_en));
    bufp->fullBit(oldp+1097,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__bge_en));
    bufp->fullBit(oldp+1098,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__bltu_en));
    bufp->fullBit(oldp+1099,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__bgeu_en));
    bufp->fullBit(oldp+1100,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__jal_en));
    bufp->fullBit(oldp+1101,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__jalr_en));
    bufp->fullBit(oldp+1102,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__lui_en));
    bufp->fullBit(oldp+1103,(vlSelf->top__DOT__dut__DOT__ctr_inst__DOT__auipc_en));
    bufp->fullIData(oldp+1104,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc),32);
    bufp->fullCData(oldp+1105,((0x1fU & (vlSelf->top__DOT__dut__DOT__inst 
                                         >> 0xfU))),5);
    bufp->fullCData(oldp+1106,((0x1fU & (vlSelf->top__DOT__dut__DOT__inst 
                                         >> 0x14U))),5);
    bufp->fullCData(oldp+1107,((0x1fU & (vlSelf->top__DOT__dut__DOT__inst 
                                         >> 7U))),5);
    bufp->fullIData(oldp+1108,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data),32);
    bufp->fullIData(oldp+1109,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data),32);
    bufp->fullIData(oldp+1110,((vlSelf->top__DOT__dut__DOT__inst 
                                >> 7U)),25);
    bufp->fullIData(oldp+1111,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_value),32);
    bufp->fullIData(oldp+1112,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a),32);
    bufp->fullIData(oldp+1113,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b),32);
    bufp->fullBit(oldp+1114,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1115,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc)));
    bufp->fullBit(oldp+1116,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1117,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1118,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1119,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1120,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1121,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1122,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1123,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1124,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1125,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1126,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 1U))));
    bufp->fullBit(oldp+1127,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1128,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1129,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1130,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1131,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1132,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1133,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1134,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1135,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1136,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1137,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 2U))));
    bufp->fullBit(oldp+1138,((1U & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                       >> 2U)))));
    bufp->fullBit(oldp+1139,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1140,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 3U))));
    bufp->fullBit(oldp+1141,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 4U))));
    bufp->fullBit(oldp+1142,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 5U))));
    bufp->fullBit(oldp+1143,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 6U))));
    bufp->fullBit(oldp+1144,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 7U))));
    bufp->fullBit(oldp+1145,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 8U))));
    bufp->fullBit(oldp+1146,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                    >> 9U))));
    bufp->fullIData(oldp+1147,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b)),32);
    bufp->fullIData(oldp+1148,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b)),32);
    bufp->fullIData(oldp+1149,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                | vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b)),32);
    bufp->fullBit(oldp+1150,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1151,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1152,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1153,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a)));
    bufp->fullBit(oldp+1154,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b)));
    bufp->fullBit(oldp+1155,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b))));
    bufp->fullBit(oldp+1156,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b))));
    bufp->fullBit(oldp+1157,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1158,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1159,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1160,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1161,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1162,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1163,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1164,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1165,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1166,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1167,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1168,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1169,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1170,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1171,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1172,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1173,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1174,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1175,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1176,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1177,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1178,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1179,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1180,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1181,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1182,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1183,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1184,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1185,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1186,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1187,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1188,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1189,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1190,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1191,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1192,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1193,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1194,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1195,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1196,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1197,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 1U))));
    bufp->fullBit(oldp+1198,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 1U))));
    bufp->fullBit(oldp+1199,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 1U))));
    bufp->fullBit(oldp+1200,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 1U))));
    bufp->fullBit(oldp+1201,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1202,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1203,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1204,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1205,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1206,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1207,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1208,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1209,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1210,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1211,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1212,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1213,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1214,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1215,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1216,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1217,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1218,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1219,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1220,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1221,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1222,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1223,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1224,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1225,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1226,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1227,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1228,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1229,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1230,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1231,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1232,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1233,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1234,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1235,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1236,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1237,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1238,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1239,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1240,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1241,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 2U))));
    bufp->fullBit(oldp+1242,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 2U))));
    bufp->fullBit(oldp+1243,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 2U))));
    bufp->fullBit(oldp+1244,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 2U))));
    bufp->fullBit(oldp+1245,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1246,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1247,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1248,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1249,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 3U))));
    bufp->fullBit(oldp+1250,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 3U))));
    bufp->fullBit(oldp+1251,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 3U))));
    bufp->fullBit(oldp+1252,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 3U))));
    bufp->fullBit(oldp+1253,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 4U))));
    bufp->fullBit(oldp+1254,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 4U))));
    bufp->fullBit(oldp+1255,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 4U))));
    bufp->fullBit(oldp+1256,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 4U))));
    bufp->fullBit(oldp+1257,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 5U))));
    bufp->fullBit(oldp+1258,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 5U))));
    bufp->fullBit(oldp+1259,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 5U))));
    bufp->fullBit(oldp+1260,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 5U))));
    bufp->fullBit(oldp+1261,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 6U))));
    bufp->fullBit(oldp+1262,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 6U))));
    bufp->fullBit(oldp+1263,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 6U))));
    bufp->fullBit(oldp+1264,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 6U))));
    bufp->fullBit(oldp+1265,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 7U))));
    bufp->fullBit(oldp+1266,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 7U))));
    bufp->fullBit(oldp+1267,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 7U))));
    bufp->fullBit(oldp+1268,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 7U))));
    bufp->fullBit(oldp+1269,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 8U))));
    bufp->fullBit(oldp+1270,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 8U))));
    bufp->fullBit(oldp+1271,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 8U))));
    bufp->fullBit(oldp+1272,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 8U))));
    bufp->fullBit(oldp+1273,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    >> 9U))));
    bufp->fullBit(oldp+1274,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                    >> 9U))));
    bufp->fullBit(oldp+1275,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 9U))));
    bufp->fullBit(oldp+1276,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                    >> 9U))));
    bufp->fullIData(oldp+1277,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift16_out),32);
    bufp->fullIData(oldp+1278,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift16_out),32);
    bufp->fullIData(oldp+1279,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift16_out),32);
    bufp->fullIData(oldp+1280,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__result_inst__DOT__overflow_value),32);
    bufp->fullBit(oldp+1281,((1U & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                       >> 0x1fU)))));
    bufp->fullIData(oldp+1282,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                << 1U)),32);
    bufp->fullIData(oldp+1283,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift1_out 
                                << 2U)),32);
    bufp->fullIData(oldp+1284,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift2_out 
                                << 4U)),32);
    bufp->fullIData(oldp+1285,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift4_out 
                                << 8U)),32);
    bufp->fullIData(oldp+1286,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift8_out 
                                << 0x10U)),32);
    bufp->fullIData(oldp+1287,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift1_out),32);
    bufp->fullIData(oldp+1288,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift2_out),32);
    bufp->fullIData(oldp+1289,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift4_out),32);
    bufp->fullIData(oldp+1290,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sll_inst__DOT__shift8_out),32);
    bufp->fullIData(oldp+1291,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_1),32);
    bufp->fullIData(oldp+1292,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                >> 1U)),32);
    bufp->fullIData(oldp+1293,((0x80000000U | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                               >> 1U))),32);
    bufp->fullIData(oldp+1294,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_2),32);
    bufp->fullIData(oldp+1295,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out 
                                >> 2U)),32);
    bufp->fullIData(oldp+1296,((0xc0000000U | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out 
                                               >> 2U))),32);
    bufp->fullIData(oldp+1297,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_4),32);
    bufp->fullIData(oldp+1298,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out 
                                >> 4U)),32);
    bufp->fullIData(oldp+1299,((0xf0000000U | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out 
                                               >> 4U))),32);
    bufp->fullIData(oldp+1300,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_8),32);
    bufp->fullIData(oldp+1301,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out 
                                >> 8U)),32);
    bufp->fullIData(oldp+1302,((0xff000000U | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out 
                                               >> 8U))),32);
    bufp->fullIData(oldp+1303,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift_16),32);
    bufp->fullIData(oldp+1304,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out 
                                >> 0x10U)),32);
    bufp->fullIData(oldp+1305,((0xffff0000U | (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out 
                                               >> 0x10U))),32);
    bufp->fullIData(oldp+1306,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift1_out),32);
    bufp->fullIData(oldp+1307,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift2_out),32);
    bufp->fullIData(oldp+1308,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift4_out),32);
    bufp->fullIData(oldp+1309,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__sra_inst__DOT__shift8_out),32);
    bufp->fullIData(oldp+1310,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift1_out 
                                >> 2U)),32);
    bufp->fullIData(oldp+1311,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift2_out 
                                >> 4U)),32);
    bufp->fullIData(oldp+1312,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift4_out 
                                >> 8U)),32);
    bufp->fullIData(oldp+1313,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift8_out 
                                >> 0x10U)),32);
    bufp->fullIData(oldp+1314,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift1_out),32);
    bufp->fullIData(oldp+1315,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift2_out),32);
    bufp->fullIData(oldp+1316,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift4_out),32);
    bufp->fullIData(oldp+1317,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__shift_comp__DOT__srl_inst__DOT__shift8_out),32);
    bufp->fullBit(oldp+1318,((1U & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                        ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1319,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                               >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+1320,(((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                  >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_b 
                                                >> 0x1fU))));
    bufp->fullIData(oldp+1321,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg),32);
    bufp->fullBit(oldp+1322,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1323,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                               ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1324,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg)));
    bufp->fullBit(oldp+1325,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg))));
    bufp->fullBit(oldp+1326,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                    & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg))));
    bufp->fullBit(oldp+1327,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1328,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1329,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1330,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1331,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1332,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1333,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1334,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1335,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1336,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1337,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1338,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1339,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1340,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1341,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1342,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1343,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1344,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1345,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1346,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1347,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1348,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1349,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1350,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1351,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1352,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1353,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1354,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1355,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1356,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1357,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 1U))));
    bufp->fullBit(oldp+1358,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 1U))));
    bufp->fullBit(oldp+1359,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 1U))));
    bufp->fullBit(oldp+1360,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1361,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1362,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1363,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1364,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1365,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1366,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1367,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1368,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1369,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1370,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1371,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1372,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1373,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1374,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1375,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1376,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1377,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1378,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1379,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1380,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1381,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1382,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1383,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1384,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1385,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1386,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1387,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1388,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1389,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1390,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 2U))));
    bufp->fullBit(oldp+1391,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 2U))));
    bufp->fullBit(oldp+1392,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 2U))));
    bufp->fullBit(oldp+1393,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1394,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1395,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1396,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 3U))));
    bufp->fullBit(oldp+1397,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 3U))));
    bufp->fullBit(oldp+1398,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 3U))));
    bufp->fullBit(oldp+1399,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 4U))));
    bufp->fullBit(oldp+1400,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 4U))));
    bufp->fullBit(oldp+1401,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 4U))));
    bufp->fullBit(oldp+1402,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 5U))));
    bufp->fullBit(oldp+1403,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 5U))));
    bufp->fullBit(oldp+1404,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 5U))));
    bufp->fullBit(oldp+1405,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 6U))));
    bufp->fullBit(oldp+1406,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 6U))));
    bufp->fullBit(oldp+1407,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 6U))));
    bufp->fullBit(oldp+1408,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 7U))));
    bufp->fullBit(oldp+1409,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 7U))));
    bufp->fullBit(oldp+1410,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 7U))));
    bufp->fullBit(oldp+1411,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 8U))));
    bufp->fullBit(oldp+1412,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 8U))));
    bufp->fullBit(oldp+1413,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 8U))));
    bufp->fullBit(oldp+1414,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg 
                                    >> 9U))));
    bufp->fullBit(oldp+1415,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 9U))));
    bufp->fullBit(oldp+1416,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__operand_a 
                                     & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__alu_inst__DOT__sub_func__DOT__rs2_neg) 
                                    >> 9U))));
    bufp->fullBit(oldp+1417,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__brc_inst__DOT__diff_sign));
    bufp->fullBit(oldp+1418,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                              >> 0x1fU)));
    bufp->fullIData(oldp+1419,((0x7fffffffU & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data)),31);
    bufp->fullIData(oldp+1420,((0x7fffffffU & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data)),31);
    bufp->fullBit(oldp+1421,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1422,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1423,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1424,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1425,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1426,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1427,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1428,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1429,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1430,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1431,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1432,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1433,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1434,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1435,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1436,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1437,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1438,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1439,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1440,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1441,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1442,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1443,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1444,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1445,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 9U))));
    bufp->fullBit(oldp+1446,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 9U))));
    bufp->fullBit(oldp+1447,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 8U))));
    bufp->fullBit(oldp+1448,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 8U))));
    bufp->fullBit(oldp+1449,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 7U))));
    bufp->fullBit(oldp+1450,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 7U))));
    bufp->fullBit(oldp+1451,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 6U))));
    bufp->fullBit(oldp+1452,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 6U))));
    bufp->fullBit(oldp+1453,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 5U))));
    bufp->fullBit(oldp+1454,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 5U))));
    bufp->fullBit(oldp+1455,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 4U))));
    bufp->fullBit(oldp+1456,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 4U))));
    bufp->fullBit(oldp+1457,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 3U))));
    bufp->fullBit(oldp+1458,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 3U))));
    bufp->fullBit(oldp+1459,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 2U))));
    bufp->fullBit(oldp+1460,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 2U))));
    bufp->fullBit(oldp+1461,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 1U))));
    bufp->fullBit(oldp+1462,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 1U))));
    bufp->fullBit(oldp+1463,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data)));
    bufp->fullBit(oldp+1464,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data)));
    bufp->fullBit(oldp+1465,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1466,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1467,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1468,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1469,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1470,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1471,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1472,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1473,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1474,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1475,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1476,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1477,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1478,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1479,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1480,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1481,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1482,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1483,((1U & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                        ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1484,((1U & ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                     >> 0x1eU) & (~ 
                                                  (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                   >> 0x1eU))))));
    bufp->fullBit(oldp+1485,((1U & ((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                        >> 0x1eU)) 
                                    & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                       >> 0x1eU)))));
    bufp->fullBit(oldp+1486,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1487,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1eU))));
    bufp->fullBit(oldp+1488,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1489,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x14U))));
    bufp->fullBit(oldp+1490,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1491,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x13U))));
    bufp->fullBit(oldp+1492,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1493,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x12U))));
    bufp->fullBit(oldp+1494,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1495,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x11U))));
    bufp->fullBit(oldp+1496,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1497,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x10U))));
    bufp->fullBit(oldp+1498,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1499,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xfU))));
    bufp->fullBit(oldp+1500,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1501,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xeU))));
    bufp->fullBit(oldp+1502,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1503,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xdU))));
    bufp->fullBit(oldp+1504,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1505,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xcU))));
    bufp->fullBit(oldp+1506,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1507,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xbU))));
    bufp->fullBit(oldp+1508,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1509,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1dU))));
    bufp->fullBit(oldp+1510,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1511,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0xaU))));
    bufp->fullBit(oldp+1512,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 9U))));
    bufp->fullBit(oldp+1513,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 9U))));
    bufp->fullBit(oldp+1514,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 8U))));
    bufp->fullBit(oldp+1515,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 8U))));
    bufp->fullBit(oldp+1516,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 7U))));
    bufp->fullBit(oldp+1517,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 7U))));
    bufp->fullBit(oldp+1518,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 6U))));
    bufp->fullBit(oldp+1519,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 6U))));
    bufp->fullBit(oldp+1520,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 5U))));
    bufp->fullBit(oldp+1521,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 5U))));
    bufp->fullBit(oldp+1522,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 4U))));
    bufp->fullBit(oldp+1523,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 4U))));
    bufp->fullBit(oldp+1524,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 3U))));
    bufp->fullBit(oldp+1525,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 3U))));
    bufp->fullBit(oldp+1526,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 2U))));
    bufp->fullBit(oldp+1527,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 2U))));
    bufp->fullBit(oldp+1528,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 1U))));
    bufp->fullBit(oldp+1529,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 1U))));
    bufp->fullBit(oldp+1530,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1531,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1cU))));
    bufp->fullBit(oldp+1532,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data)));
    bufp->fullBit(oldp+1533,((1U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data)));
    bufp->fullBit(oldp+1534,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1535,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1bU))));
    bufp->fullBit(oldp+1536,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1537,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x1aU))));
    bufp->fullBit(oldp+1538,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1539,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x19U))));
    bufp->fullBit(oldp+1540,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1541,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x18U))));
    bufp->fullBit(oldp+1542,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1543,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x17U))));
    bufp->fullBit(oldp+1544,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1545,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x16U))));
    bufp->fullBit(oldp+1546,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1547,((1U & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                    >> 0x15U))));
    bufp->fullBit(oldp+1548,((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1549,((1U & (~ ((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                        ^ vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data) 
                                       >> 0x1fU)))));
    bufp->fullBit(oldp+1550,(((vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                               >> 0x1fU) & (~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                               >> 0x1fU)))));
    bufp->fullBit(oldp+1551,(((~ (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs1_data 
                                  >> 0x1fU)) & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__rs2_data 
                                                >> 0x1fU))));
    bufp->fullIData(oldp+1552,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__st_data_mem),32);
    bufp->fullCData(oldp+1553,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_st[0]),8);
    bufp->fullCData(oldp+1554,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_st[1]),8);
    bufp->fullCData(oldp+1555,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_st[2]),8);
    bufp->fullCData(oldp+1556,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__temp_st[3]),8);
    bufp->fullCData(oldp+1557,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__LOAD_DAT__DOT__sel),5);
    bufp->fullIData(oldp+1558,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1559,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1560,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk3__DOT__i),32);
    bufp->fullIData(oldp+1561,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__LOAD_DAT__DOT__unnamedblk4__DOT__i),32);
    bufp->fullCData(oldp+1562,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__STORE_DAT__DOT__sel),3);
    bufp->fullIData(oldp+1563,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__STORE_DAT__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1564,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__STORE_DAT__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1565,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__h),32);
    bufp->fullIData(oldp+1566,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk1__DOT__j),32);
    bufp->fullIData(oldp+1567,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk2__DOT__k),32);
    bufp->fullIData(oldp+1568,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk3__DOT__k),32);
    bufp->fullIData(oldp+1569,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk4__DOT__k),32);
    bufp->fullCData(oldp+1570,((3U & vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc)),2);
    bufp->fullSData(oldp+1571,((0x7ffU & (vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__pc 
                                          >> 2U))),11);
    bufp->fullBit(oldp+1572,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__w1));
    bufp->fullSData(oldp+1573,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__inst_i),10);
    bufp->fullBit(oldp+1574,((vlSelf->top__DOT__dut__DOT__inst 
                              >> 0x1fU)));
    bufp->fullBit(oldp+1575,((1U & (vlSelf->top__DOT__dut__DOT__inst 
                                    >> 7U))));
    bufp->fullBit(oldp+1576,((1U & (vlSelf->top__DOT__dut__DOT__inst 
                                    >> 0x14U))));
    bufp->fullCData(oldp+1577,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT____Vcellout__Comp2__imm),5);
    bufp->fullBit(oldp+1578,((1U & ((IData)(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__inst_i) 
                                    >> 5U))));
    bufp->fullBit(oldp+1579,((1U & (IData)(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__inst_i))));
    bufp->fullBit(oldp+1580,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__Comp2__DOT____Vcellout__IMM0__imm));
    bufp->fullIData(oldp+1581,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__unnamedblk1__DOT__i),32);
    bufp->fullIData(oldp+1582,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__unnamedblk2__DOT__i),32);
    bufp->fullIData(oldp+1583,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__unnamedblk3__DOT__j),32);
    bufp->fullIData(oldp+1584,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__imm_inst__DOT__unnamedblk4__DOT__k),32);
    bufp->fullIData(oldp+1585,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[0]),32);
    bufp->fullIData(oldp+1586,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[1]),32);
    bufp->fullIData(oldp+1587,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[2]),32);
    bufp->fullIData(oldp+1588,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[3]),32);
    bufp->fullIData(oldp+1589,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[4]),32);
    bufp->fullIData(oldp+1590,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[5]),32);
    bufp->fullIData(oldp+1591,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[6]),32);
    bufp->fullIData(oldp+1592,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[7]),32);
    bufp->fullIData(oldp+1593,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[8]),32);
    bufp->fullIData(oldp+1594,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[9]),32);
    bufp->fullIData(oldp+1595,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[10]),32);
    bufp->fullIData(oldp+1596,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[11]),32);
    bufp->fullIData(oldp+1597,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[12]),32);
    bufp->fullIData(oldp+1598,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[13]),32);
    bufp->fullIData(oldp+1599,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[14]),32);
    bufp->fullIData(oldp+1600,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[15]),32);
    bufp->fullIData(oldp+1601,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[16]),32);
    bufp->fullIData(oldp+1602,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[17]),32);
    bufp->fullIData(oldp+1603,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[18]),32);
    bufp->fullIData(oldp+1604,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[19]),32);
    bufp->fullIData(oldp+1605,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[20]),32);
    bufp->fullIData(oldp+1606,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[21]),32);
    bufp->fullIData(oldp+1607,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[22]),32);
    bufp->fullIData(oldp+1608,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[23]),32);
    bufp->fullIData(oldp+1609,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[24]),32);
    bufp->fullIData(oldp+1610,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[25]),32);
    bufp->fullIData(oldp+1611,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[26]),32);
    bufp->fullIData(oldp+1612,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[27]),32);
    bufp->fullIData(oldp+1613,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[28]),32);
    bufp->fullIData(oldp+1614,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[29]),32);
    bufp->fullIData(oldp+1615,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[30]),32);
    bufp->fullIData(oldp+1616,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__mem[31]),32);
    bufp->fullIData(oldp+1617,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__regfile_inst__DOT__unnamedblk1__DOT__j),32);
    bufp->fullBit(oldp+1618,(vlSelf->clk_i));
    bufp->fullBit(oldp+1619,(vlSelf->rst_ni));
    bufp->fullIData(oldp+1620,(vlSelf->io_sw_i),32);
    bufp->fullIData(oldp+1621,(vlSelf->pc_debug_o),32);
    bufp->fullIData(oldp+1622,(vlSelf->io_lcd_o),32);
    bufp->fullIData(oldp+1623,(vlSelf->io_ledg_o),32);
    bufp->fullIData(oldp+1624,(vlSelf->io_ledr_o),32);
    bufp->fullIData(oldp+1625,(vlSelf->io_hex0_o),32);
    bufp->fullIData(oldp+1626,(vlSelf->io_hex1_o),32);
    bufp->fullIData(oldp+1627,(vlSelf->io_hex2_o),32);
    bufp->fullIData(oldp+1628,(vlSelf->io_hex3_o),32);
    bufp->fullIData(oldp+1629,(vlSelf->io_hex4_o),32);
    bufp->fullIData(oldp+1630,(vlSelf->io_hex5_o),32);
    bufp->fullIData(oldp+1631,(vlSelf->io_hex6_o),32);
    bufp->fullIData(oldp+1632,(vlSelf->io_hex7_o),32);
    bufp->fullIData(oldp+1633,(4U),32);
    bufp->fullBit(oldp+1634,(0U));
    bufp->fullBit(oldp+1635,(1U));
    bufp->fullIData(oldp+1636,(0x20U),32);
    bufp->fullIData(oldp+1637,(0U),32);
    bufp->fullIData(oldp+1638,(0xffffffffU),32);
    bufp->fullIData(oldp+1639,(0U),32);
    bufp->fullIData(oldp+1640,(4U),32);
    bufp->fullIData(oldp+1641,(8U),32);
    bufp->fullIData(oldp+1642,(0xcU),32);
    bufp->fullIData(oldp+1643,(0x10U),32);
    bufp->fullIData(oldp+1644,(0x14U),32);
    bufp->fullIData(oldp+1645,(0x18U),32);
    bufp->fullIData(oldp+1646,(0x1cU),32);
    bufp->fullIData(oldp+1647,(0x20U),32);
    bufp->fullIData(oldp+1648,(0x24U),32);
    bufp->fullIData(oldp+1649,(0x28U),32);
    bufp->fullIData(oldp+1650,(vlSelf->top__DOT__dut__DOT__datapath_inst__DOT__dmem_inst__DOT__unnamedblk8__DOT__k),32);
}
