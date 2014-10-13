clear all
close all

Flag_NL = 1;

b_ref_1   = load(sprintf('hmm_res_ref/b_ref_cut_1_nl%g.txt'  , Flag_NL));
b_ref_2   = load(sprintf('hmm_res_ref/b_ref_cut_2_nl%g.txt'  , Flag_NL));
b_ref_3   = load(sprintf('hmm_res_ref/b_ref_cut_3_nl%g.txt'  , Flag_NL));
b_ref_4   = load(sprintf('hmm_res_ref/b_ref_cut_4_nl%g.txt'  , Flag_NL));

b_macro_1 = load(sprintf('hmm_macro_res/b_hmm_cut_1_nl%g.txt', Flag_NL));
b_macro_2 = load(sprintf('hmm_macro_res/b_hmm_cut_2_nl%g.txt', Flag_NL));
b_macro_3 = load(sprintf('hmm_macro_res/b_hmm_cut_3_nl%g.txt', Flag_NL));
b_macro_4 = load(sprintf('hmm_macro_res/b_hmm_cut_4_nl%g.txt', Flag_NL));

b_meso_11 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP11_TS0.txt', Flag_NL));
b_meso_12 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP12_TS0.txt', Flag_NL));
b_meso_13 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP13_TS0.txt', Flag_NL));
b_meso_14 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP14_TS0.txt', Flag_NL));

b_meso_21 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP21_TS0.txt', Flag_NL));
b_meso_22 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP22_TS0.txt', Flag_NL));
b_meso_23 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP23_TS0.txt', Flag_NL));
b_meso_24 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP24_TS0.txt', Flag_NL));

b_meso_31 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP31_TS0.txt', Flag_NL));
b_meso_32 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP32_TS0.txt', Flag_NL));
b_meso_33 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP33_TS0.txt', Flag_NL));
b_meso_34 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP34_TS0.txt', Flag_NL));

b_meso_41 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP41_TS0.txt', Flag_NL));
b_meso_42 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP42_TS0.txt', Flag_NL));
b_meso_43 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP43_TS0.txt', Flag_NL));
b_meso_44 = load(sprintf('hmm_meso_res/cuts/b_LocalCut_GP44_TS0.txt', Flag_NL));

figure(1)
hold on
plot(b_ref_1(:,4), b_ref_1(:,9), 'b')
plot(b_macro_1(:,4), b_macro_1(:,9), 'k')
plot(b_meso_11(:,6), b_meso_11(:,8), 'r')
plot(b_meso_12(:,6), b_meso_12(:,8), 'm')
plot(b_meso_13(:,6), b_meso_13(:,8), 'c')
plot(b_meso_14(:,6), b_meso_14(:,8), 'g')
legend('Ref', 'Macro', 'Meso_1', 'Meso_2', 'Meso_3', 'Meso_4')
hold off

figure(2)
hold on
plot(b_ref_2(:,4), b_ref_2(:,9), 'b')
plot(b_macro_2(:,4), b_macro_2(:,9), 'k')
plot(b_meso_21(:,6), b_meso_21(:,8), 'r')
plot(b_meso_22(:,6), b_meso_22(:,8), 'm')
plot(b_meso_23(:,6), b_meso_23(:,8), 'c')
plot(b_meso_24(:,6), b_meso_24(:,8), 'g')
legend('Ref', 'Macro', 'Meso_1', 'Meso_2', 'Meso_3', 'Meso_4')
hold off

figure(3)
hold on
plot(b_ref_3(:,4), b_ref_3(:,9), 'b')
plot(b_macro_3(:,4), b_macro_3(:,9), 'k')
plot(b_meso_31(:,6), b_meso_31(:,8), 'r')
plot(b_meso_32(:,6), b_meso_32(:,8), 'm')
plot(b_meso_33(:,6), b_meso_33(:,8), 'c')
plot(b_meso_34(:,6), b_meso_34(:,8), 'g')
legend('Ref', 'Macro', 'Meso_1', 'Meso_2', 'Meso_3', 'Meso_4')
hold off

figure(4)
hold on
plot(b_ref_4(:,4), b_ref_4(:,9), 'b')
plot(b_macro_4(:,4), b_macro_4(:,9), 'k')
plot(b_meso_41(:,6), b_meso_41(:,8), 'r')
plot(b_meso_42(:,6), b_meso_42(:,8), 'm')
plot(b_meso_43(:,6), b_meso_43(:,8), 'c')
plot(b_meso_44(:,6), b_meso_44(:,8), 'g')
legend('Ref', 'Macro', 'Meso_1', 'Meso_2', 'Meso_3', 'Meso_4')
hold off