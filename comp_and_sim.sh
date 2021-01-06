#! /bin/bash

trap '(( "$?" == 0 )) || echo -e "\e[1;31m[ ERROR ]: an error occurred in $0\e[0m"' EXIT

if [[ "$#" != 1 ]]; then 
	echo -e "\e[1;31m[ ERROR ]: wrong number of arguments\e[0m" 
	exit -1
else
	echo -e "\e[1;32mCompiling ASM SBST . . .\e[0m" 
	./compile_sbst_asm.sh || exit -1



	if [[ "$1" == "-rtl" ]]; then
		echo -e "\e[1;32mRunning RTL simulation . . .\e[0m" 
		./run_rtl_nogui.sh sbst_asm/sbst.hex || exit -1

	elif [[ "$1" == "-gate" ]]; then
		echo -e "\e[1;32mRunning GATE simulation . . .\e[0m" 
		./run_gate_nogui.sh sbst_asm/sbst.hex || exit -1

	elif [[ "$1" == "-gui" ]]; then
		echo -e "\e[1;32mRunning GATE simulation with GUI . . .\e[0m" 
		./run_gate_gui.sh sbst_asm/sbst.hex || exit -1

	elif [[ "$1" == "-lsim" ]]; then
		echo -e "\e[1;32mRunning RTL simulation . . .\e[0m" 
		./run_rtl_nogui.sh sbst_asm/sbst.hex || exit -1
		echo -e "\e[1;32mRunning GATE simulation . . .\e[0m" 
		./run_gate_nogui.sh sbst_asm/sbst.hex || exit -1

	elif [[ "$1" == "-fsim" ]]; then
		echo -e "\e[1;32mRunning GATE simulation . . .\e[0m" 
		./run_gate_nogui.sh sbst_asm/sbst.hex || exit -1
		echo -e "\e[1;32mRunning FAULT simulation . . .\e[0m" 
		./run_fsim.sh || exit -1

	elif [[ "$1" == "-all" ]]; then
		echo -e "\e[1;32mRunning RTL simulation . . .\e[0m" 
		./run_rtl_nogui.sh sbst_asm/sbst.hex || exit -1
		echo -e "\e[1;32mRunning GATE simulation . . .\e[0m" 
		./run_gate_nogui.sh sbst_asm/sbst.hex || exit -1
		echo -e "\e[1;32mRunning FAULT simulation . . .\e[0m" 
		./run_fsim.sh || exit -1

	else
		echo -e "\e[1mNo simulation will start with '$1'\n\e[0m"
		exit 0
	fi



	echo -e "\e[1mDONE!\n\e[0m"
fi

exit 0
