
default:
	@echo "Nothing to do..."

cgi:
	cat getdp.html |\
        sed "s/<!---BEGINSCRIPT//g" |\
        sed "s/ENDSCRIPT--->//g" |\
        sed "s/<!---BEGINDATE.Date: /Last updated<br>/g" |\
        sed "s/ .ENDDATE--->/<p>/g" \
        > geuzaine-getdp.cgi
	chmod 755 geuzaine-getdp.cgi

mirror:
	cat getdp.html |\
        sed "s/\/gmsh\//http:\/\/geuz.org\/gmsh\//g" |\
        sed "s/\/getdp\//http:\/\/geuz.org\/getdp\//g" |\
        sed "s/<!---BEGINDATE.Date: /Last updated<br>/g" |\
        sed "s/ .ENDDATE--->/<p>/g" |\
        sed "s/<!---BEGINMIRROR//g" |\
        sed "s/ENDMIRROR--->//g" \
        > getdp-mirror.html

