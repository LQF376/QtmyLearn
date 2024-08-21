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

### 为组件的信号生成槽函数原型和框架

- 不用手动关联，在窗口类的构造函数里面调用的 setupUi() 函数里自动完成关联

在界面类private slots 部分会自动增加槽函数声明，函数名是根据发射信号的对象名和信号名称自动命名

```cpp
void on_<object name>_<signal name>(<signal parameters>);		// 自动生成的槽函数
```



组件信号和槽函数的关联在 .ui 界面文件编译后的 ui_xx.h 文件内，`QMetaObject::connectSlotsByName()` 就是搜索界面上的所有组件，将名称匹配的信号和槽函数关联起来

### 使用自定义槽函数

如果多个信号关联同一个槽函数，上述两种方法存在一定局限，建议使用自定义槽函数，进行手动关联

自定义槽函数应自觉遵守命名规范，以 `do_`为前缀

## 为应用设置图标

- 将一个后缀为 `.ico` 的图标文件复制到项目根目录下

- 在项目配置文件 `.pro` 里用 RC_ICONS 设置图标文件名，并重新构建项目

  ```cpp
  RC_ICONS = editor.ico
  ```

  
