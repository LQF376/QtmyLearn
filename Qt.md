# Qt Creator 简介

对 Qt Creator 进行一些设置

![屏幕截图 2024-08-18 180225](https://raw.githubusercontent.com/LQF376/image/main/img/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202024-08-18%20180225.png)

![屏幕截图 2024-08-18 180830](https://raw.githubusercontent.com/LQF376/image/main/img/%E5%B1%8F%E5%B9%95%E6%88%AA%E5%9B%BE%202024-08-18%20180830.png)

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

![image-20240818235135584](https://raw.githubusercontent.com/LQF376/image/main/img/image-20240818235135584.png)

使用工具栏上的布局按钮时，只需要在窗体上选中需要设计布局的组件，然后点击某个布局按钮；在窗体上选择组件的同时按住 Ctrl 键可以实现多选；选择某个容器组件相当于选择了其内部的所有组件