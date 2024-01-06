import pandas as pd
import numpy as np
import matplotlib.pyplot as plt

if __name__ == '__main__':
    cols = ["flength", "fwidth", "fSize", "fConc", "fConc1", "fAsym", "fM3Long", "fM3Trans", "fAlpha", "fDist", "class"]
    df = pd.read_csv("magic04.data", names = cols)
    df["class"] = (df["class"] == "g").astype(int)
    print(df.head)

    for label in cols[:-1]:
        plt.hist(df[df["class"]==1][label], label='gama', alpha = 0.7, density = True)
        plt.hist(df[df["class"]==0][label], label='gama', alpha = 0.7, density = True)
        plt.title(label)
        plt.ylabel("probability")
        plt.xlabel(label)
        plt.legend()
        plt.show()
