%  Function that adds all the folders in the current directory to the path.
function AddFoldersInCurrentDirToPath()
%     warning('off', 'MATLAB:mpath:nameNonexistentOrNotADirectory');
%     files = dir(pwd);
%     for i = 1:length(files)
%         addpath(files(i).name);
%     end
%     warning('on', 'MATLAB:mpath:nameNonexistentOrNotADirectory');
addpath(genpath(pwd))
end