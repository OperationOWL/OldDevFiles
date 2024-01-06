Hyperparameters are parameters that are set before the learning process begins and determine the behavior of the learning algorithm. They are not learned from the data, unlike the model parameters which are learned during the training process. Hyperparameters can significantly affect the performance of a machine learning algorithm, and choosing the right values for them is an important part of building an effective model.

Examples of hyperparameters include:

1. Learning rate: This hyperparameter controls the size of the step taken during gradient descent. A higher learning rate can cause the algorithm to converge faster, but it may also overshoot the optimal solution.

2. Number of hidden layers: In neural networks, the number of hidden layers is a hyperparameter that determines the complexity of the model. Increasing the number of layers can make the model more expressive, but it can also increase the risk of overfitting.

3. Regularization strength: Regularization is a technique used to prevent overfitting by adding a penalty term to the cost function. The strength of the regularization penalty is a hyperparameter that controls how much weight is given to the penalty term relative to the data fitting term.

4. Kernel type and parameters: In support vector machines, the kernel function is a hyperparameter that determines the shape of the decision boundary. The choice of kernel type and its parameters can significantly affect the performance of the model.

5. Number of trees and depth in decision trees: In decision tree algorithms such as random forests and gradient boosting, the number of trees and their depth are hyperparameters that affect the complexity of the model and the trade-off between bias and variance.

Hyperparameters are usually set manually by the practitioner based on their knowledge of the problem and the data, or by using grid search or other hyperparameter tuning methods. The optimal values for hyperparameters can vary depending on the specific problem and dataset, and finding the right values can be time-consuming and computationally expensive.