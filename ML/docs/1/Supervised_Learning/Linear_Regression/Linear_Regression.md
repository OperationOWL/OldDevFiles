Linear regression is a supervised learning algorithm used to predict a continuous numerical output based on one or more input features. It is a simple yet powerful algorithm that is widely used in machine learning and statistical modeling.

The goal of linear regression is to find the best-fit line that minimizes the difference between the predicted output and the actual output. The best-fit line is a linear equation of the form:

y = mx + b

where:
- y is the predicted output (also called the response or dependent variable)
- x is the input feature (also called the predictor or independent variable)
- m is the slope of the line (i.e., the rate of change in y for a unit change in x)
- b is the y-intercept (i.e., the value of y when x is zero)

To find the best-fit line, linear regression uses a cost function that measures the difference between the predicted output and the actual output for each data point in the training set. The most common cost function used in linear regression is the mean squared error (MSE), which is the average of the squared differences between the predicted and actual outputs:

MSE = 1/n * sum((y_pred - y_actual)^2)

where:
- n is the number of data points in the training set
- y_pred is the predicted output for a given data point
- y_actual is the actual output for that data point

The goal of linear regression is to minimize the MSE by adjusting the slope and intercept of the line. This is typically done using an optimization algorithm such as gradient descent, which iteratively adjusts the parameters to minimize the cost function.

Once the best-fit line has been found, it can be used to make predictions on new, unseen data by plugging in the input features and solving for the predicted output using the linear equation.

Linear regression is a simple yet powerful algorithm that can be used for a wide range of regression problems, such as predicting the price of a house based on its size and location, or predicting the temperature of a city based on historical data.

[[Gradient_Descent_Linear_Regression]]
