Regularization is a technique that adds a penalty term to the loss function during training to discourage the model from becoming too complex. This penalty term typically involves the magnitudes of the model's weights, and it can help to constrain the model's capacity and prevent it from fitting the training data too closely.

There are several techniques used in regularization to prevent overfitting in machine learning models. Here are three common techniques:

1. [[L1_Regularization]] (Lasso Regression): This technique adds a penalty term to the loss function based on the absolute value of the weights. This encourages the model to produce sparse weight vectors by shrinking some weights to zero. This technique is particularly useful when we have a large number of features, as it can help to identify and remove irrelevant features.

2. [[L2_Regularization]] (Ridge Regression): This technique adds a penalty term to the loss function based on the square of the weights. This encourages the model to produce weight vectors with small magnitudes, and can help to reduce the impact of individual weights on the overall prediction. This technique is useful when we have a small number of features and want to avoid overfitting by smoothing out the weight values.

3. [[Dropout_Regularization]]: This technique randomly drops out (sets to zero) some neurons in the neural network during training. This helps to prevent the network from relying too heavily on any one set of features or neurons, and can help to improve the network's generalization performance.

There are also other techniques used in regularization, such as Elastic Net regularization, which combines L1 and L2 regularization, and Batch Normalization, which normalizes the inputs to each layer of the neural network to help stabilize the training process.

Overall, regularization is an important technique for preventing overfitting and improving the generalization performance of machine learning models.