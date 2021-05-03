function plot_sphere(radius,center,color_txt)

[x,y,z] = sphere;
[m,n]   = size(x);
x = radius * x + center(1)*ones(m,n);
y = radius * y + center(2)*ones(m,n);
z = radius * z + center(3)*ones(m,n);

surf(x,y,z,'FaceColor',color_txt,'EdgeColor','none')

end


