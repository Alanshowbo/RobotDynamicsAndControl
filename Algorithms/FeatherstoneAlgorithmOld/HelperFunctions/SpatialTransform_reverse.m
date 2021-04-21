function X_d = SpatialTransform_reverse(X)
    X_d = [X(1:3,1:3)' zeros(3); X(4:6,1:3)' X(1:3,1:3)'];
    flipeye6 = [zeros(3) eye(3); eye(3) zeros(3)];
    X_d2 = (X*flipeye6)'*flipeye6;
    X_d3 = flipeye6*X'*flipeye6;
    check = sum(sum(X_d-X_d2 + X_d-X_d3));
end