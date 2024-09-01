# Qt 安装

![image-20240820231423515](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240820231423515.png)

![image-20240820232717245](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240820232717245.png)

![image-20240820233710434](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240820233710434.png)

# Qt Creator 简介

对 Qt Creator 进行一些设置

<img src="https://raw.githubusercontent.com/LQF376/image/main/img/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202024-08-18%20180225.png" alt="屏幕截图 2024-08-18 180225" style="zoom:50%;" />

<img src="https://raw.githubusercontent.com/LQF376/image/main/img/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202024-08-18%20180830.png" alt="屏幕截图 2024-08-18 180830" style="zoom: 50%;" />

## 新建一个GUI项目

![image-20240818181858166](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818181858166.png)

![image-20240818182424362](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818182424362.png)

![image-20240818182902766](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818182902766.png)

![image-20240818183156519](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818183156519.png)

![image-20240818183815892](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818183815892.png)

![image-20240818184032779](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818184032779.png)

![image-20240818184235924](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818184235924.png)

![image-20240818185147281](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818185147281.png)

双击打开 .ui 文件

![image-20240818200740868](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818200740868.png)

## 项目的构建、调试与运行

![image-20240818202906760](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818202906760.png)

# GUI 程序设计基础

## GUI 程序结构与运行机制

### GUI 项目文件组成

![image-20240818205722092](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818205722092.png)

简单项目通常包含：

- .pro 文件：qmake 构建系统的项目配置文件，用于存档构建项目的配置信息
- .ui 文件：用于窗口界面可视化设计的文件
- main.cpp：主程序文件，包含 main() 函数
- widget.h：窗口类定义头文件，会用到 .ui 文件解析后的类
- widget.cpp：对应 widget.h 具体实现的源程序

### 项目配置文件

选择 qmake 构建系统，会生成 .pro 的项目配置文件，用于生成 makefile 文件，使C++编译器能够根据makefile 文件进行编译链接，对于Qt 项目，qmake 会自动为**元对象编译器（MOC）**和**用户界面编译器（UIC）**生成构建规则

qmake 配置文件中常见的变量含义如下：

| 变量        | 含义                                                         |
| ----------- | ------------------------------------------------------------ |
| QT          | 项目中使用的Qt模块列表，在用到某些模块时需要手动添加         |
| CONFIG      | 项目中的通用配置选项                                         |
| DEFINES     | 项目中的预处理定义列表，例如可以定义一些用于预处理的宏       |
| TEMPLATE    | 项目使用的模板，项目模板可以是应用程序app或库lib。不设置就默认为应用程序 |
| HEADERS     | 项目中的头文件（.h）列表                                     |
| SOURCES     | 项目中的源程序文件（.cpp）列表                               |
| FORMS       | 项目中的UI文件列表                                           |
| DESOURCES   | 项目中的资源文件（.qrc 文件）列表                            |
| TARGET      | 项目构建生成的应用程序的可执行文件名称，默认与项目名称相同   |
| DESTDIR     | 目标可执行文件的存放路径                                     |
| INCLUDEPATH | 项目用到的其他头文件的搜索路径列表                           |
| DEPENDPATH  | 项目其他依赖文件（如源程序文件）的搜索路径列表               |

`$${TARGET}`：替换函数，可在配置过程中处理变量或内置函数的值

### UI 文件

![image-20240818212909986](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818212909986.png)

### 主程序文件

![image-20240818213342057](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818213342057.png)

### widget.h 文件

![image-20240818214114536](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818214114536.png)

### widget.cpp

![image-20240818214719812](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818214719812.png)

### widget.ui 文件

窗口界面定义文件，是一个XML文件，存储了界面上所有组件的属性设置、布局、信号与槽函数的关联等内容

### ui_widget.h 文件

构建项目时的一个中间文件，构建项目时UI文件（widget.ui）会被Qt的UIC编译为对应的C++语言头文件 ui_widget.h

![image-20240818220458095](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818220458095.png)

![image-20240818220831785](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818220831785.png)

## 添加图片资源文件

- 在项目的根目录下创建一个文件夹 images（名字随意），将需要的图标放置在该文件夹内

  ![image-20240818221634680](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818221634680.png)

- 然后创建一个资源文件

  ![image-20240818223604514](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818223604514.png)

- 打开资源文件编辑器，存储和添加图片文件

  ![image-20240818223532965](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818223532965.png)

## 界面组件布局管理

### 布局管理

![image-20240818235135584](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818235135584.png)

使用工具栏上的布局按钮时，只需要在窗体上选中需要设计布局的组件，然后点击某个布局按钮；在窗体上选择组件的同时按住 Ctrl 键可以实现多选；选择某个容器组件相当于选择了其内部的所有组件

### 伙伴关系

伙伴关系状态是指界面上一个标签和一个具有输入焦点的组件相关联，在进入伙伴关系编辑状态，选中一个标签，按住鼠标左键，然后将其拖向一个输入组件，即可建立标签与输入组件的伙伴关系

伙伴关系还可以在程序运行时，通过快捷键将输入焦点切换到某个组件上，设置标签的 text 属性为 `点击(&N)` ，其中符号`&` 用来指定快捷字符，界面上不显示`&`，用来指定快捷字符为 `N`，程序运行时，只要摁下`Alt+N`快捷键，输入焦点就会快速切换到标签关联的编辑框内

![image-20240819231941889](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240819231941889.png)

### Tab 顺序

Tab 顺序是指在程序运行时，按下键盘上的Tab键时输入焦点的移动顺序

进入Tab顺序编辑状态后，界面上会显示具有Tab顺序的组件的Tab顺序编号，依次按希望的顺序点击组件，就可以重排Tab顺序，没有输入焦点的组件是没有Tab顺序的

![image-20240819232825354](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240819232825354.png)

## 信号和槽

- 信号：在特定情况下被发射的通知
- 槽：对信号进行响应的函数，与信号进行关联后，信号被发射时，关联的槽函数被自动运行

信号和槽的关联时用函数 `QObject::connect()` 实现的

```cpp
QObject::connect(sender, SIGNAL(signal()), receiver, SLOT(slot()));
sender: 发射信号的对象的名称
signal(): 信号
receiver: 接受信号的对象的名称
slot(): 槽函数，有参数时还需要指明各参数类型
SIGNAL和SLOT是Qt宏定义，分别用于指明信号和槽函数，并将他们参数转换为相应字符串
```

- 一个信号可以连接多个槽函数
  - 当一个信号与多个槽函数关联时，槽函数按建立连接时的顺序依次运行
  - 当信号和槽函数带有参数时，在函数connect() 里需要指明各参数的类型，但不用指明参数名称
- 多个信号可以连接同一个槽函数
- 一个信号可以连接另一个信号（当发射一个信号时，也会发射另一个信号）
- 信号与槽的参数个数和类型需要一致（严格意义），至少信号参数不能少于槽的参数
- 在使用信号与槽的类中，必须在类的定义中插入宏 Q_OBJECT
- 当信号被发射时，与其关联的槽函数通常被立即运行，只有当信号关联的所有槽函数运行完毕后，才运行发射信号处后面的代码

### 信号与槽的关联方式

信号与槽的关联方式大致有3种：

- 信号与槽编辑器
- 为组件信号生成槽函数原型和框架
- 使用自定义槽函数

### 信号与槽编辑器

![image-20240820000415145](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240820000415145.png)

信号与槽编译器设定的关联，由经预处理的 ui 文件中界面的 `setupUi()` 中实现关联

![image-20240821220148403](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240821220148403.png)

### 为组件的信号生成槽函数原型和框架

- 不用手动关联，在窗口类的构造函数里面调用的 setupUi() 函数里自动完成关联

![image-20240821220907608](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240821220907608.png)

在界面类private slots 部分会自动增加槽函数声明，函数名是根据发射信号的对象名和信号名称自动命名

```cpp
void on_<object name>_<signal name>(<signal parameters>);		// 自动生成的槽函数
```

![image-20240821221046705](C:/Users/89375/AppData/Roaming/Typora/typora-user-images/image-20240821221046705.png)

组件信号和槽函数的关联在 .ui 界面文件编译后的 ui_xx.h 文件内，`QMetaObject::connectSlotsByName()` 就是搜索界面上的所有组件，将名称匹配的信号和槽函数关联起来

### 使用自定义槽函数

如果多个信号关联同一个槽函数，上述两种方法存在一定局限，建议使用自定义槽函数，进行手动关联

自定义槽函数应自觉遵守命名规范，以 `do_`为前缀

![image-20240821222748721](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240821222748721.png)

![image-20240821224126546](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240821224126546.png)

## 为应用设置图标

- 将一个后缀为 `.ico` 的图标文件复制到项目根目录下

- 在项目配置文件 `.pro` 里用 RC_ICONS 设置图标文件名，并重新构建项目

  ```cpp
  RC_ICONS = editor.ico
  ```


## Qt 项目构建基本原理

![image-20240821232315833](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240821232315833.png)

### 元对象系统和MOC

Qt 对 C++ 语言进行了扩展，引入了元对象系统，所有从 QObect 继承的类都可以利用元对象系统提供的功能，元对象系统支持属性、信号与槽，动态类型转换等特性

Qt 提供元对象编译器（MOC），构建项目时，头文件会先被MOC预编译，形成标准C++语言的程序文件

### UI 文件和 UIC

可视化设计的窗口 UI 文件会被**用户界面编译器（UIC）**转换为一个C++源程序文件；生成的源文件与UI文件在同一个文件夹里

### 资源文件和 RCC

Qt 项目中的资源文件（.qrc 文件）会被资源编译器（RCC）转换为C++程序文件，例如 res.qrc 资源文件会编译生成 qrc_res.cpp 文件

----

最后经标准C++编译器（即开发套件中的编译器）进行统一编译和连接，生成可执行程序

## 代码化UI设计（纯代码）

用纯代码的方式设计 UI、

- 创建项目时，选择不自动生成 .ui 文件

![image-20240826224602873](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240826224602873.png)

![image-20240826234510540](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240826234510540.png)

![image-20240826235918177](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240826235918177.png)

# Qt框架概述

## Qt6 框架的模块

- Qt Essentials：基础模块，提供了 Qt 在所有平台上的基本功能，安装时是自动安装的，无需选择
- Qt Addons：附加模块，安装时可以选择性安装

-----

基础模块中 Qt Core 是 Qt 框架的核心，其他模块都要依赖此模块，在使用 qmake项目配置时，会自动添加

```
Qt += core gui
```

## Qt 全局定义

`<QtGlobal>` 定义了 Qt 框架中一些全局定义，包括基本数据类型、函数和宏

### 基本数据类型

| Qt 类型    | POSIX 定义             | 字节数 |
| ---------- | ---------------------- | ------ |
| qint8      | signed char            | 1      |
| qint16     | signed short           | 2      |
| qint32     | signed int             | 4      |
| qint64     | long long int          | 8      |
| qlonglong  | long long int          | 8      |
| quint8     | unsigned char          | 1      |
| quint16    | unsigned short         | 2      |
| quint32    | unsigned int           | 4      |
| quint64    | unsigned long long int | 8      |
| qulonglong | unsigned long long int | 8      |
| uchar      | unsigned char          | 1      |
| ushort     | unsigned short         | 2      |
| uint       | unsigned int           | 4      |
| ulong      | unsigned long          | 8      |
| qreal      | double                 | 8      |
| qsizetype  | ssize_t                | 8      |
| qfloat16   | ---                    | 2      |

`qfloat16` 用于表示16位的浮点数，定义在头文件 `<QFloat16>` 中

### 函数

| 函数原型                                                     | 功能                               |
| ------------------------------------------------------------ | ---------------------------------- |
| T **qAbs**(const T& value)                                   |                                    |
| const T& **qBound**(const T& min, const T& value, const T&max) | 返回value限定在 min~max 之间       |
| T **qExchange**(T& obj, U&& newValue)                        | obj的值用newValue替换，返回obj旧值 |
| int **qFpClassify**(double val)                              | 返回val分类（正数、零）            |
| bool **qFuzzyCompare**(double p1, double p2)                 | p1 p2 近似相等，返回 true          |
| bool **qFuzzyIsNull**(double d)                              | d 约等于0，返回 true               |
| double **qInf**()                                            | 返回无穷大的数                     |
| bool **qIsFinite**(double d)                                 | d 是一个有限的数，返回 true        |
| bool **qIsInf**(double d)                                    | d 为无穷大的数，返回 true          |
| bool **qIsNaN**(double d)                                    | d 为非数，返回 true                |
| const T& **qMax**(const T& value1, const T& value2)          | 返回 value1, value2 之间的最大值   |
| const T& **qMin**(const T& value1, const T& value2)          | 返回 value1, value2 之间的最小值   |
| qint64 **qRound64**(double value)                            | value 近似为最接近的 qint64 整数   |
| int **qRound**(double value)                                 | value 近似为最接近的 int 整数      |

### 宏定义

| 宏定义                                | 含义                                   |
| ------------------------------------- | -------------------------------------- |
| **QT_VERSION**                        | Qt 版本，数值格式为 0xMMNNPP           |
| **Q_BYTE_ORDER**                      | 系统内存中数据的字节序                 |
| Q_BIG_ENDIAN                          | 大端字节序                             |
| Q_LITTLE_ENDIAN                       | 小端字节序                             |
| **Q_DECL_IMPORT** / **Q_DECL_EXPORT** | 导入/导出共享库内容                    |
| **Q_UNUSED(name)**                    | 声明函数中未被使用的参数，防止编译警告 |
| **foreach(variable, container)**      | 遍历容器的内容                         |
| **qDebug(const char* message, ...)**  | debug 信息输出，可格式化输出           |

判断主机内存字节序

```cpp
#if Q_BYTE_ORDER == Q_LITTLE_ENDIAN
...
#endif
```

## 元对象系统

- **QObject 类**是所有使用元对象系统的类的基类
- 必须在一个类的开头部分插入宏 `Q_OBJECT`，这样类才可以使用元对象系统的特性
- MOC 为每个 QObject 的子类提供必要的代码来实现元对象系统的特征

构建项目时，MOC 发现类的定义里有 Q_OBJECT 宏时，就会为该类生成另一个包含元对象支持的 C++源文件，这个文件最后连通类的实现文件一起被标准C++编译器编译和连接

-----

**Object 类与元对象系统的相关函数：**

| 函数                                         | 功能                                 |
| -------------------------------------------- | ------------------------------------ |
| **元对象：**                                 |                                      |
| QMetaObject* **metaObject**()                | 返回这个对象的元对象                 |
| QMetaObject* **staticMetaObject**            | 类的静态变量，存储了类的元对象       |
| **类型信息：**                               |                                      |
| bool **inherits**()                          | 判断这个对象是不是某个类的子类的实例 |
| **动态翻译：**                               |                                      |
| QString **tr**()                             | 返回一个字符串的翻译版本             |
| **对象树：**                                 |                                      |
| QObjectList& **children**()                  | 返回子对象列表                       |
| QObject* **parent**()                        | 返回父对象指针                       |
| void **setParent**()                         | 设置父对象                           |
| T **findChlid**()                            | 按照对象名称，查找可被转为T的子对象  |
| QList<T> **findChildren**()                  | 返回符合名称和类型条件的子对象列表   |
| **信号与槽：**                               |                                      |
| QMetaObject::Connection **connect**()        | 设置信号与槽关联                     |
| bool **disconnect**()                        | 解除信号与槽的关联                   |
| bool **blockSignals**()                      | 设置是否阻止对象发射任何信号         |
| bool **signalsBlocked**()                    | 返回 true，表示对象被阻止发射信号    |
| **属性系统：**                               |                                      |
| QList<QByteArray> **dynamicPropertyNames**() | 返回所有动态属性名称                 |
| bool **setProperty**()                       | 设定属性值，或添加动态属性           |
| QVariant **property**()                      | 返回属性值                           |

获取元对象：每个Object及其子类的实例都有一个元对象

````cpp
QPushButton* btn = new QPushButton();
const QMetaObject* metaPtr = btn->metaObject();			// 1
const QMetaObject metaObj = btn->staticMetaObject;		// 2
````

----

元对象（QMetaObject）存储了类的实例所属类的各种元数据（类的描述信息）

类的元数据又分为多种类型，且又有专门的类来描述：（例如 QMetaProperty 用来描述属性的元数据）

**QMetaObject 类的主要接口：**

| 函数原型                                         | 功能                                                         |
| ------------------------------------------------ | ------------------------------------------------------------ |
| **类的信息：**                                   |                                                              |
| char* **className**()                            | 返回这个类的名称                                             |
| QMetaType **metaType**()                         | 返回这个元对象的元类型                                       |
| QMetaObject* **superClass**()                    | 返回这个类的上层父类的元对象                                 |
| bool **inherits**(QMetaObject* metaObject)       | true：这个类继承与 metaObject 描述的类，否则 false           |
| QObject* **newInstance**(...)                    | 创建这个类的实例，最多向构造传10个参数                       |
| **类信息元数据：**                               |                                                              |
| QMetaClassInfo **classInfo**(int index)          | 返回序号为index的类信息的元数据，类信息在类中用 Q_CLASSINFO 定义 |
| int **indexOfClassInfo**(char* name)             | 返回名称为name的类信息的序号，序号可用于 classInfo()         |
| int **classInfoCount**()                         | 返回这个类的类信息条数                                       |
| int **classInfoOffset**()                        | 返回这个类的第一条类信息序号                                 |
| **构造函数元数据：**                             |                                                              |
| int **constructorCount**()                       | 返回这个类的构造函数个数                                     |
| QMetaMethod **constructor**(int index)           | 返回序号为index的构造函数的元数据                            |
| int **indexOfConstructor**(char* constructor)    | 返回构造函数的序号，constructor 为正则化后的函数名和参数名   |
| **方法元数据：**                                 |                                                              |
| QMetaMethod **method**(int index)                | 返回序号为 index 方法的元数据                                |
| int **methodCount**()                            | 返回这个类的方法的个数（成员函数、信号、槽）                 |
| int **methodOffset**()                           | 返回这个类的第一个方法的序号                                 |
| int **indexOfMethod**(char* method)              | 返回名称为 method 的方法的序号                               |
| **枚举类型元数据：**                             |                                                              |
| QMetaMethod **method**(int index)                | 返回序号为 index 的枚举类型的元数据                          |
| int **enumeratorCount**()                        | 返回这个类的枚举类型个数                                     |
| int **enumeratorOffset**()                       | 返回这个类的第一个枚举类型的序号                             |
| int **indexOfEnumerator**(char* name)            | 返回名称为 name 的枚举类型的序号                             |
| **属性元数据：**                                 |                                                              |
| QMetaProperty **property**(int index)            | 返回序号为 index 的属性的元数据                              |
| int **propetyCount**()                           | 返回这个类的属性的个数                                       |
| int **propetyOffset**()                          | 返回这个类的第一个属性的序号                                 |
| int **indexOfProperty**(char* name)              | 返回名称为 name 的属性的序号                                 |
| **信号与槽：**                                   |                                                              |
| int **indexOfSignal**(char* signal)              | 返回名称为 signal 的信号的序号                               |
| int **indexOfSlot**(char* slot)                  | 返回名称为 slot 的槽函数序号                                 |
| **静态函数：**                                   |                                                              |
| bool **checkConnectArgs**(...)                   | 检查信号与槽函数的参数是否兼容                               |
| void **connectSlotsByName**(QObject* object)     | 迭代搜索 object 的所有子对象，将匹配的信号与槽相连接         |
| bool **invokeMethod**(...)                       | 运行 QObject 对象的某个方法                                  |
| QByteArray **normalizedSignature**(char* method) | 将方法 method 名称和参数字符串正则化，去除多余空格           |

-----

## 运行时类型信息

利用 QObject 和 QMetaObject 提供的接口，可以在运行时获得一个对象的类名称以及其父类的名称，判断其是否从某个类继承而来，并不需要适用 C++ 编译器的运行时类型信息（RTTI）

- 返回类名称

```cpp
QPushButton *btn = new QPushButton();
const QMetaObject *meta = btn->metaObject();
QString str = QString(meta->className());			// str = QPushButton
```

- 判断一个对象是不是继承自某个类的实例

````cpp
QPushButton *btn = new QPushButton();
bool result = btn->inherits("QPushButton");		// true
result = btn->inherits("QObject");				// true
result = btn->inherits("QCheckBox");			// faluse
````

- 获取父类的元对象信息

```cpp
QPushButton *btn = new QPushButton();
const QMetaObject *meta = btn->metaObject();
QString str1 = QString(meta->className());			// str1 = QPushButton

const QMetaObject *metaSuper = btn->metaObject()->superClass();
QString str2 = QString(metaSuper->className());		// str = QAbstractButton
```

- 动态类型转换（基类指针转派生类）

```cpp
QObject *btn = new QPushButton();
const QMetaObject *meta = btn->metaObject();
QString str1 = QString(meta->className());			// QPushButton

QPushButton *btnPush = qobject_cast<QPushButton*>(btn);
const QMetaObject *meta2 = btnPush->metaObject();
QString str1 = QString(meta2->className());			// QPushButton

QCheckBox* chkBox = qobject_cast<QCheckBox*>(btn);		// 转换失败返回 nullptr
```

## 属性系统

属性是基于元对象系统实现的，在 QObject 的子类中，可使用 Q_PROPERTY 定义属性，其格式：

```
Q_PROPERTY(type name
		(READ getFunction [WRITE setFunction] | 
		MEMBER memberName [(READ getFunction | WRITE setFunction)])
		[RESET resetFunction]
		[NOTIFY notifySignal]
		[REVISION int | REVISION(int[, int])]
		[DESIGNABLE bool]
		[SCRIPTABLE bool]
		[STORED bool]
		[USER bool]
		[BINDABLE bindableProperty]
		[CONSTANT]
		[FINAL]
		[REQUIRED] )
```

- READ：指定一个读取属性值的函数，没有 MEMBER 关键字时必须设定
- WRITE：指定一个设置属性值的函数
- MEMBER：指定一个成员变量与属性关联，使之成为可读可写的属性，之后无需再指定 READ 和 WRITE
- RESET：设置属性默认值的函数
- NOTIFY：设置一个信号，当属性值发生变化时就发射此信号
- DESIGNABLE：是否在 Qt Design 属性编辑器里可见，默认为 true
- USER：表示这个属性是不是用户可编辑的属性，默认值为 false
- CONSTANT：表示属性值是一个常数
- FINAL：所定义的属性不能被子类重载

### 属性的设置和读取

可读可写属性一般有

- 一个用于读取属性值的函数，函数名与属性名相同
- 一个用于设置属性值的函数，函数名一般是在属性名前加前缀 set

```
QString QLable::text();						// 读取
void QLable::setText(const QString& )		// 设置
```

通过 `QObject::property()` 和 `QObject::setProperty()` 

```
bool flag = ui->btn->property("flat").toBool();		// 读取
ui->btn->setProperty("flat", !flag);				// 设置
```

元对象所描述类的属性元数据

```cpp
const QMetaObject* meta = ui->spinBox->metaObject();		// 获取 spinBox 的元对象
int index = meta->indexOfProperty("value");					// 获取属性 value 的序号
QMetaProperty prop = meta->property(index);					// 获取属性 value 的元数据
bool res = prop.isWritable();								// 属性是否可写
res = prop.isDesignable();									// 属性是否可设计
res = prop.hasNotifySignal();								// 属性是否有反映属性变化的信号
```

### 动态属性

`QObject::setProperty()` 设置属性值时，如果属性名称不存在，就会为对象定义一个新属性并设置属性值，称为**动态属性**

动态属性是针对类的实例定义，只能使用 `QObject::property()` 方式读取

## 附加的类信息

元对象系统支持使用 `Q_CLASSINFO()`在类中定义一些类信息，类信息由名称和值组成，值只能用字符串表示

```
class QMyClass: public QObject{
	QOBJECT;
	Q_CLASSINFO("author", "wang");
	Q_CLASSINFO("company", "WPS");
	Q_CLASSINFO("version", "3.0.1");
};

// 返回名称和值
char* QMetaClassInfo::name();
char* QMetaClassInfo::value();
```

## 信号与槽

### connect() 使用

`connect()` 关联信号与槽，其有**一种成员函数**、**多种静态函数**版本

```cpp
connect(sender, SIGNAL(signal(int)), receiver, SLOT(slot(int)));	// 带参数需要注明参数类型
```

----

另一种版本在同名信号（参不同时）会引发歧义，需要使用 `qOverload<>()` 指明参数类型

- 对于 overload 型信号，只要槽函数不是 overload 型，就可以使用传递参数指针的 connect() 来进行信号与槽的关联，Qt 会根据槽函数的参数自动确定使用哪个信号

```cpp
void QCheckBox::clicked( );							// 信号
void QCheckBox::clicked(bool checked = false);

void do_checked(bool checked);
void do_checked();
// 传递函数指针类型，需要用 qOverload<> 指定参数类型
connect(ui->checkBox, &QCheckBox::clicked, this, &Widget::do_click);	// 产生歧义
connect(ui->checkBox, &QCheckBox::clicked, this, qOverload<bool>(&Widget::do_click);
connect(ui->checkBox, &QCheckBox::clicked, this, qOverload<>(&Widget::do_click);
```

---

QObject 成员函数版本`connect()`：没有接收者参数，因为接收者就是本身

```cpp
QMetaObject::Connection QObject::connect(const QObject* sender, const char* signal, 
			const char* method, Qt::ConnectionType type = Qt::AutoConnection)
```

---

不管那种 `connect()` 函数，最后都有一个 `Qt::ConnectionType` 参数，指定信号与槽的关联方式

- **`Qt::AutoConnection`**（默认值）：信号的接收者和发射者在同一个线程中，就使用 `Qt::DirectConnection` 方式，否则，使用 `Qt::QueuedConnection` 方式
- **`Qt::DirectConnection`** ：信号被发射时槽函数立即执行，发射者和接收者在同一个线程中
- **`Qt::QueuedConnection`** ：在事件循环回到接收者线程后运行槽函数，发射者和接收者不再同一个线程中
- **`Qt::BlockingQueuedConnection`**：同 `Qt::QueuedConnection`，但信号线程会阻塞，直到槽函数运行完毕；如果发射者和接收者在同一个线程中，此方式会导致死锁

### disconnect()

解除信号与槽的连接

常用的使用方法如下：

- 解除与一个发射者的所有信号的连接

```cpp
disconnect(myObject, nullptr, nullptr, nullptr);			// 静态函数形式
myObject->disconnect();										// 成员函数形式
```

- 解除与一个特定信号的所有连接

```cpp
disconnect(myObject, SIGNAL(mySignal()), nullptr, nullptr);			// 静态函数形式
myObject->disconnect(SIGNAL(mySignal()));							// 成员函数形式
```

- 解除与一个特定接收者的所有连接

```cpp
disconnect(myObject, nullptr, myReceiver, nullptr);
myObject->disconnect(myReceiver);
```

- 解除特定的一个信号与槽的连接

```cpp
disconnect(lineEdit, &QLineEdit::textChanged, label, &QLabel::setText);		// 静态函数形式
```

----

### sender() 

槽函数里可以调用 sender() 获取信号发射者的 Object 对象指针，如果提前知道信号发射者类型，可进行类型转换

```cpp
QPushButton *btn = qobject_cast<QPushButton*>(sender());		// 获取信号的发射者
```

### 自定义信号及其使用

信号函数必须是无返回值的函数，但是可以有输入参数；信号函数无需实现，只在特定条件下发射

```cpp
class TPerson: public QObject{
	Q_BJECT
private:
    int m_age = 10;
public:
    void incAge();
signal:
	void ageChanged(int value);			// 自定义信号，无需实现
}

void TPerson::incAge(){
    m_age++;
    emit ageChanged(m_age);				// 发射信号
}
```

## 对象数

QObect 对象以对象树的形式来组织，创建时可设定对象的父对象，即添加到父对象的子对象列表中

一个父对象被删除时，其全部子对象就会被自动删除

QObect 类有一些函数可在运行时访问对象树中的对象

### children()

返回对象的子对象列表

```cpp
typedef QList<QObject*> QObjectList;

const QObjectList &Object::children();
```

使用 children() 遍历布局里面的所有 PushButton 对象操作

```cpp
QObjectList objList = ui->groupBox_Btns->children();
for(int i = 0; i < objList.size(); ++i){
	const QMetaObject* meta = objList.at(i)->metaObject();		// 获取元对象
	QString className = QString(meta->className());				// 子对象类名称
	if(className == "QPushButton"){
		QPushButton* btn = qobject_cast<QPushButton*>(objList.at(i));
		QString str = btn->text();
		btn->setText(str+"*");
	}
}
```



