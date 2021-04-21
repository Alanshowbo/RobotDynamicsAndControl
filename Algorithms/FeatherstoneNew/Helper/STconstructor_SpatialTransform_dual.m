function X_d = STconstructor_SpatialTransform_dual(X)
    width = size(X,2)/6;
    height = size(X,1)/6;
    for i = 1:height
        for j = 1:width
            X_d(6*i-5:6*i,6*j-5:6*j) = (X(6*i-5:6*i,6*j-5:6*j)^(-1))';
        end
    end
%     X_d = (X^(-1))';
end