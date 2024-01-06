Let's assume we have the following training data:

| Feature 1 | Feature 2 | Target |
|-----------|-----------|--------|
| 2         | 4         | 6      |
| 3         | 5         | 8      |
| 5         | 1         | 10     |
| 7         | 6         | 13     |

We want to use linear regression to predict the target value for a new data point based on its feature values. Our model will have the following form:

y = w1 * x1 + w2 * x2 + b

where y is the predicted target value, x1 and x2 are the input feature values, w1 and w2 are the weights assigned to each feature, and b is the bias term. We can think of the weights as the "importance" of each feature in predicting the target, and the bias term as the base prediction when all input features are zero.

To train the model, we need to find the values of w1, w2, and b that minimize the mean squared error (MSE) between the predicted target values and the actual target values in the training data. The MSE is defined as follows:

MSE = (1/n) * Σ(y_pred - y_actual)^2

where n is the number of training examples, y_pred is the predicted target value, and y_actual is the actual target value. Our goal is to minimize the MSE by adjusting the weights and bias term.

To do this, we'll use an optimization algorithm called gradient descent. Gradient descent works by computing the gradient of the cost function with respect to the parameters (weights and bias), and then updating the parameters in the direction of the negative gradient to iteratively minimize the cost function.

The gradient of the MSE with respect to the parameters is given by:

d(MSE)/dw1 = (1/n) * Σ(2 * (y_pred - y_actual) * x1)
d(MSE)/dw2 = (1/n) * Σ(2 * (y_pred - y_actual) * x2)
d(MSE)/db = (1/n) * Σ(2 * (y_pred - y_actual))

To update the weights and bias term, we'll use the following update rule:

w1 = w1 - learning_rate * d(MSE)/dw1
w2 = w2 - learning_rate * d(MSE)/dw2
b = b - learning_rate * d(MSE)/db

where the learning rate controls the step size of the updates.

Let's start by initializing the weights and bias term to some random values:

w1 = 0.5
w2 = 0.5
b = 0.5

We'll also choose a learning rate of 0.01. Now, we can use these values to make predictions for the training data, compute the MSE, and update the weights and bias term using gradient descent.

For the first training example (x1=2, x2=4, y=6), the predicted target value is:

y_pred = w1 * x1 + w2 * x2 + b = 0.5 * 2 + 0.5 * 4 + 0.5 = 3.5

The error between the predicted target value and the actual target value is:

error = y_pred - y_actual = 3.5 - 6 = -2.5

Now, we can use the error to compute the gradient of the MSE with respect to the weights and bias term

w1 = w1 - learning_rate * d(MSE)/dw1 = 0.5 - 0.01 * (2 * (-2.5) * 2 / 4) = 0.525
w2 = w2 - learning_rate * d(MSE)/dw2 = 0.5 - 0.01 * (2 * (-2.5) * 4 / 4) = 0.45
b = b - learning_rate * d(MSE)/db = 0.5 - 0.01 * (2 * (-2.5)) = 0.525

We can repeat this process for each training example and update the weights and bias term after each iteration. After many iterations, the weights and bias term will converge to values that minimize the MSE.

Here's a table showing the updates for the first few iterations:

| Iteration | w1    | w2    | b    |
|-----------|-------|-------|------|
| 0         | 0.5   | 0.5   | 0.5  |
| 1         | 0.525 | 0.45  | 0.525 |
| 2         | 0.543 | 0.423 | 0.547 |
| 3         | 0.557 | 0.404 | 0.566 |
| 4         | 0.569 | 0.39  | 0.582 |

We can see that the weights and bias term are slowly converging to values that minimize the MSE. Once we have trained the model, we can use it to make predictions for new data points by plugging in their feature values and computing the predicted target value.