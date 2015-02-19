#!/bin/bash

GETDP=$(which getdp)
GMSH=$(which gmsh)

# GETDP=getdp
# GMSH=gmsh

function helper()
{
	cat README
	printf "\nUse: $0 help | mesh | solve [Full | DDM] | run | clean \n\n"
}

function mesher()
{
	$GMSH Guide_ddm-MeshAll.script.geo -
}

function solver()
{
	if [ $# -eq 0 ]
	then
		$GETDP guide.pro -solve -v 3
	else
		if [[ $1 -eq Full || $1 -eq DDM ]]
		then
			$GETDP guide.pro -solve $1 -v 3
		else
			$0 run
		fi
	fi	
}

function cleaner()
{
	for ext in '*.msh' '*.pos' '*.pre' '*.txt'
	do
		echo "-- Clean: $ext"
		find . -name "$ext" \
			-print \
			-exec rm {} \;
	done
}

case $1 in
	clean )
		cleaner
		;;
	mesh )
		mesher
		;;
	solve )
		if [ $# -eq 2 ]
		then
			solver $2
		else
			solver
		fi
		;;
	run )
		mesher
		solver Full
		solver DDM
		;;
	help )
		helper
		printf "Gmsh: $GMSH\n"
		printf "GetDP: $GETDP\n"
		;;
	* )
		helper
esac
