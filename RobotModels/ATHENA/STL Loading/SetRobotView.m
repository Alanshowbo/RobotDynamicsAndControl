
switch robot_view
    case 'RightSide'
        az = 0; el = 0;
    case 'Front'
        az = 90; el = 0;
    case 'LeftSide'
        az = 180; el = 0;
    case 'Back'
        az = 270; el = 0;
    case 'IsoLeft'
        az = 135; el = 15;
    case 'IsoRight'
        az = 45; el = 15;
    case 'Top'
        az = 180; el = 90;
end
