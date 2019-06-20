# rt-libann

## 1、介绍

这是一个轻量级的 ANN 库，可以运行在 Flash，RAM 都非常有限的 stm32 上面。隐藏层节点数目可以选择，但是每个隐藏层节点大小默认一样。

以经典的 Iris 数据集为例，使用一层隐藏层、隐藏层节点为4，训练 150 个样本，迭代 500 次，在 STM32L475VET6 上训练时间为 24 秒，预测时间为 22 毫秒，预测精度为 96.0%。

iris 数据集在 doc/iris.data 里可以找到，当然也可以去官网下载 https://archive.ics.uci.edu/ml/datasets/Iris/

![](doc/iris_train_and_predict.png)

当然，示例程序只是为了 benchmark 计算力，并没有考虑 train test split，noramalization 等等，不过这说明一些比较小的 ANN 模型在 stm32 上还是可以跑跑前向传播的。 



## 2、项目说明

### 2.1 目录结构

> 说明：目录结构

| 名称     | 说明       |
| -------- | ---------- |
| docs     | 文档目录   |
| examples | 例子目录   |
| src      | 源代码目录 |

### 2.2 许可证

参见源码内许可证

### 2.3 项目依赖

如果从外部加载训练集或者模型，需要打开文件系统支持。

- Using I2C device drivers
- Use GPIO to simulate I2C

## 3、如何使用 libann

使用 libann 需要在 RT-Thread 的包管理器中选择它，具体路径如下：

```
RT-Thread online packages
  miscellaneous packages  --->
      [*] libann: a light-weight ANN library, capable of training, saving and loading  models.
```

然后让 RT-Thread 的包管理器自动更新，或者使用 `pkgs --update` 命令更新包到 BSP 中。

## 4、注意事项

这个库只是为了测试不同开发板运行 ANN 的计算能力而设置的，实际的机器学习流程需要 train test split, noramalization 等等。



## 5、联系方式

- 维护：Wu Han
- 主页：http://wuhanstudio.cc
- 邮箱：wuhanstudio@hust.edu.cn