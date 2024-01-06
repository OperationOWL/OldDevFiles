In linear regression, we are trying to find the values of the parameters θ = {θ_0, θ_1, ..., θ_n}that minimize the cost function J(θ) between the predicted outputs and the actual outputs. The cost function J(θ) is defined as the mean squared error (MSE) between the predicted outputs and the actual outputs, which is given by:

J(θ) = 1/2n * ∑(hθ(xi) - yi)^2

where hθ(xi) is the predicted output for the i-th training example, xi is the i-th feature vector, yi is the i-th target value, and n is the number of training examples.

To minimize the cost function J(θ), we use an optimization algorithm called gradient descent. Gradient descent works by iteratively updating the parameter values in the opposite direction of the gradient of the cost function with respect to the parameters.

The gradient of the cost function J(θ) with respect to the parameters θ is a vector of partial derivatives, which is denoted by ∇J(θ). The components of this vector are given by:

∂J/∂θ_0, ∂J/∂θ_1, ..., ∂J/∂θ_n

where ∂J/∂θ_i is the partial derivative of the cost function with respect to the i-th parameter θ_i.

The gradient vector ∇J(θ) can be written in matrix form as:

∇J(θ) = 1/n * X.T * (X * θ - y)

where X is the feature matrix, y is the target vector, T denotes the transpose operation, and * denotes matrix multiplication.

In other words, the gradient vector ∇J(θ) is a vector of length n+1 (the number of parameters in the model), where each element i corresponds to the partial derivative of the cost function with respect to the i-th parameter θ_i. The gradient vector tells us the direction in which the cost function is decreasing the most rapidly, which is the direction in which we want to update the parameter values to minimize the cost function.

The update rule for gradient descent is as follows:

θ = θ - α * ∇J(θ)


[[Example_Linear_Regression]]