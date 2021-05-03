function Positions = TransAllP(Positions,disp)
%Function that displaces a the Xsens positions by a certain amount    
    for iii = 1:(length(Positions(:,1))/3)
        for jjj = 1:length(Positions(1,:))
            Positions(3*(iii-1)+(1:3),jjj) = Positions(3*(iii-1)+(1:3),jjj) + disp*.0254;
        end
    end
end