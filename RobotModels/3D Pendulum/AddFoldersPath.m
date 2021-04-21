%  Function that adds all the folders in the current directory to the path.
function AddFoldersPath()
%     warning('off', 'MATLAB:mpath:nameNonexistentOrNotADirectory');
%     files = dir(pwd);
%     for i = 1:length(files)
%         addpath(files(i).name);
%     end
%     warning('on', 'MATLAB:mpath:nameNonexistentOrNotADirectory');
addpath(genpath(fileparts(pwd)))
end