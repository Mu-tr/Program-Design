import numpy as np
import matplotlib
from matplotlib import pyplot as plt

x = np.linspace(-5, 5, 200)            #从-5到5,包含200个值的等差数列

fig0 = plt.figure(figsize=(10, 5))     #创建图,10英寸×5英寸
print("type(fig0):", type(fig0))
ax = fig0.add_subplot(221)             #在图内创建子图,事实上等价于plt.subplot(221)
print("type(ax):", type(ax))
ax.plot(x, np.sin(x), c='r')
ax.set_title("sin(x)20252764")                 #设置子图标题

ax = plt.subplot(222)
ax.plot(x, np.cos(x), c='g')
ax.set_title("cos(x)")

ax = plt.subplot(245)                  #在当前图内创建子图,事实上等价于fig0.add_subplot(245)
ax.plot(x, x, c='b')
ax.set_title("x")

ax = plt.subplot(246)
ax.plot(x, x**2, c='purple')
ax.set_title("$x^2$")

ax = plt.subplot(247)
ax.plot(x, -4*x**3+5*x+12, c='orange')
ax.set_title("$-4x^3+5x+12$")

ax = plt.subplot(248)
ax.plot(x, np.cos(6*x)*np.exp(-x), c='black')
ax.set_title("$cos(6x)e^{-x}$")        #$$包含LaTeX公式
fig0.subplots_adjust(0.05, 0.05, 0.95, 0.95, wspace=0.1, hspace=0.25)
print("len of fig0.axes:", len(fig0.axes))
print("type of fig0.axes:", type(fig0.axes))

plt.show()
print("NumPy 版本:", np.__version__)
print("Matplotlib 版本:", matplotlib.__version__)