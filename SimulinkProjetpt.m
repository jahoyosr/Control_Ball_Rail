function pt=SimulinkProjetpt
pt = [];

  
pt(1).blockname = 'PID Controller';
pt(1).paramname = 'P';
pt(1).class     = 'scalar';
pt(1).nrows     = 1;
pt(1).ncols     = 1;
pt(1).subsource = 'SS_DOUBLE';
pt(1).ndims     = '2';
pt(1).size      = '[]';
pt(1).isStruct  = false;
pt(1).symbol     = 'SimulinkProjet_P.PIDController_P';
pt(1).baseaddr   = '&SimulinkProjet_P.PIDController_P';
pt(1).dtname     = 'real_T';

pt(getlenPT) = pt(1);


  
pt(2).blockname = 'PID Controller';
pt(2).paramname = 'I';
pt(2).class     = 'scalar';
pt(2).nrows     = 1;
pt(2).ncols     = 1;
pt(2).subsource = 'SS_DOUBLE';
pt(2).ndims     = '2';
pt(2).size      = '[]';
pt(2).isStruct  = false;
pt(2).symbol     = 'SimulinkProjet_P.PIDController_I';
pt(2).baseaddr   = '&SimulinkProjet_P.PIDController_I';
pt(2).dtname     = 'real_T';



  
pt(3).blockname = 'PID Controller';
pt(3).paramname = 'D';
pt(3).class     = 'scalar';
pt(3).nrows     = 1;
pt(3).ncols     = 1;
pt(3).subsource = 'SS_DOUBLE';
pt(3).ndims     = '2';
pt(3).size      = '[]';
pt(3).isStruct  = false;
pt(3).symbol     = 'SimulinkProjet_P.PIDController_D';
pt(3).baseaddr   = '&SimulinkProjet_P.PIDController_D';
pt(3).dtname     = 'real_T';



  
pt(4).blockname = 'PID Controller';
pt(4).paramname = 'N';
pt(4).class     = 'scalar';
pt(4).nrows     = 1;
pt(4).ncols     = 1;
pt(4).subsource = 'SS_DOUBLE';
pt(4).ndims     = '2';
pt(4).size      = '[]';
pt(4).isStruct  = false;
pt(4).symbol     = 'SimulinkProjet_P.PIDController_N';
pt(4).baseaddr   = '&SimulinkProjet_P.PIDController_N';
pt(4).dtname     = 'real_T';



  
pt(5).blockname = 'PID Controller2';
pt(5).paramname = 'P';
pt(5).class     = 'scalar';
pt(5).nrows     = 1;
pt(5).ncols     = 1;
pt(5).subsource = 'SS_DOUBLE';
pt(5).ndims     = '2';
pt(5).size      = '[]';
pt(5).isStruct  = false;
pt(5).symbol     = 'SimulinkProjet_P.PIDController2_P';
pt(5).baseaddr   = '&SimulinkProjet_P.PIDController2_P';
pt(5).dtname     = 'real_T';



  
pt(6).blockname = 'PID Controller2';
pt(6).paramname = 'I';
pt(6).class     = 'scalar';
pt(6).nrows     = 1;
pt(6).ncols     = 1;
pt(6).subsource = 'SS_DOUBLE';
pt(6).ndims     = '2';
pt(6).size      = '[]';
pt(6).isStruct  = false;
pt(6).symbol     = 'SimulinkProjet_P.PIDController2_I';
pt(6).baseaddr   = '&SimulinkProjet_P.PIDController2_I';
pt(6).dtname     = 'real_T';



  
pt(7).blockname = 'PID Controller2';
pt(7).paramname = 'D';
pt(7).class     = 'scalar';
pt(7).nrows     = 1;
pt(7).ncols     = 1;
pt(7).subsource = 'SS_DOUBLE';
pt(7).ndims     = '2';
pt(7).size      = '[]';
pt(7).isStruct  = false;
pt(7).symbol     = 'SimulinkProjet_P.PIDController2_D';
pt(7).baseaddr   = '&SimulinkProjet_P.PIDController2_D';
pt(7).dtname     = 'real_T';



  
pt(8).blockname = 'PID Controller2';
pt(8).paramname = 'N';
pt(8).class     = 'scalar';
pt(8).nrows     = 1;
pt(8).ncols     = 1;
pt(8).subsource = 'SS_DOUBLE';
pt(8).ndims     = '2';
pt(8).size      = '[]';
pt(8).isStruct  = false;
pt(8).symbol     = 'SimulinkProjet_P.PIDController2_N';
pt(8).baseaddr   = '&SimulinkProjet_P.PIDController2_N';
pt(8).dtname     = 'real_T';



  
pt(9).blockname = 'SBPA';
pt(9).paramname = 'A';
pt(9).class     = 'scalar';
pt(9).nrows     = 1;
pt(9).ncols     = 1;
pt(9).subsource = 'SS_DOUBLE';
pt(9).ndims     = '2';
pt(9).size      = '[]';
pt(9).isStruct  = false;
pt(9).symbol     = 'SimulinkProjet_P.SBPA_A';
pt(9).baseaddr   = '&SimulinkProjet_P.SBPA_A';
pt(9).dtname     = 'real_T';



  
pt(10).blockname = 'SBPA';
pt(10).paramname = 'Offset';
pt(10).class     = 'scalar';
pt(10).nrows     = 1;
pt(10).ncols     = 1;
pt(10).subsource = 'SS_DOUBLE';
pt(10).ndims     = '2';
pt(10).size      = '[]';
pt(10).isStruct  = false;
pt(10).symbol     = 'SimulinkProjet_P.SBPA_Offset';
pt(10).baseaddr   = '&SimulinkProjet_P.SBPA_Offset';
pt(10).dtname     = 'real_T';



  
pt(11).blockname = 'Constant';
pt(11).paramname = 'Value';
pt(11).class     = 'scalar';
pt(11).nrows     = 1;
pt(11).ncols     = 1;
pt(11).subsource = 'SS_DOUBLE';
pt(11).ndims     = '2';
pt(11).size      = '[]';
pt(11).isStruct  = false;
pt(11).symbol     = 'SimulinkProjet_P.Constant_Value_m';
pt(11).baseaddr   = '&SimulinkProjet_P.Constant_Value_m';
pt(11).dtname     = 'real_T';



  
pt(12).blockname = 'Constant1';
pt(12).paramname = 'Value';
pt(12).class     = 'scalar';
pt(12).nrows     = 1;
pt(12).ncols     = 1;
pt(12).subsource = 'SS_DOUBLE';
pt(12).ndims     = '2';
pt(12).size      = '[]';
pt(12).isStruct  = false;
pt(12).symbol     = 'SimulinkProjet_P.Constant1_Value';
pt(12).baseaddr   = '&SimulinkProjet_P.Constant1_Value';
pt(12).dtname     = 'real_T';



  
pt(13).blockname = 'Saturation';
pt(13).paramname = 'UpperLimit';
pt(13).class     = 'scalar';
pt(13).nrows     = 1;
pt(13).ncols     = 1;
pt(13).subsource = 'SS_DOUBLE';
pt(13).ndims     = '2';
pt(13).size      = '[]';
pt(13).isStruct  = false;
pt(13).symbol     = 'SimulinkProjet_P.Saturation_UpperSat';
pt(13).baseaddr   = '&SimulinkProjet_P.Saturation_UpperSat';
pt(13).dtname     = 'real_T';



  
pt(14).blockname = 'Saturation';
pt(14).paramname = 'LowerLimit';
pt(14).class     = 'scalar';
pt(14).nrows     = 1;
pt(14).ncols     = 1;
pt(14).subsource = 'SS_DOUBLE';
pt(14).ndims     = '2';
pt(14).size      = '[]';
pt(14).isStruct  = false;
pt(14).symbol     = 'SimulinkProjet_P.Saturation_LowerSat';
pt(14).baseaddr   = '&SimulinkProjet_P.Saturation_LowerSat';
pt(14).dtname     = 'real_T';



  
pt(15).blockname = 'PCI-6024E AD';
pt(15).paramname = 'P1';
pt(15).class     = 'vector';
pt(15).nrows     = 1;
pt(15).ncols     = 2;
pt(15).subsource = 'SS_DOUBLE';
pt(15).ndims     = '2';
pt(15).size      = '[]';
pt(15).isStruct  = false;
pt(15).symbol     = 'SimulinkProjet_P.PCI6024EAD_P1';
pt(15).baseaddr   = '&SimulinkProjet_P.PCI6024EAD_P1[0]';
pt(15).dtname     = 'real_T';



  
pt(16).blockname = 'PCI-6024E AD';
pt(16).paramname = 'P2';
pt(16).class     = 'vector';
pt(16).nrows     = 1;
pt(16).ncols     = 2;
pt(16).subsource = 'SS_DOUBLE';
pt(16).ndims     = '2';
pt(16).size      = '[]';
pt(16).isStruct  = false;
pt(16).symbol     = 'SimulinkProjet_P.PCI6024EAD_P2';
pt(16).baseaddr   = '&SimulinkProjet_P.PCI6024EAD_P2[0]';
pt(16).dtname     = 'real_T';



  
pt(17).blockname = 'PCI-6024E AD';
pt(17).paramname = 'P3';
pt(17).class     = 'vector';
pt(17).nrows     = 1;
pt(17).ncols     = 2;
pt(17).subsource = 'SS_DOUBLE';
pt(17).ndims     = '2';
pt(17).size      = '[]';
pt(17).isStruct  = false;
pt(17).symbol     = 'SimulinkProjet_P.PCI6024EAD_P3';
pt(17).baseaddr   = '&SimulinkProjet_P.PCI6024EAD_P3[0]';
pt(17).dtname     = 'real_T';



  
pt(18).blockname = 'PCI-6024E AD';
pt(18).paramname = 'P4';
pt(18).class     = 'scalar';
pt(18).nrows     = 1;
pt(18).ncols     = 1;
pt(18).subsource = 'SS_DOUBLE';
pt(18).ndims     = '2';
pt(18).size      = '[]';
pt(18).isStruct  = false;
pt(18).symbol     = 'SimulinkProjet_P.PCI6024EAD_P4';
pt(18).baseaddr   = '&SimulinkProjet_P.PCI6024EAD_P4';
pt(18).dtname     = 'real_T';



  
pt(19).blockname = 'PCI-6024E AD';
pt(19).paramname = 'P5';
pt(19).class     = 'scalar';
pt(19).nrows     = 1;
pt(19).ncols     = 1;
pt(19).subsource = 'SS_DOUBLE';
pt(19).ndims     = '2';
pt(19).size      = '[]';
pt(19).isStruct  = false;
pt(19).symbol     = 'SimulinkProjet_P.PCI6024EAD_P5';
pt(19).baseaddr   = '&SimulinkProjet_P.PCI6024EAD_P5';
pt(19).dtname     = 'real_T';



  
pt(20).blockname = 'PCI-6024E AD';
pt(20).paramname = 'P6';
pt(20).class     = 'scalar';
pt(20).nrows     = 1;
pt(20).ncols     = 1;
pt(20).subsource = 'SS_DOUBLE';
pt(20).ndims     = '2';
pt(20).size      = '[]';
pt(20).isStruct  = false;
pt(20).symbol     = 'SimulinkProjet_P.PCI6024EAD_P6';
pt(20).baseaddr   = '&SimulinkProjet_P.PCI6024EAD_P6';
pt(20).dtname     = 'real_T';



  
pt(21).blockname = 'PCI-6024E DA';
pt(21).paramname = 'P1';
pt(21).class     = 'scalar';
pt(21).nrows     = 1;
pt(21).ncols     = 1;
pt(21).subsource = 'SS_DOUBLE';
pt(21).ndims     = '2';
pt(21).size      = '[]';
pt(21).isStruct  = false;
pt(21).symbol     = 'SimulinkProjet_P.PCI6024EDA_P1';
pt(21).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P1';
pt(21).dtname     = 'real_T';



  
pt(22).blockname = 'PCI-6024E DA';
pt(22).paramname = 'P2';
pt(22).class     = 'scalar';
pt(22).nrows     = 1;
pt(22).ncols     = 1;
pt(22).subsource = 'SS_DOUBLE';
pt(22).ndims     = '2';
pt(22).size      = '[]';
pt(22).isStruct  = false;
pt(22).symbol     = 'SimulinkProjet_P.PCI6024EDA_P2';
pt(22).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P2';
pt(22).dtname     = 'real_T';



  
pt(23).blockname = 'PCI-6024E DA';
pt(23).paramname = 'P3';
pt(23).class     = 'scalar';
pt(23).nrows     = 1;
pt(23).ncols     = 1;
pt(23).subsource = 'SS_DOUBLE';
pt(23).ndims     = '2';
pt(23).size      = '[]';
pt(23).isStruct  = false;
pt(23).symbol     = 'SimulinkProjet_P.PCI6024EDA_P3';
pt(23).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P3';
pt(23).dtname     = 'real_T';



  
pt(24).blockname = 'PCI-6024E DA';
pt(24).paramname = 'P4';
pt(24).class     = 'scalar';
pt(24).nrows     = 1;
pt(24).ncols     = 1;
pt(24).subsource = 'SS_DOUBLE';
pt(24).ndims     = '2';
pt(24).size      = '[]';
pt(24).isStruct  = false;
pt(24).symbol     = 'SimulinkProjet_P.PCI6024EDA_P4';
pt(24).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P4';
pt(24).dtname     = 'real_T';



  
pt(25).blockname = 'PCI-6024E DA';
pt(25).paramname = 'P5';
pt(25).class     = 'scalar';
pt(25).nrows     = 1;
pt(25).ncols     = 1;
pt(25).subsource = 'SS_DOUBLE';
pt(25).ndims     = '2';
pt(25).size      = '[]';
pt(25).isStruct  = false;
pt(25).symbol     = 'SimulinkProjet_P.PCI6024EDA_P5';
pt(25).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P5';
pt(25).dtname     = 'real_T';



  
pt(26).blockname = 'PCI-6024E DA';
pt(26).paramname = 'P6';
pt(26).class     = 'scalar';
pt(26).nrows     = 1;
pt(26).ncols     = 1;
pt(26).subsource = 'SS_DOUBLE';
pt(26).ndims     = '2';
pt(26).size      = '[]';
pt(26).isStruct  = false;
pt(26).symbol     = 'SimulinkProjet_P.PCI6024EDA_P6';
pt(26).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P6';
pt(26).dtname     = 'real_T';



  
pt(27).blockname = 'PCI-6024E DA';
pt(27).paramname = 'P7';
pt(27).class     = 'scalar';
pt(27).nrows     = 1;
pt(27).ncols     = 1;
pt(27).subsource = 'SS_DOUBLE';
pt(27).ndims     = '2';
pt(27).size      = '[]';
pt(27).isStruct  = false;
pt(27).symbol     = 'SimulinkProjet_P.PCI6024EDA_P7';
pt(27).baseaddr   = '&SimulinkProjet_P.PCI6024EDA_P7';
pt(27).dtname     = 'real_T';



  
pt(28).blockname = 'Sine Wave';
pt(28).paramname = 'Amplitude';
pt(28).class     = 'scalar';
pt(28).nrows     = 1;
pt(28).ncols     = 1;
pt(28).subsource = 'SS_DOUBLE';
pt(28).ndims     = '2';
pt(28).size      = '[]';
pt(28).isStruct  = false;
pt(28).symbol     = 'SimulinkProjet_P.SineWave_Amp';
pt(28).baseaddr   = '&SimulinkProjet_P.SineWave_Amp';
pt(28).dtname     = 'real_T';



  
pt(29).blockname = 'Sine Wave';
pt(29).paramname = 'Bias';
pt(29).class     = 'scalar';
pt(29).nrows     = 1;
pt(29).ncols     = 1;
pt(29).subsource = 'SS_DOUBLE';
pt(29).ndims     = '2';
pt(29).size      = '[]';
pt(29).isStruct  = false;
pt(29).symbol     = 'SimulinkProjet_P.SineWave_Bias';
pt(29).baseaddr   = '&SimulinkProjet_P.SineWave_Bias';
pt(29).dtname     = 'real_T';



  
pt(30).blockname = 'Sine Wave';
pt(30).paramname = 'Frequency';
pt(30).class     = 'scalar';
pt(30).nrows     = 1;
pt(30).ncols     = 1;
pt(30).subsource = 'SS_DOUBLE';
pt(30).ndims     = '2';
pt(30).size      = '[]';
pt(30).isStruct  = false;
pt(30).symbol     = 'SimulinkProjet_P.SineWave_Freq';
pt(30).baseaddr   = '&SimulinkProjet_P.SineWave_Freq';
pt(30).dtname     = 'real_T';



  
pt(31).blockname = 'Sine Wave';
pt(31).paramname = 'SinH';
pt(31).class     = 'scalar';
pt(31).nrows     = 1;
pt(31).ncols     = 1;
pt(31).subsource = 'SS_DOUBLE';
pt(31).ndims     = '2';
pt(31).size      = '[]';
pt(31).isStruct  = false;
pt(31).symbol     = 'SimulinkProjet_P.SineWave_Hsin';
pt(31).baseaddr   = '&SimulinkProjet_P.SineWave_Hsin';
pt(31).dtname     = 'real_T';



  
pt(32).blockname = 'Sine Wave';
pt(32).paramname = 'CosH';
pt(32).class     = 'scalar';
pt(32).nrows     = 1;
pt(32).ncols     = 1;
pt(32).subsource = 'SS_DOUBLE';
pt(32).ndims     = '2';
pt(32).size      = '[]';
pt(32).isStruct  = false;
pt(32).symbol     = 'SimulinkProjet_P.SineWave_HCos';
pt(32).baseaddr   = '&SimulinkProjet_P.SineWave_HCos';
pt(32).dtname     = 'real_T';



  
pt(33).blockname = 'Sine Wave';
pt(33).paramname = 'SinPhi';
pt(33).class     = 'scalar';
pt(33).nrows     = 1;
pt(33).ncols     = 1;
pt(33).subsource = 'SS_DOUBLE';
pt(33).ndims     = '2';
pt(33).size      = '[]';
pt(33).isStruct  = false;
pt(33).symbol     = 'SimulinkProjet_P.SineWave_PSin';
pt(33).baseaddr   = '&SimulinkProjet_P.SineWave_PSin';
pt(33).dtname     = 'real_T';



  
pt(34).blockname = 'Sine Wave';
pt(34).paramname = 'CosPhi';
pt(34).class     = 'scalar';
pt(34).nrows     = 1;
pt(34).ncols     = 1;
pt(34).subsource = 'SS_DOUBLE';
pt(34).ndims     = '2';
pt(34).size      = '[]';
pt(34).isStruct  = false;
pt(34).symbol     = 'SimulinkProjet_P.SineWave_PCos';
pt(34).baseaddr   = '&SimulinkProjet_P.SineWave_PCos';
pt(34).dtname     = 'real_T';



  
pt(35).blockname = 'Clock/Constant';
pt(35).paramname = 'Value';
pt(35).class     = 'scalar';
pt(35).nrows     = 1;
pt(35).ncols     = 1;
pt(35).subsource = 'SS_DOUBLE';
pt(35).ndims     = '2';
pt(35).size      = '[]';
pt(35).isStruct  = false;
pt(35).symbol     = 'SimulinkProjet_P.Constant_Value';
pt(35).baseaddr   = '&SimulinkProjet_P.Constant_Value';
pt(35).dtname     = 'real_T';



  
pt(36).blockname = 'Clock/Unit Delay';
pt(36).paramname = 'InitialCondition';
pt(36).class     = 'scalar';
pt(36).nrows     = 1;
pt(36).ncols     = 1;
pt(36).subsource = 'SS_DOUBLE';
pt(36).ndims     = '2';
pt(36).size      = '[]';
pt(36).isStruct  = false;
pt(36).symbol     = 'SimulinkProjet_P.UnitDelay_InitialCondition';
pt(36).baseaddr   = '&SimulinkProjet_P.UnitDelay_InitialCondition';
pt(36).dtname     = 'real_T';



  
pt(37).blockname = 'PID Controller/Filter';
pt(37).paramname = 'InitialCondition';
pt(37).class     = 'scalar';
pt(37).nrows     = 1;
pt(37).ncols     = 1;
pt(37).subsource = 'SS_DOUBLE';
pt(37).ndims     = '2';
pt(37).size      = '[]';
pt(37).isStruct  = false;
pt(37).symbol     = 'SimulinkProjet_P.Filter_IC_a';
pt(37).baseaddr   = '&SimulinkProjet_P.Filter_IC_a';
pt(37).dtname     = 'real_T';



  
pt(38).blockname = 'PID Controller/Integrator';
pt(38).paramname = 'InitialCondition';
pt(38).class     = 'scalar';
pt(38).nrows     = 1;
pt(38).ncols     = 1;
pt(38).subsource = 'SS_DOUBLE';
pt(38).ndims     = '2';
pt(38).size      = '[]';
pt(38).isStruct  = false;
pt(38).symbol     = 'SimulinkProjet_P.Integrator_IC_a';
pt(38).baseaddr   = '&SimulinkProjet_P.Integrator_IC_a';
pt(38).dtname     = 'real_T';



  
pt(39).blockname = 'PID Controller2/Filter';
pt(39).paramname = 'InitialCondition';
pt(39).class     = 'scalar';
pt(39).nrows     = 1;
pt(39).ncols     = 1;
pt(39).subsource = 'SS_DOUBLE';
pt(39).ndims     = '2';
pt(39).size      = '[]';
pt(39).isStruct  = false;
pt(39).symbol     = 'SimulinkProjet_P.Filter_IC';
pt(39).baseaddr   = '&SimulinkProjet_P.Filter_IC';
pt(39).dtname     = 'real_T';



  
pt(40).blockname = 'PID Controller2/Integrator';
pt(40).paramname = 'InitialCondition';
pt(40).class     = 'scalar';
pt(40).nrows     = 1;
pt(40).ncols     = 1;
pt(40).subsource = 'SS_DOUBLE';
pt(40).ndims     = '2';
pt(40).size      = '[]';
pt(40).isStruct  = false;
pt(40).symbol     = 'SimulinkProjet_P.Integrator_IC';
pt(40).baseaddr   = '&SimulinkProjet_P.Integrator_IC';
pt(40).dtname     = 'real_T';



  
pt(41).blockname = 'SBPA/Out1';
pt(41).paramname = 'InitialOutput';
pt(41).class     = 'scalar';
pt(41).nrows     = 1;
pt(41).ncols     = 1;
pt(41).subsource = 'SS_DOUBLE';
pt(41).ndims     = '2';
pt(41).size      = '[]';
pt(41).isStruct  = false;
pt(41).symbol     = 'SimulinkProjet_P.Out1_Y0';
pt(41).baseaddr   = '&SimulinkProjet_P.Out1_Y0';
pt(41).dtname     = 'real_T';



  
pt(42).blockname = 'SBPA/Memory';
pt(42).paramname = 'X0';
pt(42).class     = 'scalar';
pt(42).nrows     = 1;
pt(42).ncols     = 1;
pt(42).subsource = 'SS_BOOLEAN';
pt(42).ndims     = '2';
pt(42).size      = '[]';
pt(42).isStruct  = false;
pt(42).symbol     = 'SimulinkProjet_P.Memory_X0';
pt(42).baseaddr   = '&SimulinkProjet_P.Memory_X0';
pt(42).dtname     = 'boolean_T';



  
pt(43).blockname = 'SBPA/Memory1';
pt(43).paramname = 'X0';
pt(43).class     = 'scalar';
pt(43).nrows     = 1;
pt(43).ncols     = 1;
pt(43).subsource = 'SS_BOOLEAN';
pt(43).ndims     = '2';
pt(43).size      = '[]';
pt(43).isStruct  = false;
pt(43).symbol     = 'SimulinkProjet_P.Memory1_X0';
pt(43).baseaddr   = '&SimulinkProjet_P.Memory1_X0';
pt(43).dtname     = 'boolean_T';



  
pt(44).blockname = 'SBPA/Memory2';
pt(44).paramname = 'X0';
pt(44).class     = 'scalar';
pt(44).nrows     = 1;
pt(44).ncols     = 1;
pt(44).subsource = 'SS_BOOLEAN';
pt(44).ndims     = '2';
pt(44).size      = '[]';
pt(44).isStruct  = false;
pt(44).symbol     = 'SimulinkProjet_P.Memory2_X0';
pt(44).baseaddr   = '&SimulinkProjet_P.Memory2_X0';
pt(44).dtname     = 'boolean_T';



  
pt(45).blockname = 'SBPA/Memory3';
pt(45).paramname = 'X0';
pt(45).class     = 'scalar';
pt(45).nrows     = 1;
pt(45).ncols     = 1;
pt(45).subsource = 'SS_BOOLEAN';
pt(45).ndims     = '2';
pt(45).size      = '[]';
pt(45).isStruct  = false;
pt(45).symbol     = 'SimulinkProjet_P.Memory3_X0';
pt(45).baseaddr   = '&SimulinkProjet_P.Memory3_X0';
pt(45).dtname     = 'boolean_T';



  
pt(46).blockname = 'SBPA/Memory4';
pt(46).paramname = 'X0';
pt(46).class     = 'scalar';
pt(46).nrows     = 1;
pt(46).ncols     = 1;
pt(46).subsource = 'SS_BOOLEAN';
pt(46).ndims     = '2';
pt(46).size      = '[]';
pt(46).isStruct  = false;
pt(46).symbol     = 'SimulinkProjet_P.Memory4_X0';
pt(46).baseaddr   = '&SimulinkProjet_P.Memory4_X0';
pt(46).dtname     = 'boolean_T';



  
pt(47).blockname = 'SBPA/Memory5';
pt(47).paramname = 'X0';
pt(47).class     = 'scalar';
pt(47).nrows     = 1;
pt(47).ncols     = 1;
pt(47).subsource = 'SS_BOOLEAN';
pt(47).ndims     = '2';
pt(47).size      = '[]';
pt(47).isStruct  = false;
pt(47).symbol     = 'SimulinkProjet_P.Memory5_X0';
pt(47).baseaddr   = '&SimulinkProjet_P.Memory5_X0';
pt(47).dtname     = 'boolean_T';



  
pt(48).blockname = 'SBPA/Memory6';
pt(48).paramname = 'X0';
pt(48).class     = 'scalar';
pt(48).nrows     = 1;
pt(48).ncols     = 1;
pt(48).subsource = 'SS_BOOLEAN';
pt(48).ndims     = '2';
pt(48).size      = '[]';
pt(48).isStruct  = false;
pt(48).symbol     = 'SimulinkProjet_P.Memory6_X0';
pt(48).baseaddr   = '&SimulinkProjet_P.Memory6_X0';
pt(48).dtname     = 'boolean_T';



  
pt(49).blockname = 'SBPA/Memory7';
pt(49).paramname = 'X0';
pt(49).class     = 'scalar';
pt(49).nrows     = 1;
pt(49).ncols     = 1;
pt(49).subsource = 'SS_BOOLEAN';
pt(49).ndims     = '2';
pt(49).size      = '[]';
pt(49).isStruct  = false;
pt(49).symbol     = 'SimulinkProjet_P.Memory7_X0';
pt(49).baseaddr   = '&SimulinkProjet_P.Memory7_X0';
pt(49).dtname     = 'boolean_T';



  
pt(50).blockname = 'SBPA/Memory8';
pt(50).paramname = 'X0';
pt(50).class     = 'scalar';
pt(50).nrows     = 1;
pt(50).ncols     = 1;
pt(50).subsource = 'SS_BOOLEAN';
pt(50).ndims     = '2';
pt(50).size      = '[]';
pt(50).isStruct  = false;
pt(50).symbol     = 'SimulinkProjet_P.Memory8_X0';
pt(50).baseaddr   = '&SimulinkProjet_P.Memory8_X0';
pt(50).dtname     = 'boolean_T';


function len = getlenPT
len = 50;

