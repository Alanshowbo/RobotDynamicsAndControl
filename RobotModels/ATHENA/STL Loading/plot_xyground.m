function plot_xyground(x1,x2,y1,y2)
res = 5;
[x y] = meshgrid(linspace(x1,x2,res),linspace(y1,y2,res)); % Generate x and y data
z = zeros(res,res); % Generate z data
surf(x, y, z) % Plot the surface

end