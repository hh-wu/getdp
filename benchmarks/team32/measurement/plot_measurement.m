function plot_measurement()
clear; close all;

% CHOOSE WHICH TESTCASE TO PLOT HERE:
testcase=2;


MEASDATA={...
'case1a_c6.dat',...
'case1a_i.dat',...
'case1a_v.dat',...
'case2_c6.dat',...
'case2_i.dat',...  
'case2_v.dat',... 
'case3_c1c2.dat',...
'case3_c3c4.dat' ,...
'case3_i.dat',... 
'case3_v.dat',...
'case4_c6.dat',...        
'case4_i.dat',...
'case4_v.dat'...
};

switch testcase
    case 1
        k0=1;kend=3;
    case 2
        k0=4;kend=6;
    case 3
        k0=7;kend=10;
    case 4
        k0=11;kend=13;
end
        
for k=k0:kend     
    fname=MEASDATA{k};
    plotmeasurement(fname);
end

end

function plotmeasurement(fname)

    dumb=importdata(fname);
    [~, numvalue]=size(dumb.data);
    txtsplit=strsplit(dumb.textdata{1});
    labelx=[txtsplit{1},' ',txtsplit{2}];
    xx=dumb.data(:,1);
    labely=[txtsplit{3},' ',txtsplit{4}];
    yy=dumb.data(:,2);
    if (numvalue>2)
     labely2=[txtsplit{5},' ',txtsplit{6}];
     yy2=dumb.data(:,3);       
    end
    

    figure;
    hold on;
    grid on;
    title(fname,'Interpreter', 'none');
    plot(xx,yy,'-o');
    if (numvalue >2)
        plot(xx,yy2,'-o');
       legend(labely,labely2,'Location','Best');
    else
       ylabel(labely);
    end
    xlabel(labelx);
    

end