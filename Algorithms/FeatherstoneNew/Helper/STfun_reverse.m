function X_d = STfun_reverse(X)
    flipeye6 = [zeros(3) eye(3); eye(3) zeros(3)];
    width = size(X,2)/6;
    height = size(X,1)/6;
    Dleft_flipeye6 = zeros(6*width);
    Dright_flipeye6 = (6*height);
    for i = 1:width
        Dleft_flipeye6(6*i-5:6*i,6*i-5:6*i) = flipeye6;
    end
    for i = 1:height
        Dright_flipeye6(6*i-5:6*i,6*i-5:6*i) = flipeye6;
    end
    
    X_d = Dleft_flipeye6 * X' * Dright_flipeye6;
end